/*
 * Problem   : 1417A - Copy-paste
 * Link      : https://codeforces.com/contest/1417/problem/A
 * Submission: https://codeforces.com/contest/1417/submission/93988952
 * Rating    : 800   Tags: greedy, math
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-09-27 (Contest)
 */
#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, k, num[1005], moves=0;
		cin >> n >> k;

		for(int i=0; i<n; i++){
			cin >> num[i];
		}
		sort(num, num+n);
		for(int i=n-1; i>=1; --i){
			moves += (k-num[i])/num[0];
			//cout << moves;
		}

		//moves+=(k-num[0])/num[1];
		cout << moves << endl;
	}
	return 0;
}
