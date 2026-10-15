/*
 * Problem   : 1450B - Balls of Steel
 * Link      : https://codeforces.com/contest/1450/problem/B
 * Submission: https://codeforces.com/contest/1450/submission/100634680
 * Rating    : 1000   Tags: brute force, geometry, greedy
 * Verdict   : Accepted (46 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-07 (Practice)
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
		int n, k;
		cin >> n >> k;
		vpi cor;
		fi(n){
			ll x, y;
			cin >> x >> y;
			cor.pb(mp(x, y));
		}
		bool flag = false;
		for(int i=0; i<n; i++){
			bool tmp = true;
			//cout << i << ": " ;
			for(int j=0; j<n; j++){
				//tmp = true;
				int dis = (abs(cor[i].ff-cor[j].ff)+abs(cor[i].ss-cor[j].ss));
				//cout << dis << " ";
				if(dis>k){
					tmp = false;
					break;
				}
			}
			/*cout << tmp;
			cout << endl;
			if(!tmp)
				continue;*/
			if(tmp){
				flag = true;
				break;
			}
		}
		if(flag)
			cout << 1 << endl;
		else
			cout << -1 << endl;

	}
	return 0;
}
//57475563
