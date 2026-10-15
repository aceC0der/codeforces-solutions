/*
 * Problem   : 680B - Bear and Finding Criminals
 * Link      : https://codeforces.com/contest/680/problem/B
 * Submission: https://codeforces.com/contest/680/submission/94923296
 * Rating    : 1000   Tags: constructive algorithms, implementation
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-08 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
	vector<int> criminal;
	int n, x, a, c=0;
	cin >> n >> a;
	for(int i=0; i<n; i++){
		cin >> x;
		criminal.push_back(x);
	}
	a--;
	
	if(criminal[a]==1) c++;
	int m;
	for(int i=1; i<n; i++){
		m=0;
		if(a-i>=0)
			m+=criminal[a-i];
		if(a+i<n)
			m+=criminal[a+i];
		if(m==2)
			c+=m;
		else if(a-i<0&&m==1)
			c++;
		else if(a+i>=n&&m==1)
			c++;
		
	}
	cout << c << endl;
	return 0;
}
