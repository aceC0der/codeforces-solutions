/*
 * Problem   : 1992E - Novice's Mistake
 * Link      : https://codeforces.com/contest/1992/problem/E
 * Submission: https://codeforces.com/contest/1992/submission/270076774
 * Rating    : 1700   Tags: brute force, constructive algorithms, implementation, math, strings
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-07-12 (Practice)
 */
#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define vpi vector<pi >
#define vpl vector<pl >
#define endl '\n'
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
#define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

void solve(){
	string n;
	cin >> n;
	vpi ans;
	int v = 0;
	rep(i, 0,n.size()){
		int c = n[i]-'0';
		v *= 10;
		v+=c;
	}
	// cout << v << endl;
	string s = "";
	int a = 1e4+1;
	rep(i, 1, a){
		s+=n;
		int na = v*i;
		int cnt = 0;
		int tna = na;
		while(tna){tna/=10;cnt++;}
		int rem = 0;
		int th = min(cnt, na);
		rep(j, 0, th){
			int c = s[j]-'0';
			rem *= 10;
			rem += c;
			int b = na-rem;
			if(b==(s.size()-j-1) && b) ans.pb({i, b});
		}
	}
	cout << ans.size() << endl;
	for(auto it: ans) cout << it.ff << " " << it.ss << endl;

}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	fios
	TestCases{
		solve();
	}
	return 0;
}
