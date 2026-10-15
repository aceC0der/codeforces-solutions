/*
 * Problem   : 2021A - Meaning Mean
 * Link      : https://codeforces.com/contest/2021/problem/A
 * Submission: https://codeforces.com/contest/2021/submission/284820587
 * Rating    : 800   Tags: data structures, greedy, math, sortings
 * Verdict   : Accepted (109 ms, 0 KB)
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

void solve(){
	int n;
	cin >> n;
	vi a(n);
	rep(i, 0, n) cin >> a[i];
	sort(all(a), greater<int>());
	while(a.size()>1){
		int x = a.back(); a.pop_back();
		int y = a.back(); a.pop_back();
		a.push_back((x+y)/2);
	}
	cout << a[0] << endl;
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
