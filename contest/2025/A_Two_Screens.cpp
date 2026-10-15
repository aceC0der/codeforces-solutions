/*
 * Problem   : 2025A - Two Screens
 * Link      : https://codeforces.com/contest/2025/problem/A
 * Submission: https://codeforces.com/contest/2025/submission/285847611
 * Rating    : 800   Tags: binary search, greedy, strings, two pointers
 * Verdict   : Accepted (46 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-14 (Contest)
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
	string a, b;
	cin >> a >> b;
	int mx = 0;
	rep(i, 0, min(a.size(), b.size())){
		if(a[i]!=b[i]) break;
		mx = i+1;
	}
	int ans = a.size()+b.size()-mx+1;
	if(!mx) ans--;
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
