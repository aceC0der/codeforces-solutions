/*
 * Problem   : 1440B - Sum of Medians
 * Link      : https://codeforces.com/contest/1440/problem/B
 * Submission: https://codeforces.com/contest/1440/submission/98721805
 * Rating    : 900   Tags: greedy, math
 * Verdict   : Accepted (311 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-11-17 (Contest)
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
		int n, k;
		cin >> n >> k;
		ll ans = 0;
		int pos;
		int med = n/2;
		if(n%2!=0)
			med++;

		int b=med-1;
		int a=n-med;
		//cout << med << " " << b << " " << a << endl;
		pos = k*b+1;
		for(int i=1; i<=n*k; i++){
			int x;
			cin >> x;
			if(pos==i){
				//cout << x << " xxxx" << endl;
				ans += x;
				pos += a+1;
			}
		}
		cout << ans << endl;
	}

	return 0;
}
