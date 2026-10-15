/*
 * Problem   : 443A - Anton and Letters
 * Link      : https://codeforces.com/contest/443/problem/A
 * Submission: https://codeforces.com/contest/443/submission/94648499
 * Rating    : 800   Tags: constructive algorithms, implementation
 * Verdict   : Accepted (46 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-04 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
	set<char> ans;
	char ch;
	while(cin >> ch){
		if(ch=='{'||ch==' '||ch==',')
			continue;
		if(ch=='}')
			break;
		ans.insert(ch);
	}
	cout << ans.size() << endl;

	return 0;
}
