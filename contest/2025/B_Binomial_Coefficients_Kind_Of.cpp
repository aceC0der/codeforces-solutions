/*
 * Problem   : 2025B - Binomial Coefficients, Kind Of
 * Link      : https://codeforces.com/contest/2025/problem/B
 * Submission: https://codeforces.com/contest/2025/submission/285876013
 * Rating    : 1100   Tags: combinatorics, dp, math
 * Verdict   : Accepted (171 ms, 100 KB)
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

const ll mod = 1e9+7;

ll mul(ll a, ll b){
	return (a%mod * b%mod)%mod;
}

 ll binpow(ll a, ll b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return mul(res, mul(res, a));
    else
        return mul(res, res);
}

ll answer(ll k){
	return binpow(2, k);
}

void solve(){
	int n;
	cin >> n;
	rep(i, 0, n){
		int x;
		cin >> x;
	}
	rep(i, 0, n){
		int x;
		cin >> x;
		cout << answer(x) << endl;
	}
	
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	fios
	// TestCases{
		solve();
	// }
	return 0;
}
