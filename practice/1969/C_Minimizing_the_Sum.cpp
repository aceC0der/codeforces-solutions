/*
 * Problem   : 1969C - Minimizing the Sum
 * Link      : https://codeforces.com/contest/1969/problem/C
 * Submission: https://codeforces.com/contest/1969/submission/258774233
 * Rating    : 1700   Tags: dp, implementation
 * Verdict   : Accepted (436 ms, 71500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-04-29 (Practice)
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
const ll N = 3e5+2;
ll dp[N+10][15];
ll a[N+10];
ll n, k;

ll maxDiff(ll i, ll k){
    if(i>=n-1 || !k){
        return 0;
    }
    if(dp[i][k]!=-1) return dp[i][k];
    ll dif = 0;
    ll mxdif = maxDiff(i+1, k);
    ll j = i+1;
    ll mn = a[i];
    ll sum = a[i];
    ll cnt = 1;
    ll kk = k;
    while(k-- && j<n){
        sum += a[j];
        cnt++;
        mn = min(mn, a[j]);
        dif = sum - cnt*mn;
        mxdif = max(dif+maxDiff(j+1, k), mxdif);
        j++;
    }
    dp[i][kk] = mxdif;
    return dp[i][kk];
}



void solve(){
    cin >> n >> k;
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n+1) rep(j, 0, k+3) dp[i][j] = -1;
    ll sum = 0;

    rep(i, 0, n) sum += a[i];

    cout << sum-maxDiff(0, k) << endl;

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
