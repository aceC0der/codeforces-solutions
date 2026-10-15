/*
 * Problem   : 2024C - Concatenation of Arrays
 * Link      : https://codeforces.com/contest/2024/problem/C
 * Submission: https://codeforces.com/contest/2024/submission/287180055
 * Rating    : 1300   Tags: constructive algorithms, greedy, sortings
 * Verdict   : Accepted (156 ms, 100 KB)
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

bool comp(pi a, pi b){
	if(a.ff>a.ss) swap(a.ff, a.ss);
	if(b.ff>b.ss) swap(b.ff, b.ss);
	if(a.ff!=b.ff) return a.ff<b.ff;
	return a.ss<b.ss;
}

void solve(){
	int n;
	cin >> n;
	vpi a(n);
	rep(i, 0, n) cin >> a[i].ff >> a[i].ss;
	sort(all(a), comp);

	rep(i, 0, n) cout << a[i].ff << " " << a[i].ss << " ";
	cout << endl;
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
