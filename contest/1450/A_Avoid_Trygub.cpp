/*
 * Problem   : 1450A - Avoid Trygub
 * Link      : https://codeforces.com/contest/1450/problem/A
 * Submission: https://codeforces.com/contest/1450/submission/100543099
 * Rating    : 800   Tags: constructive algorithms, sortings
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-06 (Contest)
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
#define IN freopen("input.txt", "r", stdin);
#define mod 998244353


int main(){
	//IN
	I
	T{
		int n;
		cin >> n;
		string s, k="trygub";
		cin >> s;
		int p=0;
		for(int i=0; i<n; i++){
			if(s[i]=='b'){
				cout << 'b';
				p++;
			}
		}
		//cout << p << endl;
		for(int i=0; i<n; i++){
			if(s[i]!='b'){
				cout << s[i];
				//p++;
			}
		}
		cout << endl;
	}
	return 0;
}
//57475563
