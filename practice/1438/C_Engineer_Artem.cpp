/*
 * Problem   : 1438C - Engineer Artem
 * Link      : https://codeforces.com/contest/1438/problem/C
 * Submission: https://codeforces.com/contest/1438/submission/98444189
 * Rating    : 2000   Tags: 2-sat, chinese remainder theorem, constructive algorithms, fft, flows
 * Verdict   : Accepted (170 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-11-15 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
#define fi first
#define se second
#define pb push_back
using namespace std;


int main()
{
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> a;

				if((i+j)%2==a%2)
					a++;
				cout << a << " ";
			}
			cout << endl;
		}
	}

	return 0;
}
