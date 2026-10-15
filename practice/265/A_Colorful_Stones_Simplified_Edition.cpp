/*
 * Problem   : 265A - Colorful Stones (Simplified Edition)
 * Link      : https://codeforces.com/contest/265/problem/A
 * Submission: https://codeforces.com/contest/265/submission/94550542
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (60 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-03 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	char s[55], t[55];
	cin >> s >> t;
	int szs=strlen(s), szt=strlen(t);
	int j=0, pos=1;
	for(int i=0; i<szt; i++){
		if(s[j]==t[i]){
			pos++;
			j++;
		}
	}
	cout << pos << endl;

	return 0;
}
