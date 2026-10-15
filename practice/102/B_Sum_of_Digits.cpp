/*
 * Problem   : 102B - Sum of Digits
 * Link      : https://codeforces.com/contest/102/problem/B
 * Submission: https://codeforces.com/contest/102/submission/94978579
 * Rating    : 1000   Tags: implementation
 * Verdict   : Accepted (92 ms, 0 KB)
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
	char digit;
	ll sum=0, moves=0, len=0;
	while(cin>>digit){
		sum+=((int)digit-'0');
		//cout << sum << endl;
		len++;
	}
	if(len>1)
		moves++;
	while(sum>=10){
		moves++;
		ll nsum=0;
		while(sum>0){
			nsum+=sum%10;
			sum/=10;
		}
		sum=nsum;
	}
	cout << moves << endl;
	//cout<< (int)"10"-(int)"9" ;


	return 0; 
}
