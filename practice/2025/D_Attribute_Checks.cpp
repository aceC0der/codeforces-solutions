/*
 * Problem   : 2025D - Attribute Checks
 * Link      : https://codeforces.com/contest/2025/problem/D
 * Submission: https://codeforces.com/contest/2025/submission/285946769
 * Rating    : 1800   Tags: brute force, data structures, dp, implementation, math, two pointers
 * Verdict   : Accepted (2358 ms, 111200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-15 (Practice)
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
int n, m;
int dp[5005][5005];

int searchPos(int k, vi& arr){
	int l=0, r=arr.size()-1;
	int ans = 0;
	while(l<=r){
		int mid = (l+r)/2;
		if(arr[mid]<=k){
			ans = mid+1;
			l = mid+1;
		}else r = mid-1;
	}
	return ans;
}

int calc(int i, int ival, vvi& intel, vvi& str){
	if(i>=m){
		return 0;
	}
	if(dp[i][ival]!=-1) return dp[i][ival];
	int sval = i-ival;
	int icnt = searchPos(ival, intel[i]);
	int scnt = searchPos(sval, str[i]);
	int mx = max(calc(i+1, ival+1, intel, str), calc(i+1, ival, intel, str));
	return dp[i][ival] = mx+icnt+scnt;
}

void solve(){
	cin >> n >> m;

	vvi intel(m+2), str(m+2);
	int crr = 0;
	rep(i, 0, m+2){
		rep(j, 0, m+2){
			dp[i][j] = -1;
		}
	}
	rep(i, 0, n){
		int x;
		cin >> x;
		if(x<0){
			x*=-1;
			str[crr].pb(x);
		}
		else if(x>0) intel[crr].pb(x);
		else{
			sort(all(intel[crr]));
			sort(all(str[crr]));
			crr++;
		}
	}
	m++;
	sort(all(intel[crr]));
	sort(all(str[crr]));

	cout << calc(0, 0, intel, str) << endl;
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
