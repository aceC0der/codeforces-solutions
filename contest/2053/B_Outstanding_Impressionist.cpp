/*
 * Problem   : 2053B - Outstanding Impressionist
 * Link      : https://codeforces.com/contest/2053/problem/B
 * Submission: https://codeforces.com/contest/2053/submission/298824119
 * Rating    : 1200   Tags: binary search, brute force, data structures, greedy
 * Verdict   : Accepted (155 ms, 1100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-28 (Contest)
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
#define vvi vector<vector<int>>
#define vb vector<bool>
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
    int n;
    cin >> n;
    vpi rngs(n);
    vi freq(2*n+10, 0);
    vi pref(2*n+10, 0);
    rep(i, 0, n){
        cin >>rngs[i].ff >> rngs[i].ss;
        if(rngs[i].ss==rngs[i].ff){
            freq[rngs[i].ff]++;
            pref[rngs[i].ff] = 1;
        }
    }
    rep(i, 1, 2*n+5){
        pref[i] += pref[i-1];
    }

    rep(i, 0, n){
        if(rngs[i].ss==rngs[i].ff){
            if(freq[rngs[i].ff]>1){
                cout << 0;
            }else cout << 1;
        }else{
            int len = rngs[i].ss-rngs[i].ff + 1;
            int val = pref[rngs[i].ss]-pref[rngs[i].ff-1];
            if(val>=len){
                cout << 0;
            }else cout << 1;
        }
    }
    cout << endl;
    
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
