/*
 * Problem   : 2022D1 - Asesino (Easy Version)
 * Link      : https://codeforces.com/contest/2022/problem/D1
 * Submission: https://codeforces.com/contest/2022/submission/285806345
 * Rating    : 1900   Tags: binary search, brute force, constructive algorithms, implementation, interactive
 * Verdict   : Accepted (718 ms, 100 KB)
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

void answer(int i){
	cout << "! " << i << endl;
	cout.flush();
}

bool ask(int i, int j){
	cout << "? " << i << " " << j << endl;
	cout.flush();
	bool f;
	cin >> f;
	return f;
}

void solve(){
	int n;
	cin >> n;
	for(int i=1; i<n; i+=2){
		bool q1 = ask(i, i+1);
		bool q2 = ask(i+1, i);
		int t = 1;
		if(i==1) t=n;
		if(q1!=q2){
			bool n1 = ask(t, i);
			bool n2 = ask(i, t);
			if(n1==n2) answer(i+1);
			else answer(i);
			return;
		}
	}
	answer(n);
}

int main()
{
	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
	// fios
	TestCases{
		solve();
	}
	return 0;
}
