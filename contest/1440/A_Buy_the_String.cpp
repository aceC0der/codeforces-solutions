/*
 * Problem   : 1440A - Buy the String
 * Link      : https://codeforces.com/contest/1440/problem/A
 * Submission: https://codeforces.com/contest/1440/submission/98708583
 * Rating    : 800   Tags: implementation, math
 * Verdict   : Accepted (30 ms, 0 KB)
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
		int n, c0, c1, h;
		ll sum;
		cin >> n >> c0 >> c1 >> h;
		int cnt1=0;
		for(int i=0; i<n; i++){
			char ch;
			cin >> ch;
			if(ch=='1')
				cnt1++;
		}
		//cout << cnt1;
		ll ans=1000000000000000;
		int cnt0 = n-cnt1;
		if(c0==c1)
			ans=cnt0*c0+cnt1*c1;
		else if(c0<c1){
			int i=0;
			while(((i+1)*c0+(i+1)*h) < (i+1)*c1 && (i+1)<=cnt1)
				i++;
			cnt0 += i;
			cnt1 -= i;
			//cout << i;
			ans=cnt0*c0+cnt1*c1+i*h; 
		}
		else if(c0>c1){
			int i=0;
			while(((i+1)*c1+(i+1)*h) < (i+1)*c0 && (i+1)<=cnt0)
				i++;
			cnt0 -= i;
			cnt1 += i;
			//cout << i  << " " << cnt0 << " ";
			ans=cnt0*c0+cnt1*c1+i*h; 
		}

		cout << ans << endl;
	}

	return 0;
}
