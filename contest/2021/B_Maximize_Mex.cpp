/*
 * Problem   : 2021B - Maximize Mex
 * Link      : https://codeforces.com/contest/2021/problem/B
 * Submission: https://codeforces.com/contest/2021/submission/284555700
 * Rating    : 1200   Tags: brute force, greedy, math, number theory
 * Verdict   : Accepted (265 ms, 4500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-06 (Contest)
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
	ll n, x;
	cin >> n >> x;
	map<ll, int> freq;
	rep(i, 0, n){
		ll p;
		cin >> p;
		freq[p]++;
	}
	int mex = 0;
	rep(i, 0, n+2){
		if(freq[mex]){
			freq[mex]--;
			freq[mex+x]+=freq[mex];
			freq[mex] = 0;
			mex++;
		}
		else break;
	}
	cout << mex << endl;
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
