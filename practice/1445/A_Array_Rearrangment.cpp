/*
 * Problem   : 1445A - Array Rearrangment
 * Link      : https://codeforces.com/contest/1445/problem/A
 * Submission: https://codeforces.com/contest/1445/submission/98367418
 * Rating    : 800   Tags: greedy, sortings
 * Verdict   : Accepted (31 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-11-14 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
#define fi first
#define se second
#define pb push_back
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, x, k;
		cin >> n >> x;
		vector<ll> a, b;
		for(int i=0; i<n; i++){
			cin >> k;
			a.pb(k);
		}
		for(int i=0; i<n; i++){
			cin >> k;
			b.pb(k);
		}
		bool chk=true;
		for(int i=0; i<n; i++){
			if(a[i]+b[n-1-i]>x){
				chk = !chk;
				break; 
			}
		}
		cout << (chk ? "YES" : "NO") << "\n";
	}
}
