/*
 * Problem   : 1462A - Favorite Sequence
 * Link      : https://codeforces.com/contest/1462/problem/A
 * Submission: https://codeforces.com/contest/1462/submission/101266666
 * Rating    : 800   Tags: implementation, two pointers
 * Verdict   : Accepted (31 ms, 100 KB)
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
		vi a;
		int x;
		fi(n){
			cin >> x;
			a.pb(x);
		}
		int j = n-1, i=0, f=0;
		while(j>=i){
			if(f==0){
				cout << a[i] << " ";
				i++;
				f=1;
			}
			else{
				f=0;
				cout << a[j] << " ";
				j--;
			}
		}
		cout << endl;
	}

	return 0;
}
