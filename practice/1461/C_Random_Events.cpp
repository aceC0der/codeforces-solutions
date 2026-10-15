/*
 * Problem   : 1461C - Random Events
 * Link      : https://codeforces.com/contest/1461/problem/C
 * Submission: https://codeforces.com/contest/1461/submission/101042954
 * Rating    : 1500   Tags: dp, math, probabilities
 * Verdict   : Accepted (421 ms, 1300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-12 (Practice)
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
		int n, m;
		cin >> n >> m;
		vi a;
		int x, pos=n+1;
		fi(n){
			cin >> x;
			a.pb(x);
		}
		pre(i, n-1, 0){
			if(a[i]==i+1){
				pos = i+1;
			}
			else 
				break;
		}
		double y, not_sorted=1;
		rep(i, 0, m){
			cin >> x >> y;
			if(x>=pos-1){
				not_sorted *= (1-y);
			}
		}
		if(pos == 1)
			printf("1.000000\n");
		else
			printf("%.6lf\n", 1-not_sorted);
	}

	return 0;
}
