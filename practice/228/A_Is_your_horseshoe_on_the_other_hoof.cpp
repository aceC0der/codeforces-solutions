/*
 * Problem   : 228A - Is your horseshoe on the other hoof?
 * Link      : https://codeforces.com/contest/228/problem/A
 * Submission: https://codeforces.com/contest/228/submission/94549438
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-03 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	ll arr[5];
	for(int i=0; i<4; i++){
		cin >> arr[i];
	}
	sort(arr, arr+4);
	int cnt =0;
	for(int i=0; i<3; i++){
		if(arr[i]==arr[i+1])
			cnt++;
	}
	cout << cnt ;

	return 0;
}
