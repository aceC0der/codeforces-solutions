/*
 * Problem   : 1614C - Divan and bitwise operations
 * Link      : https://codeforces.com/contest/1614/problem/C
 * Submission: https://codeforces.com/contest/1614/submission/212996757
 * Rating    : 1500   Tags: bitmasks, combinatorics, constructive algorithms, dp, math
 * Verdict   : Accepted (187 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-07-09 (Practice)
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

/*
    Analysis:
    -> Read the problem statement very carefully
    -> Find out what is given and what is wanted
    -> Try die hard to solve
    -> Prove your idea: why should it work?
    -> Eliminate your wrong ideas as soon as possible
    -> Have you missed any corner case?
    -> never miss post solving Analysis
 
    Remember:  You know what your capability is. Just believe in yourself and work very hard. GOD will never let you down.
*/
const ll mod = 1e9+7;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll xr = 0;
    rep(i, 0, m){
        ll a, b, c;
        cin >> a >> b >> c;
        xr |= c;
    }
    rep(i, 0, n-1){
        xr = (xr%mod * 2%mod)%mod;
    }
    cout << xr%mod << endl;
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
