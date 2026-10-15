/*
 * Problem   : 1451B - Non-Substring Subsequence
 * Link      : https://codeforces.com/contest/1451/problem/B
 * Submission: https://codeforces.com/contest/1451/submission/99200602
 * Rating    : 900   Tags: dp, greedy, implementation, strings
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-11-22 (Practice)
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

int main(){
	I
	T{
		int n, q;
		cin >> n >> q;
		string s;
		cin>> s;
		while(q--){
			bool chk = false;
			int l, r;
			cin >> l >> r;
			char a, b;
			a = s[--l];
			b = s[r-1];
			//cout << l << endl;
			fi(l){
				if(a==s[i])
					chk = true;
			}
			//cout << b << endl;
			if(!chk){
				for(int i=r; i<n; i++)
				{
					//cout << r << endl;
					if(b==s[i])
						chk=true;
				}
			}
			if(chk && (r-l+1>=2))
				cout << "YES" << endl;
			else 
				cout << "NO" << endl;
		}
	}
	return 0;
}
