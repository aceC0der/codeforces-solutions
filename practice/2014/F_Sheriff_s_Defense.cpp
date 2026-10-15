/*
 * Problem   : 2014F - Sheriff's Defense
 * Link      : https://codeforces.com/contest/2014/problem/F
 * Submission: https://codeforces.com/contest/2014/submission/282510848
 * Rating    : 2000   Tags: dfs and similar, dp, greedy, trees
 * Verdict   : Accepted (312 ms, 31800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-22 (Practice)
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

const ll N = 2e5+10;
const ll INF = LLONG_MIN;
ll n, c;
ll dp[N][2][2];

ll calc(int i, int par, bool pst, bool st, vl& a, vvi& adj){
    if(dp[i][pst][st]!=INF) return dp[i][pst][st];
    ll ans = 0;
    ll v = 0;
    if(st) v = c;
    for(auto nxt: adj[i]){
        if(nxt==par) continue;
        // f = true;
        ll q1 = calc(nxt, i, st, 0, a, adj), q2 = calc(nxt, i, st, 1, a, adj)-v;
        // cout << i << " -> " << nxt << "  " << q1 << " ____ " << q2 << endl;
        ans += max({0LL, q1, q2});
    }

    if(st) ans+=a[i];
    if(pst && st) ans -= c;
    // cout << i << "::::: " << ans << endl;
    return dp[i][pst][st]=ans;
}

void solve(){
    cin >> n >> c;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    vector<vi> adj(n);
    rep(i, 0, n){
        rep(j, 0, 2){
            rep(k, 0, 2){
                dp[i][j][k] = INF;
            }
        }
    }
    rep(i, 0, n-1){
        int u, v;
        cin >> u >> v;
        u--;v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    ll q1 = calc(0, -1, 0, 0, a, adj), q2 = calc(0, -1, 0, 1, a, adj);
    // cout << q1 << " " << q2 << endl;
    ll ans = max(q1, q2);
    cout << ans << endl;

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
