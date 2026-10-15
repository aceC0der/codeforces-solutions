/*
 * Problem   : 1453B - Suffix Operations
 * Link      : https://codeforces.com/contest/1453/problem/B
 * Submission: https://codeforces.com/contest/1453/submission/100397679
 * Rating    : 1400   Tags: constructive algorithms, implementation
 * Verdict   : Accepted (108 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-05 (Practice)
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
		ll n, sum=0;
		cin >> n;
		vl arr;
		fi(n){
			ll x;
			cin >> x;
			arr.pb(x);
		}
		ll cnt=0, cng=0;
		/*if(dif1>dif2)
			arr[1]=arr[0];
		else
			arr[0]=arr[1];*/
		//arr[0]=sum;
		for(int i=1; i<n; i++){
			cng = arr[i]-arr[i-1];
			cnt += abs(cng);
			//arr[i] = arr[0];
		}
		ll pr = cnt - abs(arr[0]-arr[1]);
		for(int i=1; i<n; i++){
			ll tmp = cnt-abs(arr[i]-arr[i-1]);
			if(i!=n-1){
				tmp -= abs(arr[i+1]-arr[i]);
				tmp += abs(arr[i-1]-arr[i+1]);
			}
			pr = min(pr, tmp);
		}

		cout << pr << endl;
		/*fi(n)
			cout << arr[i] << ' ';*/
		//cout << endl <<  cnt << endl;

	}
	
	return 0;
}
//57475563
