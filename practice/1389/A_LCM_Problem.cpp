/*
 * Problem   : 1389A - LCM Problem
 * Link      : https://codeforces.com/contest/1389/problem/A
 * Submission: https://codeforces.com/contest/1389/submission/88646792
 * Rating    : 800   Tags: constructive algorithms, greedy, math, number theory
 * Verdict   : Accepted (92 ms, 3700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-08-01 (Practice)
 */
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int l, r, x = -1, y=-1;
		cin >> l >> r;
		if(l*2<=r){
			x=l;
			y=l*2;
		}
		cout << x << ' ' << y<< endl;
	}

	return 0;
}
