/*
 * Problem   : 1783D - Different Arrays
 * Link      : https://codeforces.com/contest/1783/problem/D
 * Submission: https://codeforces.com/contest/1783/submission/226954681
 * Rating    : 2000   Tags: brute force, dp, implementation
 * Verdict   : Accepted (483 ms, 2800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-10-07 (Practice)
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

int convert(int x){
    return x+100000;
}
int mod = 998244353;

void solve(){
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    vi dp(4*90005);
    vi dp_nxt(4*90005);
    // cout << "***" << endl;
    // return;
    rep(i, 0, n){
        rep(j, -90000, 90002){
            dp[convert(j)] = 0;
            dp_nxt[convert(j)] = 0;
        }
    }
    rep(i, -90000, 90002){
        dp_nxt[convert(i)] = 2;
    }
    dp_nxt[convert(0)] = 1;
    dp = dp_nxt;
    pre(i, n-3, 1){
        rep(j, -90000, 90002){
            int d1 = a[i+1]-j;
            int d2 = a[i+1]+j;
            dp[convert(j)] = dp_nxt[convert(d1)];
            if(d1==d2){
                continue;
            }
            dp[convert(j)] = (dp[convert(j)]%mod + dp_nxt[convert(d2)]%mod)%mod;
        }
        dp_nxt = dp;
    }
    // cout << endl;
    cout << dp[convert(a[1])] << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fios
    // TestCases{
        solve();
    // }
    return 0;
}
