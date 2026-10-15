/*
 * Problem   : 1420A - Cubes Sorting
 * Link      : https://codeforces.com/contest/1420/problem/A
 * Submission: https://codeforces.com/contest/1420/submission/94192608
 * Rating    : 900   Tags: math, sortings
 * Verdict   : Accepted (187 ms, 4200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-09-29 (Practice)
 */
#include <bits/stdc++.h>
#define vec vector <int>
#define ll long long
using namespace std;

int a[1000000+5];

int main()
{
	ll t;
	cin >> t;
	while(t--){
		int n;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        bool can=false;
        for (int i=1; i<n; i++)
        {
            if (a[i]>=a[i-1])
            {
                can=true;
                break;
            }
        }
        if (can) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
	}

	return 0;
}
