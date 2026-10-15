/*
 * Problem   : 405A - Gravity Flip
 * Link      : https://codeforces.com/contest/405/problem/A
 * Submission: https://codeforces.com/contest/405/submission/94493875
 * Rating    : 900   Tags: greedy, implementation, sortings
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-02 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int n;
	cin >> n;
	int ara[105];
	for(int i=0; i<n ; i++)
		cin >> ara[i];
	for(int i=n-1; i>0; i--){
		for(int j=i-1;j>=0; j--){
			if(ara[i]<ara[j]){
				int dif = ara[j] - ara[i];
				ara[i]+=(dif);
				ara[j]-=dif;
			}
		}
	}
	for(int i=0; i<n; i++)
		cout << ara[i] << " ";

	return 0;
}
