/*
 * Problem   : 78B - Easter Eggs
 * Link      : https://codeforces.com/contest/78/problem/B
 * Submission: https://codeforces.com/contest/78/submission/95245030
 * Rating    : 1200   Tags: constructive algorithms, implementation
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-11 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
#define F first
#define S second
#define PB push_back
using namespace std;

int main()
{
	int n;
	cin >> n;
	string str;
	str = "ROYGBIV";
	int cycle = n/7;
	int extra = n%7;
	bool chk = false;
	if(extra>3){
		chk = true;
		cycle++;
	}
	//cout << cycle << " " << extra << endl;
	int cnt = 0;
	for(int i=0; i<cycle; i++){
		for(int j=0; j<7; j++){
			if(extra>0 && extra<=3 && j==4){
				for(int k=0; k<extra; k++){
					cout << str[k];
					cnt++;
				}
				extra = -1;
			}
			cout << str[j] ;
			cnt++;
			if(i==cycle-1&&j==extra-1 && chk)
				break;
		}
	}
	//cout << endl << cnt << endl;

	return 0; 
}
