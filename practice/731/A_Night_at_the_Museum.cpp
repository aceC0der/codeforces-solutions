/*
 * Problem   : 731A - Night at the Museum
 * Link      : https://codeforces.com/contest/731/problem/A
 * Submission: https://codeforces.com/contest/731/submission/94547430
 * Rating    : 800   Tags: implementation, strings
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-03 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	char name[105];
	cin >> name;
	int sz = strlen(name), moves=0, currentpos=97;
	for(int i=0; i<sz; i++){
		int cw = currentpos > (int)name[i] ? 122-currentpos+name[i]-96 : (int)name[i]-currentpos;
		int ccw = currentpos > (int)name[i] ? currentpos-name[i] : currentpos+26-(int)name[i];
		moves += min(cw, ccw);
		currentpos = (int)name[i];
		//cout << cw << " " << ccw << " " << moves << endl;
	}
	cout << moves ;

	return 0;
}
