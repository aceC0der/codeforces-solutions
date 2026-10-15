/*
 * Problem   : 1421B - Putting Bricks in the Wall
 * Link      : https://codeforces.com/contest/1421/problem/B
 * Submission: https://codeforces.com/contest/1421/submission/100092760
 * Rating    : 1100   Tags: constructive algorithms, implementation
 * Verdict   : Accepted (31 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-01 (Practice)
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
	//freopen("output.txt", "w", stdout);
	I
	T{
		int n;
		cin >> n;
		string s[n];
		fi(n){
			cin >> s[i];
		}
		pi a, b, x, y;
		a = mp(1, 2);
		b = mp(2, 1);
		x = mp(n, n-1);
		y = mp(n-1, n);

		bool ac=false, xc=false;
		vector<pi> v;
		int c=0;
		if(s[a.ff-1][a.ss-1]==s[b.ff-1][b.ss-1]){
			ac = true;
		}
		else if(s[x.ff-1][x.ss-1]==s[y.ff-1][y.ss-1])
			xc = true;
		if(ac){
			if(s[a.ff-1][a.ss-1]==s[x.ff-1][x.ss-1]){
				v.pb(x);
			}
			if(s[a.ff-1][a.ss-1]==s[y.ff-1][y.ss-1])
				v.pb(y);
		}
		else if(xc){
			if(s[a.ff-1][a.ss-1]==s[x.ff-1][x.ss-1]){
				v.pb(a);
			}
			if(s[b.ff-1][b.ss-1]==s[x.ff-1][x.ss-1])
				v.pb(b);
		}
		if(s[a.ff-1][a.ss-1]=='1'&&(!ac&&!xc))
			v.pb(a);
		else if(s[b.ff-1][b.ss-1]=='1'&&(!ac&&!xc))
			v.pb(b);
		if(s[x.ff-1][x.ss-1]=='0'&&(!ac&&!xc))
			v.pb(x);
		else if(s[b.ff-1][b.ss-1]=='0'&&(!ac&&!xc))
			v.pb(y);

		cout << v.size() << endl;
		for(int i=0; i<v.size(); i++){
			cout << v[i].ff << " " << v[i].ss << endl;
		}
	}
	return 0;
}
