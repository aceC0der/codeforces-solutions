/*
 * Problem   : 709A - Juicer
 * Link      : https://codeforces.com/contest/709/problem/A
 * Submission: https://codeforces.com/contest/709/submission/94572380
 * Rating    : 900   Tags: implementation
 * Verdict   : Accepted (156 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-03 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	ll n, b, d, orange, sum=0, ans=0;
	cin >> n >> b >> d;
	for(ll i=0; i<n; i++){
		cin >> orange;
		if(orange<=b){
			sum+=orange;
			if(sum>d){
				ans++;
				sum=0;
			}
		}
		
	}
	cout << ans;



	return 0;
}
