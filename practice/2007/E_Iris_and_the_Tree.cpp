/*
 * Problem   : 2007E - Iris and the Tree
 * Link      : https://codeforces.com/contest/2007/problem/E
 * Submission: https://codeforces.com/contest/2007/submission/279261592
 * Rating    : 1800   Tags: brute force, data structures, dfs and similar, math, trees
 * Verdict   : Accepted (327 ms, 17600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-02 (Practice)
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


int dfs(int node, int par, vector<vi>& adj, vector<int>& depth, vi& lastLeaf){
    // cout << node << " " ;
    int last = -1;
    for(auto nxt: adj[node]){
        if(nxt!=par){
            depth[nxt] = depth[node]+1;
            last = dfs(nxt, node, adj, depth, lastLeaf);
        }
    }
    lastLeaf[node] = last;
    if(last==-1) return node; 
    return last;
}

ll n;
int prev(int node){
    if(node) return node-1;
    return n-1;
}
int next(int node){
    if(node==n-1) return 0;
    return node+1;
}


void solve(){
    ll w;
    cin >> n >> w;
    vector<vi> adj(n);
    vector<int> par(n);
    rep(i, 1, n){
        int x;
        cin >> x;
        x--;
        par[i] = x;
        adj[x].pb(i);
        adj[i].pb(x);
    }
    ll total = n*w;
    vi depth(n), lastLeaf(n);
    int tmp = dfs(0, -1, adj, depth, lastLeaf);
    // cout << endl;
    vi unalcNode(n);
    rep(i, 1, n){
        if(par[i]==i-1){
            unalcNode[i-1] = 1;
        }
        else {
            unalcNode[i-1] = (depth[i-1]-depth[par[i]])+(depth[i]-depth[par[i]]);
        }
    }
    unalcNode[n-1] = depth[n-1];
    // rep(i, 0, n) cout << unalcNode[i] << " "; cout << endl;
    // rep(i, 0, n) cout << lastLeaf[i] << " "; cout << endl;
    int x = n-1;
    int cnt = n;
    // cout << total << endl;
    while(x--){
        ll node, val;
        cin >> node >> val;
        node--;
        if(lastLeaf[node]==-1){
            int prv = prev(node);
            unalcNode[prv]--;
            if(!unalcNode[prv]){
                cnt--;
                total-=w;
            }
            total+=2*val;
            // int nxt = next(node);
            unalcNode[node]--;
            if(!unalcNode[node]){
                cnt--;
                total-=w;
                // total+=val;
            }
        }else{
            int prv = prev(node);
            unalcNode[prv]--;
            if(!unalcNode[prv]){
                cnt--;
                total-=w;
            }
            total+=2*val;
            int last = lastLeaf[node];
            unalcNode[last]--;
            if(!unalcNode[last]){
                cnt--;
                total-=w;
            }
        }
        total-=cnt*val;
        w-=val;
        cout << total << " ";
    }
    cout << endl;
    
    
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
