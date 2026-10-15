/*
 * Problem   : 1845D - Rating System
 * Link      : https://codeforces.com/contest/1845/problem/D
 * Submission: https://codeforces.com/contest/1845/submission/211979877
 * Rating    : 1800   Tags: binary search, brute force, data structures, dp, dsu, greedy, math, two pointers
 * Verdict   : Accepted (561 ms, 4700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-07-03 (Practice)
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

void solve(){
    ll n;
    cin >> n;
    // cout << n << endl;
    vl a(n+1);
    rep(i, 1, n+1) cin >> a[i];
    vl posSuf(n+2);
    ll crnt = 0;
    ll mx = INT_MAX;
    ll sum = 0;
    ll l = n;
    pre(i, n, 1){
        // sum += a[i];
        crnt = min(0LL, crnt+a[i]);
        if(crnt<mx){
            l = i;
            mx = crnt;
        }
    }
    // cout << mx << " " << l << endl;
    ll ans=0;
    mx = 0;
    ll pref=0;
    rep(i, 0, l) pref+=a[i];
    ans = pref;
    cout << ans << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // fios
    TestCases{
        solve();
    }
    return 0;
}
