/*
 * Problem   : 1408A - Circle Coloring
 * Link      : https://codeforces.com/contest/1408/problem/A
 * Submission: https://codeforces.com/contest/1408/submission/94311884
 * Rating    : 800   Tags: constructive algorithms
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-09-30 (Contest)
 */
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[105], b[105], c[105],p[105];
		for(int i=0; i<n; i++)
			cin >> a[i];
		for(int i=0; i<n; i++)
			cin >> b[i];
		for(int i=0; i<n; i++)
			cin >> c[i];
		p[0]=a[0];
		for(int i=1; i<n; i++){
			if(i!=n-1){
				if(a[i]!=p[i-1])
					p[i]=a[i];
				else if(b[i]!=p[i-1])
					p[i]=b[i];
				else if(c[i]!=p[i-1])
					p[i]=c[i];
			}
			else{
				if(a[i]!=p[i-1]&&a[i]!=p[0])
					p[i]=a[i];
				else if(b[i]!=p[i-1]&&b[i]!=p[0])
					p[i]=b[i];
				else if(c[i]!=p[i-1]&&c[i]!=p[0])
					p[i]=c[i];
			}
		}
		

		for(int i=0; i<n; i++)
			cout << p[i] << " ";
		cout << endl;
	}

	return 0;
}
