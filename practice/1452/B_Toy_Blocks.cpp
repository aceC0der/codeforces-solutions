/*
 * Problem   : 1452B - Toy Blocks
 * Link      : https://codeforces.com/contest/1452/problem/B
 * Submission: https://codeforces.com/contest/1452/submission/99345504
 * Rating    : 1400   Tags: binary search, greedy, math, sortings
 * Verdict   : Accepted (202 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-11-24 (Practice)
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
  	 ll n, x, s=0, z=0, mx=0;
  	 cin >> n;
  	// vl a;
  	 fi(n){
  	 	cin >> x;
     mx=max(mx, x);
  	 	s+=x;
  	 	if(!x)
  	 	  z++;
  	 	//a.pb(x);
  	 }
  	 n--;
  	 ll d = s/(n);
  	 if(s%n)
  	  d++;
    d = max(d, mx);
  	 ll ans;
  	// cout << d << endl;
  	 ans = (d*n-s);
  	/* while(z){
  	 	ans = (d*n-s);
  	 	if(ans<z)
  	 		d++;
  	 	else 
  	 		z=0;
  	 }*/
  	 //cout << s << " " << d << endl;
  	 cout << ans << endl;
  	 
  }
  
  
	return 0;
}
