/*
 * Problem   : 1992D - Test of Love
 * Link      : https://codeforces.com/contest/1992/problem/D
 * Submission: https://codeforces.com/contest/1992/submission/270031407
 * Rating    : 1200   Tags: dp, greedy, implementation
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-07-11 (Contest)
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

int n, m;

void solve(){
	int k;
	cin >> n >> m >> k;
	n+=2;
	string s;
	cin >> s;
	vi a(n, 0);
	rep(i, 1, n-1){
		// cout << s[i-1];
		if(s[i-1]=='C') a[i]=2;
		else if(s[i-1]=='W')a[i]=1;
	}
	// cout << endl;
	int crd = 0;
	int wtr = 0;
	int l = 0;
	int tm = 0;
	rep(i, 1, n){
		// cout << crd << " " << wtr << " " << k << endl;
		if(a[i]==0){
			if(crd){
				cout << "NO" << endl;
				return;
			}
			k-=wtr;
			if(k<0){
				cout << "NO" << endl;
				return;
			}
			crd = wtr = 0;
			tm = 0;
			continue;
		}
		tm++;
		if(tm<m) continue;
		else {
			if(a[i]==2) crd++;
			else wtr++;
		}
	}
	cout << "YES" << endl;

	// vi nxtLog(n);
	// nxtLog[n-1] = n-1;
	// pre(i, n-2, 0){
	// 	if(a[i]==0) nxtLog[i]=i;
	// 	else if(a[i]==2) nxtLog[i]=-1;
	// 	else nxtLog[i]=nxtLog[i+1];
	// }

	// cout << (calc(0, a, nxtLog) ? "YES" : "NO") << endl;


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
