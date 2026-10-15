/*
 * Problem   : 1455B - Jumps
 * Link      : https://codeforces.com/contest/1455/problem/B
 * Submission: https://codeforces.com/contest/1455/submission/100055590
 * Rating    : 1200   Tags: constructive algorithms, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-11-30 (Practice)
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
#define mod 998244353

int main(){
	I
	T{
		int n;
		cin >> n;
		int x;
		ll sum =0 ;
		fi(n+1){
			sum = i*(i+1);
			sum /= 2;
			//cout << sum << endl;
			if(sum >= n){
				x = i;
				break;
			}
		}
		ll ans ;
		ans=x;
		//sum-=x;
		int dif=sum-n;
		if(dif==1)
			ans = x+1;
		cout << ans << endl;

	}
	
	return 0;
}
//57475563
