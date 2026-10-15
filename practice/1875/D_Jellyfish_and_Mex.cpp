/*
 * Problem   : 1875D - Jellyfish and Mex
 * Link      : https://codeforces.com/contest/1875/problem/D
 * Submission: https://codeforces.com/contest/1875/submission/226066918
 * Rating    : 1600   Tags: dp
 * Verdict   : Accepted (31 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-10-01 (Practice)
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
    map<ll, ll> m;
    rep(i, 0, n) {
        ll x;
        cin >> x;
        m[x]++;
    }
    vl v;
    rep(i, 0, n){
        if(!m[i]) break;
        v.pb(m[i]);
    }
    v.pb(0);
    n = v.size();
    // rep(i, 0, n) cout << i << " "; cout << endl;
    // rep(i, 0, n) cout << v[i] << " "; cout << endl;
    vl dp(n+1);
    pre(i, n-2, 0){
        ll mn = LLONG_MAX;
        rep(j, i+1, n){
            ll cost = dp[j]+(v[i]-1)*j+i;
            mn = min(cost, mn); 
        }
        dp[i] = mn;
    }
    cout << dp[0] << endl;


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
