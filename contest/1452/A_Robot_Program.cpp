/*
 * Problem   : 1452A - Robot Program
 * Link      : https://codeforces.com/contest/1452/problem/A
 * Submission: https://codeforces.com/contest/1452/submission/98903975
 * Rating    : 800   Tags: math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-11-19 (Contest)
 */
#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int x, y;
		cin >> x >> y;

		int ans;
		if(x==y)
			ans = x+y;
		else if(x>y){
			ans = 2*x-1;
		}
		else
			ans = 2*y-1;
		cout << ans << endl;
	}
}
