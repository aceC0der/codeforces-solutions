/*
 * Problem   : 1437A - Marketing Scheme
 * Link      : https://codeforces.com/contest/1437/problem/A
 * Submission: https://codeforces.com/contest/1437/submission/98880988
 * Rating    : 800   Tags: brute force, constructive algorithms, greedy, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-11-19 (Practice)
 */
#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int l, r;
		cin >> l >> r;
		
		if(2*l <= r)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}
