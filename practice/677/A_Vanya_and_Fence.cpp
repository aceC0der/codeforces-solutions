/*
 * Problem   : 677A - Vanya and Fence
 * Link      : https://codeforces.com/contest/677/problem/A
 * Submission: https://codeforces.com/contest/677/submission/94404111
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-01 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int n, h, w=0, l;
	cin >> n >> h;
	for(int i=0; i<n; i++){
		cin >> l;
		if(l>h)
			w+=2;
		else
			w++;
	}
	cout << w << endl;

	return 0;
}
