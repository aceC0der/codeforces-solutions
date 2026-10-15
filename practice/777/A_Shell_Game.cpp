/*
 * Problem   : 777A - Shell Game
 * Link      : https://codeforces.com/contest/777/problem/A
 * Submission: https://codeforces.com/contest/777/submission/94747379
 * Rating    : 1000   Tags: constructive algorithms, implementation, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-05 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	ll n, x;
	cin >> n >> x;
	int ara[3];
	ara[0] = ara[1] = ara[2] = 0;
	ara[x] = 1;
	n%=6;
	//cout<< n << endl;
	for(ll i=n; i>=1; i--)
	{
		if(i%2==0)
			swap(ara[1], ara[2]);
		else
			swap(ara[0], ara[1]);

	}
	for(int i=0; i<3; i++)
	{
		if(ara[i]==1)
			cout << i << endl;
	}

	return 0;

}
