/*
 * Problem   : 344A - Magnets
 * Link      : https://codeforces.com/contest/344/problem/A
 * Submission: https://codeforces.com/contest/344/submission/94494942
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (218 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-02 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int n, pk, k, grp=1;
	cin >> n >> k;
	while(--n){
		pk=k;
		cin >> k;
		if(pk!=k)
			grp++;
	}
	cout << grp << endl;

	return 0;
}
