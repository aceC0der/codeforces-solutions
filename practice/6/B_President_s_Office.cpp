/*
 * Problem   : 6B - President's Office
 * Link      : https://codeforces.com/contest/6/problem/B
 * Submission: https://codeforces.com/contest/6/submission/95261556
 * Rating    : 1100   Tags: implementation
 * Verdict   : Accepted (31 ms, 100 KB)
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
	char off[105][105], p;
	int n, m;
	cin >> n >> m >> p;
	for(int i=0; i<n; i++){
		cin >> off[i] ;
	}
	set<char> num;
	num.insert(p);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(off[i][j]==p){
				if(j-1>=0&&off[i][j-1]!='.')
					num.insert(off[i][j-1]);
				if(i-1>=0&&off[i-1][j]!='.')
					num.insert(off[i-1][j]);
				if(j+1<m&&off[i][j+1]!='.')
					num.insert(off[i][j+1]);
				if(i+1<n&&off[i+1][j]!='.')
					num.insert(off[i+1][j]);
			}
		}
	}
	cout << num.size()-1 << endl;

	return 0; 
}
