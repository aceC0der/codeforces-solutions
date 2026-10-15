/*
 * Problem   : 112A - Petya and Strings
 * Link      : https://codeforces.com/contest/112/problem/A
 * Submission: https://codeforces.com/contest/112/submission/73302581
 * Rating    : 800   Tags: implementation, strings
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-15 (Practice)
 */
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str1[103], str2[103];
	int len;
	
	cin >> str1 >> str2;
	len = strlen(str1);
	
	for(int i=0; i<len;i++)
	{
		if(str1[i]<97) str1[i]+=32;
		if(str2[i]<97) str2[i]+=32;
	}
	
	cout << strcmp(str1, str2) << endl;
	
	return 0;
}
