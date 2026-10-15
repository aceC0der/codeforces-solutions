/*
 * Problem   : 1453A - Cancel the Trains
 * Link      : https://codeforces.com/contest/1453/problem/A
 * Submission: https://codeforces.com/contest/1453/submission/100359172
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (31 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-04 (Contest)
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
		int n, m;
		cin >> n >> m;
		vl tn, tm;
		fi(n){
			int x;
			cin >> x;
			tn.pb(x);
		}
		fi(m){
			int x;
			cin >> x;
			tm.pb(x);
		}
		int cnt = 0;
		int j=0;
		fi(n){
			int cur=tn[i];
			//cout << j << tm[j] <<endl;
			while(tm[j]<=cur && j<m){
				if(tm[j]==cur){
					cnt++;
				}
				j++;
			}
		}
		cout << cnt << endl;

	}
	
	return 0;
}
//57475563
