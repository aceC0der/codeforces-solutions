/*
 * Problem   : 2022B - Kar Salesman
 * Link      : https://codeforces.com/contest/2022/problem/B
 * Submission: https://codeforces.com/contest/2022/submission/285779386
 * Rating    : 1300   Tags: binary search, greedy, math
 * Verdict   : Accepted (186 ms, 300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-14 (Practice)
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
	int n, x;
	cin >> n >> x;
	vl a(n);
	rep(i, 0, n) cin >> a[i];
	ll sum = 0, mx = 0;
	rep(i, 0, n){
		sum+=a[i];
		mx = max(mx, a[i]);
	}
	ll ans = max({mx, (sum+x-1)/x});
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
