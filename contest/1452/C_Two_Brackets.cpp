/*
 * Problem   : 1452C - Two Brackets
 * Link      : https://codeforces.com/contest/1452/problem/C
 * Submission: https://codeforces.com/contest/1452/submission/98934921
 * Rating    : 800   Tags: greedy
 * Verdict   : Accepted (62 ms, 500 KB)
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
		string s;
		cin >> s;
		
		bool c1 = false, c2 = false;
		int cnt1=0, cnt2=0, ans=0;
		int len = s.length();
		//vi b1, b2;

		for(int i=0; i<len; i++){
			if(s[i]=='('){
				cnt1++;
			}
			else if(s[i]==')' && cnt1){
				ans++;
				cnt1--;
			}
			if(s[i]=='[')
				cnt2++;
			else if(s[i]==']' && cnt2){
				cnt2--;
				ans++;
			}
		}
		cout << ans << endl;
	}
}
