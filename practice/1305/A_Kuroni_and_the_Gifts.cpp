/*
 * Problem   : 1305A - Kuroni and the Gifts
 * Link      : https://codeforces.com/contest/1305/problem/A
 * Submission: https://codeforces.com/contest/1305/submission/94889722
 * Rating    : 800   Tags: brute force, constructive algorithms, greedy, sortings
 * Verdict   : Accepted (46 ms, 100 KB)
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
		vector<int> a, b;
		int n, x;
		cin >> n;
		for(int i=0;i<n; i++){
			cin >> x;
			a.push_back(x);
		}
		for(int i=0; i<n; i++){
			cin >> x;
			b.push_back(x);
		}
		sort(a.begin(),a.end());
		sort(b.begin(), b.end());
		for(int i=0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
		for(int i=0; i<n; i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}


	return 0;
}
