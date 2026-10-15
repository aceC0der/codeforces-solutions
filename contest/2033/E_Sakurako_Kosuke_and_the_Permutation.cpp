/*
 * Problem   : 2033E - Sakurako, Kosuke, and the Permutation
 * Link      : https://codeforces.com/contest/2033/problem/E
 * Submission: https://codeforces.com/contest/2033/submission/287753967
 * Rating    : 1400   Tags: brute force, data structures, dfs and similar, dsu, graphs, greedy, math
 * Verdict   : Accepted (265 ms, 4200 KB)
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

void solve(){
	int n;
	cin >> n;
	vi a(n);
	vi pos(n);
	rep(i, 0, n){
		cin >> a[i];
		a[i]--;
		pos[a[i]] = i;
	}
	int cnt = 0;
	// rep(i, 0, n) cout << a[i] << " "; cout << endl;
	rep(i, 0, n){
		if(a[i]==i || a[a[i]]==i) continue;
		cnt++;
		// int p = pos[i];
		// // cout << i << " " << a[i] << " " << p << " " << a[a[i]] << endl;
		// swap(a[a[i]], a[p]);
		// pos[a[a[i]]] = p;
		// pos[i] = a[i];
		int idx1 = a[i];
		int idx2 = pos[i];
		swap(a[idx1], a[idx2]);
		swap(pos[a[idx1]], pos[a[idx2]]);
		// rep(j, 0, n) cout << a[j] << " "; cout << "** " << cnt <<endl;
		// rep(j, 0, n) cout << pos[j] << " "; cout << endl;
	}
	cout << cnt << endl;
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
