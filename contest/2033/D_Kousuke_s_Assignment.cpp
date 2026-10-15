/*
 * Problem   : 2033D - Kousuke's Assignment
 * Link      : https://codeforces.com/contest/2033/problem/D
 * Submission: https://codeforces.com/contest/2033/submission/287731972
 * Rating    : 1300   Tags: data structures, dp, dsu, greedy, math
 * Verdict   : Accepted (202 ms, 4200 KB)
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

void solve(){
	int n;
	cin >> n;
	vi a(n);
	rep(i, 0, n) cin >> a[i];
	set<int> s;
	int sum = 0;
	int cnt = 0;
	rep(i, 0, n){
		sum += a[i];
		if(!sum || s.count(sum)){
			cnt++;
			s.clear();
			sum = 0;
			continue;
		}
		s.insert(sum);
	}
	cout << cnt << endl;
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
