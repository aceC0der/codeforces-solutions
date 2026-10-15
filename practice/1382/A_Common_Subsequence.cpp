/*
 * Problem   : 1382A - Common Subsequence
 * Link      : https://codeforces.com/contest/1382/problem/A
 * Submission: https://codeforces.com/contest/1382/submission/87839980
 * Rating    : 800   Tags: brute force
 * Verdict   : Accepted (31 ms, 3600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-07-24 (Practice)
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int T;
	cin >> T;
	
	while(T--)
	{
		int n, m, num[1000], num1[1000], k=0, ans;
		cin >> n >> m;
		
		for(int i=0;i<n;i++)
		  cin >> num[i];
		for(int i=0;i<m;i++)
		  cin >> num1[i];
		
		sort(num, num+n);
		sort(num1, num1+m);
		
		for(int i=0;i<m; i++)
		{
			if(binary_search(num, num+n, num1[i]))
			{
				k++;
				ans=num1[i];
				break;
			}
		}
		
		if(k==1)
		  cout << "YES" << endl << k << ' ' << ans << endl;
		else 
		  cout << "NO" << endl;
}
				
	
	return 0;
}
