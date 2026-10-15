/*
 * Problem   : 1977B - Binary Colouring
 * Link      : https://codeforces.com/contest/1977/problem/B
 * Submission: https://codeforces.com/contest/1977/submission/262750933
 * Rating    : 1100   Tags: bitmasks, constructive algorithms, greedy, math
 * Verdict   : Accepted (108 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-26 (Contest)
 */
#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define vpi vector<pi >
#define vpl vector<pl >
#define endl '\n'
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
#define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

void solve(){
    ll n;
    cin >> n;
    vi ans;
    rep(i, 0, 32){
        ans.pb(CheckBit(n, i));
    }
    int last = -1;
    // rep(i, 0, 32){
    //     cout << ans[i] << " ";
    // }
    // cout << endl;
    rep(i, 0, 32){
        if(CheckBit(n, i)){
            if(last==-1){
                last = i;
            }
            else ans[i] = 0;
        }
        else if(last!=-1){
            if(i-last>1){
                ans[i] = 1;
                ans[last] = -1;
                last = i;
            }
            else last = -1;
        }
    }
    // rep(i, 1, 32){
    //     if(ans[i-1]==1 && ans[i]==-1){
    //         ans[i-1] = -1;
    //         ans[i] = 0;
    //     }
    // }
    cout << ans.size() << endl;
    rep(i, 0, 32){
        cout << ans[i] << " ";
    }
    cout << endl;
    // cout << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios
    TestCases{
        solve();
    }
    return 0;
}
