/*
 * Problem   : 2021C2 - Adjust The Presentation (Hard Version)
 * Link      : https://codeforces.com/contest/2021/problem/C2
 * Submission: https://codeforces.com/contest/2021/submission/284816870
 * Rating    : 1900   Tags: constructive algorithms, data structures, greedy, implementation, sortings
 * Verdict   : Accepted (999 ms, 32500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-07 (Practice)
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


void build(int root, int l, int r, vi& arr, vector<pair<bool, pi>>& tree){
	if(l==r){
		tree[root].first = 1;
		tree[root].second.ff = tree[root].ss.ss = arr[l];
		return;
	}
	int left = 2*root+1;
	int right = left+1;
	int mid = (l+r)/2;
	build(left, l, mid, arr, tree);
	build(right, mid+1, r, arr, tree);
	tree[root].ff = (tree[left].ss.ss<=tree[right].ss.ff);
	tree[root].ff &= (tree[left].ff & tree[right].ff);
	tree[root].ss.ff = min(tree[left].ss.ff, tree[right].ss.ff);
	tree[root].ss.ss = max(tree[left].ss.ss, tree[right].ss.ss);
	return;
}

void update(int root, int b, int e, int i, int val, vector<pair<bool, pi>>& tree){
	if(i<b||i>e){
		return;
	}
	else if(i==e&&i==b){
		tree[root].ss.ff = tree[root].ss.ss = val;
		return;
	}
	int left = 2*root+1;
	int right = left+1;
	int mid = (b+e)/2;
	update(left, b, mid, i, val, tree);
	update(right, mid+1, e, i, val, tree);
	// cout << b << " ::: " << mid << " ::: " << e << endl;
	// cout << tree[left].ss.ss << " " << tree[right].ss.ff << endl;
	tree[root].ff = (tree[left].ss.ss<=tree[right].ss.ff);
	tree[root].ff &= (tree[left].ff & tree[right].ff);
	tree[root].ss.ff = min(tree[left].ss.ff, tree[right].ss.ff);
	tree[root].ss.ss = max(tree[left].ss.ss, tree[right].ss.ss);
	return;
}

void solve(){
	int n, m, q;
	cin >> n >> m >> q;
	vi a(n);
	rep(i, 0, n) cin >> a[i];
	rep(i, 0, n) a[i]--;
	map<int, int> mp;
	rep(i, 0, n) mp[a[i]] = i;
	vector<set<int>> first(n);
	rep(i, 0, n) first[i].insert(INT_MAX);
	vi slide(m);
	rep(i, 0, m){
		int x;
		cin >> x;
		x--;
		slide[i] = x;
		first[mp[x]].insert(i);
	}
	vi arr(n);
	rep(i, 0, n){
		arr[i] = *first[i].begin();
	}
	vector<pair<bool,pi>> tree(4*n+1);
	// rep(i, 0, n) cout << arr[i] << " "; cout << endl;
	build(0, 0, n-1, arr, tree);
	bool qans = tree[0].ff;
	cout << (qans? "YA" : "TIDAK") << endl;
	// cout << "********" << endl;
	// return;
	while(q--){
		int pos, crr;
		cin >> pos >> crr;
		pos--;crr--;
		int prev = slide[pos];
		slide[pos] = crr;
		prev = mp[prev], crr = mp[crr];


		first[prev].erase(pos);
		first[crr].insert(pos);

		int prevUpdate = *first[prev].begin();
		int crrUpdate = *first[crr].begin();
		arr[prev] = prevUpdate;
		arr[crr] = crrUpdate;
		// cout << prev << " " << crr << endl;
		// cout << prevUpdate << " " << crrUpdate << endl;
		// cout << arr[prev] << " " << arr[crr] << endl;
		// rep(i, 0, n) cout << arr[i] << " "; cout << endl;
		update(0, 0, n-1, prev, prevUpdate, tree);
		update(0, 0, n-1, crr, crrUpdate, tree);

		qans = tree[0].ff;
		cout << (qans? "YA" : "TIDAK") << endl;
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
