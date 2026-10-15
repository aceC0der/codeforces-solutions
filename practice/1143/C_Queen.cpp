/*
 * Problem   : 1143C - Queen
 * Link      : https://codeforces.com/contest/1143/problem/C
 * Submission: https://codeforces.com/contest/1143/submission/284213134
 * Rating    : 1400   Tags: dfs and similar, trees
 * Verdict   : Accepted (155 ms, 4100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-03 (Practice)
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

int dfs(int node, int p, vi& arr, vvi& adj, vi& ans){
	int mx = arr[node];
	// cout << node << endl;
	for(auto nxt: adj[node]){
		if(nxt==p) continue;
		mx = max(dfs(nxt, node, arr, adj, ans), mx);
	}
	// cout << node << " " << mx << " " << arr[node] << endl;
	if(mx) return arr[node];
	ans.pb(node);
	return arr[node];
}

void solve(){
	int n;
	cin >> n;
	vvi adj(n);
	int root = 0;
	vi arr(n, 0);
	rep(i, 0, n){
		int p, c;
		cin >> p >> c;
		arr[i] = !c;
		if(p==-1){
			root = i;
		}else{
			p--;
			adj[i].pb(p);
			adj[p].pb(i);
		}
	}
	vi ans;
	int x = dfs(root, -1, arr, adj, ans);
	sort(all(ans));
	// cout << ans.size() << endl;
	if(!ans.size()){
		cout << -1 << endl;
		return;
	}
	for(auto it: ans) cout << it+1 << " "; cout << endl;
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
