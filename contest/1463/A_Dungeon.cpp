/*
 * Problem   : 1463A - Dungeon
 * Link      : https://codeforces.com/contest/1463/problem/A
 * Submission: https://codeforces.com/contest/1463/submission/101522215
 * Rating    : 1100   Tags: binary search, math
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-17 (Contest)
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
		ll a, b, c;
		cin >> a >> b >> c;
		ll sum = a+b+c;
		ll mini = min(a, min(b, c));
		if(sum%9==0 && sum>=9){
			if(mini>=sum/9)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else
			cout << "NO" << endl;
	}

	return 0;
}
