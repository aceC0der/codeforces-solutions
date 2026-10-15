/*
 * Problem   : 282A - Bit++
 * Link      : https://codeforces.com/contest/282/problem/A
 * Submission: https://codeforces.com/contest/282/submission/73302000
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-03-15 (Practice)
 */
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str1[] = "X++", str2[]="++X", str3[]="X--", str4[]="--X", bit[5];
	int n, x=0;
	cin >> n;
	while(n--)
	{
		cin >> bit;
		if(!(strcmp(str1, bit))||!(strcmp(str2, bit))) x++;
		if(!(strcmp(str3, bit))||!(strcmp(str4, bit))) x--;		
	}
	
	cout << x << endl;
	
	return 0;
}
