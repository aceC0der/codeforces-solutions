/*
 * Problem   : 2033C - Sakurako's Field Trip
 * Link      : https://codeforces.com/contest/2033/problem/C
 * Submission: https://codeforces.com/contest/2033/submission/287725534
 * Rating    : 1400   Tags: dp, greedy, two pointers
 * Verdict   : Accepted (93 ms, 100 KB)
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

void solve(){
	int n;
	cin >> n;
	vi a(n);
	rep(i, 0, n){
		cin >> a[i];
	}
	vpi arr;
	int i = 0, j=n-1;
	while(i<=j){
		arr.pb({a[i], a[j]});
		i++;
		j--;
	}
	int ans = 0;
	// rep(i, 0, n) cout << a[i] << " "; cout << endl;
	// rep(i, 0, arr.size()) cout << arr[i].ff << " " << arr[i].ss << endl;
	rep(i, 0, arr.size()-1){
		int cnt1 = (arr[i].ff==arr[i+1].ss)+(arr[i].ss==arr[i+1].ff);
		int cnt2 = (arr[i].ff==arr[i+1].ff)+(arr[i].ss==arr[i+1].ss);
		// if(cnt1<cnt2){
		// 	swap(arr[i+1].ff, arr[i+1].ss);
		// }
		ans += min(cnt1, cnt2);
		// cout << arr[i].ff << " " << arr[i].ss << " " << ans << endl;
	}
	if(n%2==0){
		ans+=(arr.back().ff==arr.back().ss);
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
