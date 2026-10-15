/*
 * Problem   : 1015A - Points in Segments
 * Link      : https://codeforces.com/contest/1015/problem/A
 * Submission: https://codeforces.com/contest/1015/submission/89168606
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (31 ms, 3900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-08-07 (Practice)
 */
#include <iostream>
using namespace std;

int main()
{
	int n, m, num[105], cnt=0;
	cin >> n >> m;
	for(int i=1;i<=m;i++)
	  num[i] = 0;
	while(n--){
		int l, r;
		cin >> l >> r;
		for(int i=l;i<=r;i++){
			if(num[i]==0){
			  num[i]=1;
			  ++cnt;
			}
		}
	}
	cout << m-cnt << endl;
	for(int i = 1; i<=m;i++){
		if(num[i]!=1){
			cout << i << " " ;
		}
	}

	return 0;
}
