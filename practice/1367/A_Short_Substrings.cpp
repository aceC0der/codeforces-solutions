/*
 * Problem   : 1367A - Short Substrings
 * Link      : https://codeforces.com/contest/1367/problem/A
 * Submission: https://codeforces.com/contest/1367/submission/88930485
 * Rating    : 800   Tags: implementation, strings
 * Verdict   : Accepted (31 ms, 3600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-08-05 (Practice)
 */
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	int n;
 cin >> n;
	while(n--){
	char in[102];
	string out;
	scanf("%s", in);
	int len=strlen(in);
	cout << in[0];
	for(int i=1;i<len;i+=2){
		cout << in[i];
	}
	cout << endl ;
	}
	

	return 0;
}
