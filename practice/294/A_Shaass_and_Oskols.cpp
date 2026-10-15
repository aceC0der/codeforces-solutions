/*
 * Problem   : 294A - Shaass and Oskols
 * Link      : https://codeforces.com/contest/294/problem/A
 * Submission: https://codeforces.com/contest/294/submission/94569888
 * Rating    : 800   Tags: implementation, math
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-03 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	int n, arr[105], m, x, y;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	cin >> m;
	for(int i=0; i<m; i++){
		cin >> x >> y;
		x--;
		if(x>=1){
			arr[x-1]+=y-1;
		}
		if(x<n-1){
			arr[x+1]+=arr[x]-y;
		}
		arr[x]=0;
	}
	for(int i=0; i<n; i++)
		cout << arr[i] << endl;

	return 0;
}
