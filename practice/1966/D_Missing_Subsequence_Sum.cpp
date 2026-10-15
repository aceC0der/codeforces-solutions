/*
 * Problem   : 1966D - Missing Subsequence Sum
 * Link      : https://codeforces.com/contest/1966/problem/D
 * Submission: https://codeforces.com/contest/1966/submission/261704857
 * Rating    : 1800   Tags: constructive algorithms, greedy, math, number theory
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-20 (Practice)
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
    int n, k;
    cin >> n >> k;
    int msb = 0, lsb = 0;
    pre(i, 23, 0){
        if(CheckBit(k, i)){
            msb = (1<<i);
            break;
        }
    }
    rep(i, 0, 21){
        if(CheckBit(k, i)){
            lsb = (1<<i);
            break;
        }
    }
    // cout << msb << " " << lsb << " " << k << endl;
    vi ans;
    // if(msb==lsb) lsb = 1;
    int x = 1;
    rep(i, 0, 21){
        if(x!=msb) ans.pb(x);
        x<<=1;
    }
    ans.pb(k-msb);
    ans.pb(k+1);
    ans.pb(k+msb+1);
    cout << ans.size() << endl;
    rep(i, 0, ans.size()) cout << ans[i] << " "; cout << endl;
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
