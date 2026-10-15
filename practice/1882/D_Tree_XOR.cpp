/*
 * Problem   : 1882D - Tree XOR
 * Link      : https://codeforces.com/contest/1882/problem/D
 * Submission: https://codeforces.com/contest/1882/submission/225572024
 * Rating    : 1900   Tags: bitmasks, dfs and similar, dp, greedy, trees
 * Verdict   : Accepted (373 ms, 25600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-28 (Practice)
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
#define N 200005
vector<ll> g[N],ans(N),d(N);
int vis[N];
ll an=0,a[N], n;
void dfs_1(int u){
    for(auto v:g[u]){
        if(vis[v])continue;
        vis[v]=1;
        dfs_1(v);
        d[u]+=d[v];
        an+=(a[u]^a[v])*d[v];
    }
}
void dfs_2(int u){
    for(auto v:g[u]){
        if(vis[v])continue;
        vis[v]=1;
        ans[v]=ans[u]+(a[u]^a[v])*(n-2*d[v]);
        dfs_2(v);
    }
}


void solve(){
    ll i,u,v, z;
    cin>>n;
    rep(i, 1, n+1){
        cin>>a[i];
        g[i].clear();
        d[i]=1;
        vis[i]=0;
    }
    rep(i, 1, n){
        cin>>u>>v;
        // cout << u << " " << v << endl;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vis[1]=1;
    dfs_1(1);
    ans[1]=an;
    rep(i, 1, n+1){
        vis[i]=0;
    }
    vis[1]=1;
    dfs_2(1);
    rep(i, 1, n+1) cout<<ans[i]<<" ";
    cout<<endl;
    an=0;
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
