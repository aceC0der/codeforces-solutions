/*
 * Problem   : 1428C - ABBB
 * Link      : https://codeforces.com/contest/1428/problem/C
 * Submission: https://codeforces.com/contest/1428/submission/100718454
 * Rating    : 1100   Tags: brute force, data structures, greedy, strings
 * Verdict   : Accepted (78 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-08 (Practice)
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


int main(){
	//IN
	I
	T{
		string s;
		cin >> s;
		int len = s.length();
		int cntA = 0, cntB=0;
		fi(len){
			if(s[i]=='A')
				cntA++;
			else{
				if(cntA>0)
					cntA--;
				else
					cntB++;
			}
		}
		int ans = cntB%2 + cntA;
		cout << ans << endl;
	}
	return 0;
}
//57475563
