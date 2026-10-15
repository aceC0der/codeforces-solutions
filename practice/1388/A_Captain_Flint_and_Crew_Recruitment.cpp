/*
 * Problem   : 1388A - Captain Flint and Crew Recruitment
 * Link      : https://codeforces.com/contest/1388/problem/A
 * Submission: https://codeforces.com/contest/1388/submission/88635701
 * Rating    : 800   Tags: brute force, greedy, math, number theory
 * Verdict   : Accepted (31 ms, 3600 KB)
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
		if(n<=30)
		  cout << "NO" << endl;
		else if(n-30!=6 && n-30!=10 && n-30!=14){
			cout << "YES" << endl;
			cout <<"6 10 14 " << n-30 << endl;
		}
		else {
			cout << "YES" << endl;
			cout <<"6 10 15 " << n-31 << endl;
		}
	}

	return 0;
}
