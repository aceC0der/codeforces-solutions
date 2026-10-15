/*
 * Problem   : 1842C - Tenzing and Balls
 * Link      : https://codeforces.com/contest/1842/problem/C
 * Submission: https://codeforces.com/contest/1842/submission/211027674
 * Rating    : 1500   Tags: dp
 * Verdict   : Accepted (187 ms, 17500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-25 (Practice)
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
    vl a(n+1);
    rep(i, 1, n+1) cin >> a[i];
    vl dp(n+1, INT_MIN);
    vl maxx(n+1, INT_MIN);
    dp[0] = 0;
    map<ll, vl> last_pos;
    rep(i, 0, n){
        last_pos[a[i]].pb(i);
    }
    rep(i, 1, n+1){
        // if(last_pos.find(a[i])==last_pos.end()){
        //     last_pos[a[i]] = i;
        //     dp[i] = dp[i-1];
        //     continue;
        // }
        // ll lp = last_pos[a[i]];
        // if(lp){
        //     dp[i] = max(dp[i-1], dp[lp-1]+i-lp+1);
        // }
        // else dp[i] = max(dp[i-1], i-lp+1);
        // // last_pos[a[i]] = i;
        dp[i] = dp[i-1];
        dp[i] = max(dp[i], i+maxx[a[i]]);
        maxx[a[i]] = max(maxx[a[i]], dp[i-1]-i+1);
    }
    cout << dp[n] << endl;
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
