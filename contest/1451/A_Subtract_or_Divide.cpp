/*
 * Problem   : 1451A - Subtract or Divide
 * Link      : https://codeforces.com/contest/1451/problem/A
 * Submission: https://codeforces.com/contest/1451/submission/99188811
 * Rating    : 800   Tags: greedy, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-11-21 (Contest)
 */
#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
using namespace std;
#define vl vector<ll>
#define pi pair<int, int>
#define vpi vector<pi>
/*#define A(a) for(auto &x:a)cin>>x;
#define AA(a) for(auto x:a)cout<<x<<" ";cout<<endl;*/
#define fi(n) for(ll i=0;i<n;i++)
#define fj(n) for(ll j=0;j<n;j++)
#define T int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define I ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define B(a) a.begin(),a.end()

int grtDiv(int n){
	//ll ret;
	for(int i=2; i<n; i++){
		if(n%i==0){
			return n/i;
		}
	}
	return 1;
}

int main(){
	I
	T{
		int n;
		cin >> n;
		int ans = 0;
		if(n==1)
			ans = 0;
		else if(n==2)
			ans++;
		else if(n==3)
			ans=2;
		else if(n%2==0)
			ans = 2;
		else 
			ans = 3;
		cout << ans << endl;
	}
	return 0;
}
