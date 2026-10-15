/*
 * Problem   : 463B - Caisa and Pylons
 * Link      : https://codeforces.com/contest/463/problem/B
 * Submission: https://codeforces.com/contest/463/submission/94970940
 * Rating    : 1100   Tags: brute force, implementation, math
 * Verdict   : Accepted (140 ms, 1100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-09 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
#define F first
#define S second
#define PB push_back
using namespace std;

int main()
{
	int n, x;
	vector<int> h;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		h.PB(x);
	}
	ll energy=0;
	ll cost=h[0];
	for(int i=0; i<n-1; i++){
		energy+=h[i]-h[i+1];
		if(energy<0){
			cost+=(-1*energy);
			energy=0;
		}
	}
	cout << cost << endl;

	return 0; 
}
