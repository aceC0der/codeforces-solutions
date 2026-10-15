/*
 * Problem   : 1992A - Only Pluses
 * Link      : https://codeforces.com/contest/1992/problem/A
 * Submission: https://codeforces.com/contest/1992/submission/269909701
 * Rating    : 800   Tags: brute force, constructive algorithms, greedy, math, sortings
 * Verdict   : Accepted (46 ms, 0 KB)
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
	int a, b, c;
	cin >> a >> b >> c;
	int mx = a*b*c;
	rep(i, 0, 6){
		int ta = a+i;
		rep(j, 0, 6-i){
			int tb = b+j;
			int tc = c+(5-i-j);
			mx = max(mx, ta*tb*tc);
		}
	}
	cout << mx << endl;
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
