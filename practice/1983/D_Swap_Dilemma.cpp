/*
 * Problem   : 1983D - Swap Dilemma
 * Link      : https://codeforces.com/contest/1983/problem/D
 * Submission: https://codeforces.com/contest/1983/submission/269543558
 * Rating    : 1700   Tags: constructive algorithms, data structures, divide and conquer, greedy, math, sortings
 * Verdict   : Accepted (202 ms, 1300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-07-09 (Practice)
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
	int n;
	cin >> n;
	vi a(n), b(n);
	rep(i, 0, n) cin >> a[i];
	rep(i, 0, n) cin >> b[i];
	vi c=a, d=b;
	sort(all(c));
	sort(all(d));
	if(c!=d){
		cout << "NO" << endl;
		return;
	}
	int cnt = 0;
	map<int, int> pos;
	rep(i, 0, n){
		pos[a[i]]=i;
	}
	rep(i, 0, n){
		if(a[i]==b[i]) continue;
		int t = pos[b[i]];
		cnt += (t-i-1)*2+1;
		pos[a[t]] = i;
		pos[a[i]] = t;
		swap(a[i], a[t]);
	}
	// cout << cnt << endl;
	// rep(i, 0, n) cout << a[i] << " "; cout << endl;
	// rep(i, 0, n) cout << b[i] << " "; cout << endl;
	cout << ((cnt&1)? "NO" : "YES") << endl;
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
