/*
 * Problem   : 1462C - Unique Number
 * Link      : https://codeforces.com/contest/1462/problem/C
 * Submission: https://codeforces.com/contest/1462/submission/101320842
 * Rating    : 900   Tags: brute force, greedy, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-15 (Contest)
 */
#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
using namespace std;
#define vi vector<int>
#define vl vector<ll>
#define pi pair<int, int>
#define vpi vector<pi>
/*#define A(a) for(auto &x:a)cin>>x;
#define AA(a) for(auto x:a)cout<<x<<" ";cout<<endl;*/
#define fi(n) for(ll i=0;i<n;i++)
#define fj(n) for(ll j=0;j<n;j++)
#define T int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define I ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define All(a) a.begin(),a.end()
#define IN freopen("input.txt", "r", stdin);
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)
#define mod 998244353

int main()
{
	I
	T{
		int n;
		cin >> n;
		ll a[55];
		if(n<10)
			a[n]=n;
		a[10]=19;
		a[11]=29;
		a[12]=39;
		a[13]=49;
		a[14]=59;
		a[15]=69;
		a[16]=79;
		a[17]=89;
		a[18]=189;
		a[19]=289;
		a[20]=389;
		a[21]=489;
		a[22]=589;
		a[23]=689;
		a[24]=789;
		a[25]=1789;
		a[26]=2789;
		a[27]=3789;
		a[28]=4789;
		a[29]=5789;
		a[30]=6789;
		a[31]=16789;
		a[32]=26789;
		a[33]=36789;
		a[34]=46789;
		a[35]=56789;
		a[36]=156789;
		a[37]=256789;
		a[38]=356789;
		a[39]=456789;
		a[40]=1456789;
		a[41]=2456789;
		a[42]=3456789;
		a[43]=13456789;
		a[44]=23456789;
		a[45]=123456789;
		if(n<=45)
			cout << a[n] << endl;
		else
			cout << -1 << endl;
	}

	return 0;
}
