/*
 * Problem   : 1797D - Li Hua and Tree
 * Link      : https://codeforces.com/contest/1797/problem/D
 * Submission: https://codeforces.com/contest/1797/submission/209822935
 * Rating    : 1900   Tags: brute force, data structures, dfs and similar, dp, implementation, trees
 * Verdict   : Accepted (218 ms, 14900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-16 (Practice)
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

struct Compare{
public:
    bool operator()(const pi a, const pi b){
        if(a.ff>b.ff) return true;
        if(a.ss<b.ss) return true;
        return false;
    }
};

void solve(){
    int n, m;
    cin >> n >> m;
    vl a(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    vl adj[n];
    rep(i, 0, n-1){
        int u, v;
        cin >> u >> v;
        --u;--v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int root = 0;
    vi par(n, -1);
    vector<bool> vis(n, false);
    queue<int> q;
    q.push(root);
    par[root] = 0;
    vis[root] = true;
    vl lvl(n);
    lvl[root] = 0;
    while(!q.empty()){
        int node =  q.front();
        q.pop();
        for(auto nxt: adj[node]){
            if(!vis[nxt]){
                vis[nxt] = true;
                par[nxt] = node;
                lvl[nxt] = lvl[node]+1;
                q.push(nxt);
            }
        }
    }
    vl imp(n, 0);
    vl sz(n, 1);
    priority_queue<pi> pq;
    imp[0] = a[0];
    rep(i, 1, n){
        imp[i] = a[i];
        pq.push({lvl[i], i});
    }
    // rep(i, 0, n) cout << sz[i] << "\t"; cout << endl;
    while(!pq.empty()){
        int node = pq.top().ss;
        int pr = par[node];
        sz[pr] += sz[node];
        imp[pr] += imp[node];
        pq.pop();
    }
    // rep(i, 0, n) cout << i+1 << "\t"; cout << endl;
    // rep(i, 0, n) cout << sz[i] << "\t"; cout << endl;
    // rep(i, 0, n) cout << imp[i] << "\t"; cout << endl;
    // rep(i, 0, n) cout << a[i] << "\t"; cout << endl;
    // rep(i, 0, n) cout << par[i] << "\t"; cout << endl;
    set<pi> hvy_son[n];
    rep(i, 1, n){
        int pr = par[i];
        hvy_son[pr].insert({-sz[i], i});
    }
    while(m--){
        int qn, x;
        cin >> qn >> x;
        x--;
        if(qn==1){
            // cout << x+1 << "***" << endl;
            cout << imp[x] << endl;
        }
        else{
            if(!hvy_son[x].empty()){
                auto it = *hvy_son[x].begin();
                int sonx = it.ss;
                hvy_son[x].erase(hvy_son[x].begin());

                if(par[sonx]!=x) continue;
                int pr = par[x];
                // cout << pr+1 << " " << x+1 << " " << sonx+1 << "##########" << endl;
                // cout << hvy_son[pr].size() << endl;
                hvy_son[pr].erase({-sz[x], x});
                // cout << hvy_son[pr].size() << "***" << endl;

                // update size
                sz[x]-=sz[sonx];
                sz[sonx]+=sz[x];

                // update importance
                imp[x]-=imp[sonx];
                imp[sonx]+=imp[x];

                // change parents
                par[sonx] = pr;
                par[x] = sonx;
                // if(m<=6) break;
                // update heavy sons
                hvy_son[sonx].insert({-sz[x], x});
                hvy_son[pr].insert({-sz[sonx], sonx});
            }
        }
    }
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
