/*
 * Problem   : 2021E1 - Digital Village (Easy Version)
 * Link      : https://codeforces.com/contest/2021/problem/E1
 * Submission: https://codeforces.com/contest/2021/submission/285019070
 * Rating    : 2300   Tags: brute force, data structures, dfs and similar, dp, dsu, fft, graphs, greedy, implementation, math, trees
 * Verdict   : Accepted (140 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-09 (Practice)
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

int n, m, p;

int find(int i, vi& par){
	if(i==par[i]) return i;
	return par[i]=find(par[i], par);
}

void connect(int u, int v, vi& par){
	int pu = find(u, par);
	int pv = find(v, par);
	par[pu] = pv;
}

void dfs(int node, int p, vi& dst, vector<vpi>& adj){
	for(pi edge: adj[node]){
		if(edge.ff==p) continue;
		dst[edge.ff] = max(dst[node], edge.ss);
		dfs(edge.ff, node, dst, adj);
	}
}

ll calcCost(int s, vl& crrCost, vi& src, vvi& dist){
	ll cost = 0;
	rep(i, 0, src.size()){
		int u = src[i];
		ll c = min(crrCost[u], dist[s][u]*1LL);
		cost+=c;
	}
	return cost;
}

void updateCost(int s, vl& crrCost, vi& src, vvi& dist){
	rep(i, 0, src.size()){
		int u = src[i];
		crrCost[u] = min(crrCost[u], dist[s][u]*1LL);
	}
}

void solve(){
	cin >> n >> m >> p;
	vi src(p);
	rep(i, 0, p){
		cin >> src[i];
		src[i]--;
	}
	vector<vpi> adj(n);
	vector<pair<int, pi>> edges;
	rep(i, 0, m){
		int u, v, w;
		cin >> u >> v >> w;
		u--;v--;
		edges.pb({w, {u, v}});
	}
	vi par(n);
	rep(i, 0, n) par[i] = i;
	sort(all(edges));
	// cout << "*******" << endl;
	// return;
	// int cnt = 1;
	rep(i, 0, m){
		int u = edges[i].ss.ff, v = edges[i].ss.ss;
		int w = edges[i].ff;
		// cout << u << " " << v << " " << w << " " << endl;
		// if(i>cnt) return;
		// cout << find(u, par) << " " << find(v, par) << endl;
		if(find(u, par)!=find(v, par)){
			connect(u, v, par);
			adj[u].pb({v, w});
			adj[v].pb({u, w});
		}
	}
	// return;
	vvi dist(n, vi(n, 0));
	rep(i, 0, n){
		dfs(i, -1, dist[i], adj);
	}

	// rep(i, 0, n){
	// 	rep(j, 0, n) cout << dist[i][j] << " "; cout << endl;
	// }

	vb connected(n, false);
	ll cost = 0;
	vl crrCost(n, LLONG_MAX);
	rep(i, 0, n){
		if(i>=p-1) {
			cout << 0 << " ";
			continue;
		}
		int mn = n+1;
		cost = LLONG_MAX;
		for(auto s: src){
			if(connected[s]) continue;
			ll tmpCost = calcCost(s, crrCost, src, dist);
			if(tmpCost<cost){
				cost = tmpCost;
				mn = s;
			}
		}
		updateCost(mn, crrCost, src, dist);
		connected[mn] = true;
		cout << cost << " ";
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
