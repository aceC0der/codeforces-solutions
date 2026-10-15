/*
 * Problem   : 9A - Die Roll
 * Link      : https://codeforces.com/contest/9/problem/A
 * Submission: https://codeforces.com/contest/9/submission/94551320
 * Rating    : 800   Tags: math, probabilities
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-03 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int y, w;
	cin >> y >> w;
	int a, b=6;
	a = 7-max(y, w);
	if(b%a==0){
		b /= a;
		a=1;
	}
	else if(a==4){
		a=2;
		b=3;
	}
	cout << a << "/" << b;

	return 0;
}
