/*
 * Problem   : 2025C - New Game
 * Link      : https://codeforces.com/contest/2025/problem/C
 * Submission: https://codeforces.com/contest/2025/submission/285903075
 * Rating    : 1300   Tags: binary search, brute force, greedy, implementation, sortings, two pointers
 * Verdict   : Accepted (343 ms, 4700 KB)
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
#define int long long

void solve(){
	int n, k;
	cin >> n >> k;
	map<int, int> freq;
	rep(i, 0, n) {
		int x;
		cin >> x;
		freq[x]++;
	}
	map<int, int> maxK;
	int mx = 0;
	int prev = 0;
	int left = 0;
	int right = 0;
	int crr = 0;
	for(auto it: freq){
		int prev = it.ff-1;
		if(freq.find(prev)==freq.end()){
			left = right = it.ff;
			crr = it.ss;
			mx = max(it.ss, mx);
			continue;
		}
		right = it.ff;
		int crrK = right-left+1;
		if(crrK>k){
			crr -= freq[left];
			left++;
		}
		crr+=it.ss;
		mx = max(crr, mx);
	}
	cout << mx << endl;
}

int32_t main()
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
