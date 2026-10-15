/*
 * Problem   : 1805D - A Wide, Wide Graph
 * Link      : https://codeforces.com/contest/1805/problem/D
 * Submission: https://codeforces.com/contest/1805/submission/209343899
 * Rating    : 1800   Tags: dfs and similar, dp, graphs, greedy, trees
 * Verdict   : Accepted (109 ms, 10300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-12 (Practice)
 */
// #include <bits/stdc++.h>
// using namespace std;

// #define mp make_pair
// #define pb push_back
// #define ff first
// #define ss second
// #define ll long long
// #define vi vector<int>
// #define vl vector<ll>
// #define pi pair<int, int>
// #define pl pair<ll, ll>
// #define vpi vector<pi >
// #define vpl vector<pl >
// #define endl '\n'
// #define SetBit(x, k) (x |= (1LL << k))
// #define ClearBit(x, k) (x &= ~(1LL << k))
// #define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
// #define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
// #define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// #define all(a) a.begin(),a.end()
// #define rep(i, a, b) for(int i=a; i<b; i++)
// #define pre(i, a, b) for(int i=a; i>=b; i--)

// int dfs(int node, vi& dist, vi adj[], int par, vi& child_dist, vi& pars){
//     dist[node] = dist[par]+1;
//     if(par>1) pars[node] = pars[par];
//     else pars[node] = node;
//     int mx = 0;
//     for(auto it: adj[node]){
//         if(dist[it]==-1){
//             mx = max(mx, dfs(it, dist, adj, node, child_dist, pars)+1);
//         }
//     }
//     child_dist[node] = mx;
//     return mx;
// }

// void solve(){
//     int n;
//     cin >> n;
//     vi adj[n+1];
//     rep(i, 0, n-1){
//         int u, v;
//         cin >> u >> v;
//         // cout << u << " " << v << endl;
//         adj[u].pb(v);
//         adj[v].pb(u);
//     }
//     vi dist(n+1, -1);
//     vi child_dist(n+1, -1);
//     vi par(n+1, -1);
//     dist[1] = 0;
//     child_dist[1] = dfs(1, dist, adj, 0, child_dist, par);
//     vi freq(n+1, 0);
//     int mmx = child_dist[1];
//     freq[mmx]++;
//     // cout << mmx << " ";
//     rep(i, 2, n+1){
//         int p = par[i];
//         int mx = 0;
//         for(auto it: adj[1]){
//             if(it!=p){
//                 mx = max(mx, child_dist[it]+1+dist[i]);
//             }
//         }
//         mx = max(mx, child_dist[i]);
//         mx = max(mx, dist[i]);
//         // cout << mx << " ";
//         freq[mx]++;
//     }
//     // cout << endl;
//     // rep(i, 1, n+1) cout << freq[i] << " "; cout << endl;
    
//     int cnt = 0;
//     rep(i, 1, n+1){
//         cnt+=freq[i-1];
//         if(cnt!=n) cout << cnt+1 << " ";
//         else cout << cnt << " ";
//     }
//     cout << endl; 
// }

// int main()
// {
//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif
//     fios
//         solve();
//     return 0;
// }

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

void dfs(int node, int par, vi adj[], vi& dist){
    dist[node] = dist[par]+1;
    for(auto it: adj[node]){
        if(it!=par){
            dfs(it, node, adj, dist);
        }
    }
}

void solve(){
    int n;
    cin >> n;
    vi adj[n+1];
    vi dist(n+1, 0);
    rep(i, 0, n-1){
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dist[0] = -1;
    vi dist2(n+1, 0);
    dfs(1, 0, adj, dist);
    int mx = max_element(all(dist))-dist.begin();
    dfs(mx, 0, adj, dist);
    mx = max_element(all(dist))-dist.begin();
    dist2[0] = -1;
    dfs(mx, 0, adj, dist2);
    vi freq(n+1, 0);
    // int sum = 0;
    rep(i, 1, n+1){
        mx = max(dist[i], dist2[i]);
        freq[mx]++;
    }
    mx = 0;
    rep(i, 1, n+1){
        mx += freq[i-1];
        if(mx<n) cout << mx+1 << " ";
        else cout << mx << " ";
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios
    
    solve();        
    return 0;
}
