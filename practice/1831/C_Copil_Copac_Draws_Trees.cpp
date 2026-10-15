/*
 * Problem   : 1831C - Copil Copac Draws Trees
 * Link      : https://codeforces.com/contest/1831/problem/C
 * Submission: https://codeforces.com/contest/1831/submission/207749550
 * Rating    : 1400   Tags: dfs and similar, dp, graphs, trees
 * Verdict   : Accepted (374 ms, 16700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-29 (Practice)
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

void solve(){
    int n;
    cin >> n;
    vi adj[n];
    vpi mem(n, {-1, -1});
    map<pi, int> m;
    rep(i, 0, n-1){
    	int u, v;
    	cin >> u >> v;
    	u--;v--;
    	adj[u].push_back(v);
    	adj[v].push_back(u);
    	if(u>v) swap(u, v);
    	m[{u, v}] = i;
    }
    mem[0] = {1, -1};
    queue<int> q;
    q.push(0);
    while(!q.empty()){
    	int node = q.front();
    	q.pop();
    	for(auto it: adj[node]){
    		if(mem[it].ff==-1){
    			int u = node, v = it;
    			if(u>v) swap(u, v);
    			mem[it].ff = mem[node].ff;
    			// cout << node << " " << i << endl;
    			// cout << m[{u, v}] << " " << mem[node].ss << endl;
    			if(m[{u, v}]<mem[node].ss){
    				mem[it].ff++;
    			}
    			mem[it].ss = m[{u, v}];
    			q.push(it);
    		}
    	}
    }
    int mx = -1;
    rep(i, 0, n){
    	mx = max(mx, mem[i].ff);
    }
    cout << mx << endl;
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
