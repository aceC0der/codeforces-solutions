/*
 * Problem   : 1457B - Repainting Street
 * Link      : https://codeforces.com/contest/1457/problem/B
 * Submission: https://codeforces.com/contest/1457/submission/99867604
 * Rating    : 1100   Tags: brute force, greedy
 * Verdict   : Accepted (46 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-11-29 (Contest)
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
		ll n, k;
		cin >> n >> k;
		vl c;
		ll cnt[105];
		fi(101){
			cnt[i]=0;
		}
		fi(n){
			ll x;
			cin >> x;
			cnt[x]++;
			c.pb(x);
		}
		ll days = 1000000000, current = 0;
		for(int j=1; j<=100; j++){
			ll day = 0;
			for(ll i=0; i<n; ){
				if(c[i]!=j){
					i+=k;
					day++;
					//cout << i << ": " << days <<endl;
				}
				else{
					i++;
				}
			}
			days = min(days, day);
		}
		//cout << ci << endl;
		cout << days <<endl;
		
	}
	
	return 0;
}
//57475563
