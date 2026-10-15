/*
 * Problem   : 339A - Helpful Maths
 * Link      : https://codeforces.com/contest/339/problem/A
 * Submission: https://codeforces.com/contest/339/submission/94649777
 * Rating    : 800   Tags: greedy, implementation, sortings, strings
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-04 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	string str;
	vector<int> v;
	cin >> str;
	int n=str.length();
	for(int i=0; i<n; i+=2){
		v.push_back((int)str[i]-48);
	}
	sort(v.begin(), v.end());
	n=v.size();
	cout << v[0];
	for(int i=1; i<n; i++)
		cout << "+" << v[i];

	return 0;
}
