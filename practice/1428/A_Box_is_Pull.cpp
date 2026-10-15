/*
 * Problem   : 1428A - Box is Pull
 * Link      : https://codeforces.com/contest/1428/problem/A
 * Submission: https://codeforces.com/contest/1428/submission/100705831
 * Rating    : 800   Tags: math
 * Verdict   : Accepted (30 ms, 0 KB)
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
		int a, b, x, y;
		cin >> a >> b >> x >> y;
		int ans = abs(a-x) + abs(b-y);
		if(a!=x && b!=y){
			ans += 2;
		}
		cout << ans << endl;
	}
	return 0;
}
//57475563
