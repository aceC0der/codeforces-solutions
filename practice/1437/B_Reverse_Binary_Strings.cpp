/*
 * Problem   : 1437B - Reverse Binary Strings
 * Link      : https://codeforces.com/contest/1437/problem/B
 * Submission: https://codeforces.com/contest/1437/submission/100775986
 * Rating    : 1200   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (31 ms, 300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-09 (Practice)
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
#define B(a) a.begin(),a.end()
#define IN freopen("input.txt", "r", stdin);
#define mod 998244353

int main()
{
	I
	T{
		int n;
		cin >> n;
		string s;
		cin >> s;
		int c = 0;
		fi(n){
			if(s[i]==s[(i+1)%n]) 
				c++;
		}
		cout << c/2 << endl;
	}

	return 0;
}
