/*
 * Problem   : 1726D - Edge Split
 * Link      : https://codeforces.com/contest/1726/problem/D
 * Submission: https://codeforces.com/contest/1726/submission/226870516
 * Rating    : 2000   Tags: brute force, constructive algorithms, dfs and similar, dsu, graphs, probabilities, trees
 * Verdict   : Accepted (748 ms, 26000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-10-06 (Practice)
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

void dfsUntil(string& ans, vector<bool>& vis, int node, vpi adj[], vi& par){
    // cout << node  << " : " << ans << endl;
    vis[node] = true;
    for(auto it: adj[node]){
        int nxt = it.ff;
        if(vis[nxt]){
            int id = it.ss;
            ans[id] = '1';
        }
        else{
            par[nxt] = node;
            dfsUntil(ans, vis, nxt, adj, par);
            int id = it.ss;
            ans[id] = '0';
        }
    }
}

int dfs(string& ans, vector<bool>& vis, int node, vpi adj[], int par){
    // cout << node  << " : " << ans << endl;
    vis[node] = true;
    // cout << node << " ";
    int ret = -1;
    for(auto it: adj[node]){
        int nxt = it.ff;
        int id = it.ss;
        if(ans[id]=='0') continue;
        if(nxt==par) continue;
        if(vis[nxt]){
            // int id = it.ss;
            // ans[id] = '1';
            return id;
        }
        else{
            ret = max(dfs(ans, vis, nxt, adj, node), ret);
            // int id = it.ss;
            // ans[id] = '0';
        }
    }
    // vis[node] = false;
    return ret;
}

void last_dfs(string& ans, int node, vpi adj[], int target, int par){
    for(auto it: adj[node])
    {
        int nxt = it.ff;
        int id = it.ss;
        if(ans[id]=='1') continue;
        if(nxt==par) continue;
        if(nxt==target){
            ans[id] = '1';
            // cout << it << "****" << endl;
            return;
        }
        last_dfs(ans, nxt, adj, target, node);
    }
}

void solve(){
    int n, m;
    cin >> n >> m;
    vpi adj[n];
    string ans;
    rep(i, 0, m) ans+='0';
    // cout << ans << endl;
    vpi edge(m);
    rep(i, 0, m){
        int u, v;
        cin >> u >> v;
        u--;v--;
        edge[i] = {u, v};
        adj[u].pb({v, i});
        adj[v].pb({u, i});
    }
    vector<bool> vis(n, false), vst(n, false);
    vi par(n);
    dfsUntil(ans, vis, 0, adj, par);
    int id = -1;
    rep(i, 0, m){
        if(ans[i]=='1' && !vst[edge[i].ff]){
            // cout << i << ": " << endl;
            id = max(id, dfs(ans, vst, edge[i].ff, adj, edge[i].ff));
            // cout << endl;
        }
    }
    // cout << id << endl;
    // cout << ans << "****" << endl;
    if(id==-1) cout << ans << endl;
    else{
        // int crnt = edge[id].ff;
        last_dfs(ans, edge[id].ff, adj, edge[id].ss, edge[id].ff);
        ans[id] = '0';
        cout << ans << endl;
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
