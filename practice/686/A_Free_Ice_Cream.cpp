/*
 * Problem   : 686A - Free Ice Cream
 * Link      : https://codeforces.com/contest/686/problem/A
 * Submission: https://codeforces.com/contest/686/submission/94649243
 * Rating    : 800   Tags: constructive algorithms, implementation
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-04 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	ll n, total;
	cin >> n >> total;
	ll kids=0, in;
	char ch;
	while(n--){
		cin >> ch >> in;
		if(ch=='+')
			total+=in;
		else if(total>=in)
			total-=in;
		else 
			kids++;
	}
	cout << total << " " << kids << endl;

	return 0;
}
