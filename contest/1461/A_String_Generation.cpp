/*
 * Problem   : 1461A - String Generation
 * Link      : https://codeforces.com/contest/1461/problem/A
 * Submission: https://codeforces.com/contest/1461/submission/100919142
 * Rating    : 800   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-11 (Contest)
 */
#include <bits/stdc++.h>
#define ll long long 
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fi(n) for(int i=0;i<n; i++)
#define vl vector<ll>
using namespace std;

typedef pair<int, int> pii;
typedef vector<int, int> vi;

int main()
{
  int tt;
  cin >> tt;
  while(tt--){
  	string s = "abc";
  	int n, k;
  	cin >> n >> k;
  	 for(int i=0; i<n; i++){
  	 	cout << s[i%3];
  	 }
  	 cout << endl;
  	 
  }
  
  
	return 0;
}
