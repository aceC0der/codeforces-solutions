/*
 * Problem   : 1873H - Mad City
 * Link      : https://codeforces.com/contest/1873/problem/H
 * Submission: https://codeforces.com/contest/1873/submission/224698395
 * Rating    : 1700   Tags: dfs and similar, dsu, games, graphs, shortest paths, trees
 * Verdict   : Accepted (171 ms, 23700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-23 (Practice)
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

int detect_cycle(vi adj[], int node, vector<bool>& isCycle, vector<bool>& visited, int par){
    visited[node] = true;
    int ret = -1;
    for(auto next: adj[node]){
        if(!visited[next]){
            ret = max(detect_cycle(adj, next, isCycle, visited, node), ret);
        }
        else if(next!=par && !isCycle[next]){
            ret = next;
        }
    }
    // cout << node+1 << ": " << ret+1 << endl;
    if(ret!=-1){
        isCycle[node] = true;
    }
    if(ret==node){
        ret = -1;
    }
    return ret;
}

vi bfs(vi adj[], int root, int n){
    queue<int> q;
    q.push(root);
    vi dist(n, 0);
    vi visited(n, 0);
    visited[root] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto next: adj[node]){
            if(!visited[next]){
                visited[next] =  true;
                q.push(next);
                dist[next] = dist[node]+1;
            }
        }
    }
    return dist;
}

void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    vi adj[n];
    a--;b--;
    rep(i, 0, n){
        int u, v;
        cin >> u >> v;
        u--;v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    if(a==b){
        cout << "NO" << endl;
        return;
    }
    vector<bool> isCycle(n), visited(n);
    int r = detect_cycle(adj, 0, isCycle, visited, 0);
    // rep(i, 0, n) cout << isCycle[i] << " "; cout << endl;
    vi dista = bfs(adj, a, n);
    vi distb = bfs(adj, b, n);
    int mn = INT_MAX, node = -1;
    rep(i, 0, n){
        if(isCycle[i] && distb[i]<mn){
            mn = distb[i];
            node = i;
        }
    }
    // rep(i, 0, n) cout << dista[i] << " "; cout << endl;
    // rep(i, 0, n) cout << distb[i] << " "; cout << endl;
    // cout << a << " " << b << " " << node << endl;
    if(dista[node]>mn){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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
