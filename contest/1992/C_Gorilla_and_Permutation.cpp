/*
 * Problem   : 1992C - Gorilla and Permutation
 * Link      : https://codeforces.com/contest/1992/problem/C
 * Submission: https://codeforces.com/contest/1992/submission/269940686
 * Rating    : 900   Tags: constructive algorithms, math
 * Verdict   : Accepted (78 ms, 0 KB)
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
	int n, m, k;
	cin >> n >> m >> k;
	pre(i, n, k){
		cout << i << " ";
	}
	// cout << endl;
	rep(i, m+1, k) cout <<i << " "; //cout << endl;
	rep(i, 1, m+1) cout << i << " "; cout << endl;
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
