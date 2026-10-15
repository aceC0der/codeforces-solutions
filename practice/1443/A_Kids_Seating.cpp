/*
 * Problem   : 1443A - Kids Seating
 * Link      : https://codeforces.com/contest/1443/problem/A
 * Submission: https://codeforces.com/contest/1443/submission/98211741
 * Rating    : 800   Tags: constructive algorithms, math
 * Verdict   : Accepted (30 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-11-12 (Practice)
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
		int n;
		cin >> n;
		int cnt = n;
		n *= 4;
		for(int i=n; cnt>0; cnt--, i-=2)
			cout << i << " ";
		cout << endl;
	}
}
