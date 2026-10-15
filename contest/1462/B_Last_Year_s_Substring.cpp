/*
 * Problem   : 1462B - Last Year's Substring
 * Link      : https://codeforces.com/contest/1462/problem/B
 * Submission: https://codeforces.com/contest/1462/submission/101325046
 * Rating    : 800   Tags: dp, implementation, strings
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
		string s;
		cin >> s;
		string ans = "2020", tmp, tmp1, tmp2, tmp3, tmp4;
		if(n>=4){
			tmp = s.substr(0, 4);
			tmp1 = s.substr(n-4, n);
			tmp2 = s.substr(0, 3)+s.substr(n-1,n);
			tmp3 = s.substr(0, 1)+s.substr(n-3,n);
			tmp4 = s.substr(0, 2)+s.substr(n-2,n);
		}
		//cout << tmp << " " << tmp1 << " " << tmp2 << " " << tmp3 << " " << tmp4 << endl;
		if(n<4)
			cout << "NO" << endl;
		else if(s==ans)
			cout << "YES" << endl;
		else if(tmp==ans)
			cout << "YES" << endl;
		else if(tmp1==ans){
			cout << "YES" << endl;
		}
		
		else if(tmp2==ans){
			cout << "YES" << endl;
		}
		else if(tmp3==ans){
			cout << "YES" << endl;
		}
		else if(tmp4==ans){
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}

	return 0;
}
