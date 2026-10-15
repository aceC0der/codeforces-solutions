/*
 * Problem   : 1988B - Make Majority
 * Link      : https://codeforces.com/contest/1988/problem/B
 * Submission: https://codeforces.com/contest/1988/submission/270660672
 * Rating    : 900   Tags: greedy, implementation
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-07-15 (Contest)
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
	string s;
	cin >> s;
	int zr =(s[0]=='0'), on=(s[0]=='1');
	rep(i, 1, n){
		if(s[i]=='1') on++;
		if(s[i-1]=='1' && s[i]=='0') zr++;
	}
	// cout << on << " " << zr << endl;
	cout << (on>zr ? "YES" : "NO") << endl;
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
