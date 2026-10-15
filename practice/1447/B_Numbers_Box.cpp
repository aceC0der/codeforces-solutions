/*
 * Problem   : 1447B - Numbers Box
 * Link      : https://codeforces.com/contest/1447/problem/B
 * Submission: https://codeforces.com/contest/1447/submission/99273688
 * Rating    : 1000   Tags: greedy, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-11-23 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fi(n) for(int i=0;i<n; i++)
using namespace std;

typedef pair<int, int> pii;
typedef vector<int, int> vi;

int main()
{
  int tt;
  cin >> tt;
  while(tt--){
  	 ll n, m, x, s=0, neg=0, zero=0, mini=1000000;
  	 cin >> n >> m;
  	 n *= m;
  	 fi(n){
  	 	cin >> x;
  	 	if(x<0){
  	 		neg++;
  	 		x*=-1;
  	 	}
  	 	else if(x==0)
  	 	  zero++;
  	 	mini = min(x, mini);
  	 	s+=x;
  	 }
  	 //cout << s << endl;
  	 if(zero && neg%2)
  	 	 neg++;
  	 if(neg%2)
  	   s-=2*mini;
  	 
  	 cout << s << endl;
  }
  
  
	return 0;
}
