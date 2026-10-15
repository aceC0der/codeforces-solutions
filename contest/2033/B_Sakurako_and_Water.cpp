/*
 * Problem   : 2033B - Sakurako and Water
 * Link      : https://codeforces.com/contest/2033/problem/B
 * Submission: https://codeforces.com/contest/2033/submission/287704971
 * Rating    : 900   Tags: brute force, constructive algorithms, greedy
 * Verdict   : Accepted (140 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-24 (Contest)
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
#define int ll

int calc(int x, int y, vvi& grid, int n){
	int mn = INT_MAX;
	while(x<n && y<n){
		mn = min(mn, grid[x][y]);
		x++;y++;
	}
	if(mn<0) return -mn;
	return 0;
}

void solve(){
	int n;
	cin >> n;
	vvi grid(n, vi(n));
	rep(i, 0, n){
		rep(j, 0, n) cin >> grid[i][j];
	}
	// rep(i, 0, n){
	// 	rep(j, 0, n) cout << grid[i][j] << " "; cout << endl;
	// }
	// cout << endl;
	// return;
	int val = 0;
	rep(i, 0, n){
		val += calc(0, i, grid, n);
	}
	rep(i, 1, n) val += calc(i, 0, grid, n);
	cout << val << endl;
}

int32_t main()
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
