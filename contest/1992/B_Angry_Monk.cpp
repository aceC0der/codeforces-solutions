/*
 * Problem   : 1992B - Angry Monk
 * Link      : https://codeforces.com/contest/1992/problem/B
 * Submission: https://codeforces.com/contest/1992/submission/269923807
 * Rating    : 800   Tags: greedy, math, sortings
 * Verdict   : Accepted (93 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-07-11 (Contest)
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
	ll n, k;
	cin >> n >> k;
	ll mx = 0;
	vl a(k);
	rep(i, 0, k){
		cin >> a[i];
	}
	sort(all(a));
	a.pop_back();
	ll ans = 0;
	rep(i, 0, k-1){
		// if(a[i]==1) continue;
		// cout << ans << "***" << endl;
		ans += a[i]-1 + a[i];
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
