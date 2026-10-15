/*
 * Problem   : 2022A - Bus to Pénjamo
 * Link      : https://codeforces.com/contest/2022/problem/A
 * Submission: https://codeforces.com/contest/2022/submission/285704918
 * Rating    : 800   Tags: constructive algorithms, greedy, implementation, math
 * Verdict   : Accepted (61 ms, 100 KB)
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
	int n, r;
	cin >> n >> r;
	vi a(n);
	rep(i, 0, n) cin >> a[i];
	int happy = 0, extra = 0;
	rep(i, 0, n){
		int e = a[i]%2;
		happy += a[i]-e;
		extra += e;
	}

	r-=happy/2;
	while(extra>0 && r>0){
		if(extra<=r){
			happy += extra;
			extra = 0;
			break;
		}
		r--;
		extra-=2;
	}
	cout << happy << endl;
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
