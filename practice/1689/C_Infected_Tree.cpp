/*
 * Problem   : 1689C - Infected Tree
 * Link      : https://codeforces.com/contest/1689/problem/C
 * Submission: https://codeforces.com/contest/1689/submission/160187159
 * Rating    : 1600   Tags: dfs and similar, dp, trees
 * Verdict   : Accepted (280 ms, 24800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-11 (Practice)
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
#define N 300006;

vector<int> g[300006];
vector<int> dp(300006);

int solve(int u, int p){
    int ans = INT_MAX;

    if(dp[u]!=-1) return dp[u];
    vector<int> x;
    for(int i: g[u]){
        if(i!=p){
            x.pb(i);
        }
    }
    int n = x.size();
    // rep(i, 0, n){
    //     cout << x[i] << " ";
    // }
    // cout << endl;
    if(n<=1) ans = n;
    else if(n==2){
        ans = min(solve(x[0], u)+2, solve(x[1], u)+2);
    }
    return dp[u] = ans;
}



int main()
{
    fios
    TestCases{
        int n;
        cin >> n;
        rep(i, 1, n+1){
            g[i].clear();
            dp[i] = -1;
        }
        rep(i, 0, n-1){
            int u, v;
            cin >> u >> v;
            g[u].pb(v);
            g[v].pb(u);
        }
        cout << n-solve(1, 0)-1 << endl;
    }
    return 0;
}
