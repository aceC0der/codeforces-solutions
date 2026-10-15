/*
 * Problem   : 1843D - Apple Tree
 * Link      : https://codeforces.com/contest/1843/problem/D
 * Submission: https://codeforces.com/contest/1843/submission/210413269
 * Rating    : 1200   Tags: combinatorics, dfs and similar, dp, math, trees
 * Verdict   : Accepted (311 ms, 19700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-20 (Contest)
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

int dfs(int node, vl& leafs, vector<bool>& vis, vi adj[]){
    vis[node] = true;
    bool f = false;
    for(auto it: adj[node]){
        if(!vis[it]){
            f = true;
            leafs[node]+=dfs(it, leafs, vis, adj);
        }
    }
    if(!f) leafs[node] = 1;
    return leafs[node];
}

void solve(){
    ll n;
    cin >> n;
    vi adj[n];
    vl leafs(n, 0);
    rep(i, 0, n-1){
        int u, v;
        cin >> u >> v;
        u--;v--;
        adj[u].pb(v);
        adj[v].pb(u);
        // leafs[u]++;
        // leafs[v]++;
    }
    int q;
    cin >> q;
    vector<bool> vis(n, false);

    int x = dfs(0, leafs, vis, adj);
    // rep(i, 0, n) cout << leafs[i] << " "; cout << endl;
    while(q--){
        int u, v;
        cin >> u >> v;
        u--;v--;
        cout << leafs[u]*leafs[v]*1LL << endl;
    }
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
