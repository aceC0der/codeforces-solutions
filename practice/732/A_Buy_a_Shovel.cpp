/*
 * Problem   : 732A - Buy a Shovel
 * Link      : https://codeforces.com/contest/732/problem/A
 * Submission: https://codeforces.com/contest/732/submission/94548531
 * Rating    : 800   Tags: brute force, constructive algorithms, implementation, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-03 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int k, r;
	cin >> k >> r;
	int i=1;
	while(1){
		if((i*k)%10==r||(i*k)%10==0){
			cout << i << endl;
			break;
		}
		i++;
	}

	return 0;
}
