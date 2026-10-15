/*
 * Problem   : 1316A - Grade Allocation
 * Link      : https://codeforces.com/contest/1316/problem/A
 * Submission: https://codeforces.com/contest/1316/submission/94896605
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (124 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-08 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<int> std;
		int x;
		for(int i=0; i<n; i++){
			cin >> x;
			std.push_back(x);
		}
		int dif=m-std[0];
		for(int i=1; i<n; i++){
			if(dif>0){
				dif-=std[i];
			}
			else
				break;
		}
		if(dif<=0)
			cout << m << endl;
		else
			cout << m-dif << endl;
	}

	return 0;
}
