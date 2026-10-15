/*
 * Problem   : 770A - New Password
 * Link      : https://codeforces.com/contest/770/problem/A
 * Submission: https://codeforces.com/contest/770/submission/94653340
 * Rating    : 800   Tags: *special, implementation
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-04 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	char ch='a';
	while(n--){
		cout << ch;
		if(ch=='a'+k-1)
			ch='a';
		else
			ch++;
	}

	return 0;
}
