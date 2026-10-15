/*
 * Problem   : 2024D - Skipping
 * Link      : https://codeforces.com/contest/2024/problem/D
 * Submission: https://codeforces.com/contest/2024/submission/287183735
 * Rating    : 1700   Tags: constructive algorithms, data structures, divide and conquer, dp, flows, graphs, greedy, implementation, shortest paths
 * Verdict   : Accepted (436 ms, 22400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-21 (Practice)
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

int n;

vl shortestPath(int src, vector<vpi>& adj)
{
    priority_queue<pi, vector<pi>, greater<pi>> pq;
	
    vector<ll> dist(n, LLONG_MAX);

    pq.push({0, src});
    dist[src] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        
        for (auto i: adj[u]) {
            int v = i.ss;
            int weight = i.ff;

            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

	return dist;
}

void solve(){
	cin >> n;
	vl a(n);
	rep(i, 0, n){
		cin >> a[i];
	}
	vi b(n);
	rep(i, 0, n){
		cin >> b[i];
		b[i]--;
	}
	vector<vpi> adj(n);

	rep(i, 0, n){
		adj[i].pb({a[i], b[i]});
		if(i) adj[i].pb({0, i-1});
	}


	// rep(i, 0, n) cout << a[i] << " "; cout << endl;
	// rep(i, 0, n) cout << b[i] << " "; cout << endl;

	// rep(i, 0, n){
	// 	cout << i << ": ";
	// 	for(auto it: adj[i]) cout << it.ss << " "; cout << endl;
	// }
	// return;


	vl dist = shortestPath(0, adj);
	ll ans = 0;
	ll sum = 0;
	rep(i, 0, n){
		sum+=a[i];
		ans = max(ans, sum-dist[i]);
	}

	cout << ans << endl;

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
