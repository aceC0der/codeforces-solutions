/*
 * Problem   : 1703G - Good Key, Bad Key
 * Link      : https://codeforces.com/contest/1703/problem/G
 * Submission: https://codeforces.com/contest/1703/submission/163954443
 * Rating    : 1600   Tags: bitmasks, brute force, dp, greedy, math
 * Verdict   : Accepted (156 ms, 43000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-13 (Practice)
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

ll dp[(int)1e5+5][40];
ll n, k;
ll solve(vl& a, ll pos, ll bad){
    // cout << "*" << endl;
    if(pos==n || bad>31){
        return dp[pos][bad] = 0;
    }
    if(dp[pos][bad]!=-1) return dp[pos][bad];
    // ll x = 1<<bad;
    ll x = 1<<bad;
    ll r1 = solve(a, pos+1, bad)+(a[pos]/x)-k;
    ll r2 = solve(a, pos+1, bad+1)+(a[pos]/(2*x));
    ll ret = max(r1, r2);
    return dp[pos][bad] = ret;
}

int main()
{
    fios
    TestCases{
        cin >> n >> k;
        vl a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        rep(i, 0, n){
            rep(j, 0, 40){
                dp[i][j] = -1;
            }
        }
        cout << solve(a, 0, 0) << endl;

    }
    return 0;
}
