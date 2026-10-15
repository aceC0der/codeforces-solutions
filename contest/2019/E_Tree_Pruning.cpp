/*
 * Problem   : 2019E - Tree Pruning
 * Link      : https://codeforces.com/contest/2019/problem/E
 * Submission: https://codeforces.com/contest/2019/submission/283249330
 * Rating    : 1700   Tags: constructive algorithms, dfs and similar, dp, sortings, trees
 * Verdict   : Accepted (718 ms, 35400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-27 (Contest)
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

int dfs(int i, vvi& adj, int p, vi& depth, vi& maxVal, vi& pdepth){
    if(p!=-1) depth[i] = depth[p]+1;
    pdepth[depth[i]]++;
    int mx = depth[i];
    for(int nxt: adj[i]){
        if(nxt!=p){
            mx = max(dfs(nxt, adj, i, depth, maxVal, pdepth), mx);
        }
    }
    maxVal[mx]++;
    return mx;
}

void solve(){
    int n;
    cin >> n;
    vvi adj(n);
    rep(i, 0, n-1){
        int u, v;
        cin >> u >> v;
        u--;v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    queue<int> q;
    vi depth(n, -1);
    depth[0] = 0;
    vi cost(n+2, 0);
    vi pdepth(n+1, 0), maxVal(n+1, 0);
    ll mx = dfs(0, adj, -1, depth, maxVal, pdepth);
    // while(!q.empty()){
    //     int t = q.front();
    //     q.pop();
    //     for(int nxt: adj[t]){
    //         if(depth[nxt]==-1){
    //             depth[nxt] = depth[t]+1;
    //             mx = max(depth[nxt], mx);
    //             if(adj[nxt].size()<=2) leafVal[nxt] = leafVal[t]+1;
    //             else leafVal[nxt]=0;
                
    //             q.push(nxt);
    //         }
    //     }
    // }
    ll sum = 0;
    pre(i, n, 1){
        sum += pdepth[i];
    }
    ll mn = INT_MAX;
    ll pcost = 0;
    rep(i, 1, mx+1){
        sum-=pdepth[i];
        mn = min(mn, pcost+sum);
        // cout << pcost << " " << sum << " " << mn << endl;
        pcost+=maxVal[i];
    }
    cout << mn << endl;



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
