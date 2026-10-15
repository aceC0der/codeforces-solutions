/*
 * Problem   : 427A - Police Recruits
 * Link      : https://codeforces.com/contest/427/problem/A
 * Submission: https://codeforces.com/contest/427/submission/94495811
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (93 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-02 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int n, pk, k, grp=0,pol=0;
	cin >> n;
	while(n--){
		cin >> k;
		if(k==-1&&pol==0){
			grp++;
		}
		else if(k==-1&&pol>0){
			pol--;
		}
		else
			pol+=k;
	}
	cout << grp << endl;

	return 0;
}
