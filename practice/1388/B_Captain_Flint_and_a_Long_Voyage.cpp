/*
 * Problem   : 1388B - Captain Flint and a Long Voyage
 * Link      : https://codeforces.com/contest/1388/problem/B
 * Submission: https://codeforces.com/contest/1388/submission/88642324
 * Rating    : 1000   Tags: greedy, math
 * Verdict   : Accepted (46 ms, 3600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-08-01 (Practice)
 */
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int p = (n+3)/4;
		while(n--){
			if(n>=p)
			  cout << "9" ;
			else
			  cout << "8" ;
		}
		cout << endl;
	}

	return 0;
}
