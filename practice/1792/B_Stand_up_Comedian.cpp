/*
 * Problem   : 1792B - Stand-up Comedian
 * Link      : https://codeforces.com/contest/1792/problem/B
 * Submission: https://codeforces.com/contest/1792/submission/210309993
 * Rating    : 1200   Tags: greedy, math
 * Verdict   : Accepted (108 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-20 (Practice)
 */
#include<iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
	    int a, b, c, d;
	    cin >> a >> b >> c >> d ;
	    int ttl = a+b+c+d;
	    int ans = a;
	    if(a){
	        ans += min(b,c)*2;
	    }
	    ttl-=ans;
	    ans+=min(a+1,ttl);
	    cout << ans << endl;
	}
}
