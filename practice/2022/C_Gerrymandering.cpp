/*
 * Problem   : 2022C - Gerrymandering
 * Link      : https://codeforces.com/contest/2022/problem/C
 * Submission: https://codeforces.com/contest/2022/submission/285799151
 * Rating    : 1800   Tags: dp, implementation
 * Verdict   : Accepted (77 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-14 (Practice)
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

int n;

int count(char a, char b, char c){
	int cnt = (a=='A') + (b=='A') + (c=='A');
	return (cnt>=2);
}

int calc(int s, int i, vvi& dp, string str[]){
	if(i>=n){
		return 0;
	}
	if(dp[s][i]!=-1) return dp[s][i];
	int mx = 0;
	if(s==0){
		if(i+2<n) mx = max(mx, calc(0, i+3, dp, str) + count(str[0][i], str[0][i+1], str[0][i+2]) + count(str[1][i], str[1][i+1], str[1][i+2]));
		mx = max(mx, calc(1, i+1, dp, str)+count(str[0][i], str[1][i], str[1][i+1]));
		mx = max(mx, calc(2, i+1, dp, str)+count(str[0][i], str[0][i+1], str[1][i]));
	}
	else if(s==1){
		if(i+3<n) mx = max(mx, calc(1, i+3, dp, str) + count(str[0][i], str[0][i+1], str[0][i+2]) + count(str[1][i+1], str[1][i+2], str[1][i+3]));
		mx = max(mx, calc(0, i+2, dp, str)+count(str[0][i], str[1][i+1], str[0][i+1]));
	}
	else{
		if(i+3<n) mx = max(mx, calc(2, i+3, dp, str) + count(str[1][i], str[1][i+1], str[1][i+2]) + count(str[0][i+1], str[0][i+2], str[0][i+3]));
		mx = max(mx, calc(0, i+2, dp, str)+count(str[1][i], str[1][i+1], str[0][i+1]));
	}	
	return dp[s][i] = mx;
}

void solve(){
	cin >> n;
	string s[2];
	cin >> s[0] >> s[1];
	vvi dp(3, vi(n, -1));
	cout << calc(0, 0, dp, s) << endl;

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
