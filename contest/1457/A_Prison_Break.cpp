/*
 * Problem   : 1457A - Prison Break
 * Link      : https://codeforces.com/contest/1457/problem/A
 * Submission: https://codeforces.com/contest/1457/submission/99844233
 * Rating    : 800   Tags: brute force, math
 * Verdict   : Accepted (78 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-11-29 (Contest)
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
#define mod 998244353

int main(){
	I
	T{
		ll n, m;
		cin >> n >> m;
		ll r, c; 
		cin >> r >> c;
		ll res=0; 
		res = max(res, (abs(1-r)+ abs(1-c)));
		res = max(res, (abs(n-r)+ abs(1-c)));
		res = max(res, (abs(1-r)+ abs(m-c)));
		res = max(res, (abs(n-r)+ abs(m-c)));

		cout << res << endl;
	}
	
	return 0;
}
//57475563
