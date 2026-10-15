/*
 * Problem   : 1983B - Corner Twist
 * Link      : https://codeforces.com/contest/1983/problem/B
 * Submission: https://codeforces.com/contest/1983/submission/269254996
 * Rating    : 1200   Tags: constructive algorithms, greedy, implementation, math
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-07-07 (Contest)
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
	int n, m;
	cin >> n >> m;
	int a[n][m], b[n][m];
	rep(i, 0, n){
		string s;
		cin >> s;
		rep(j, 0, m){
			int x = s[j]-'0';
			a[i][j]=x;
		}
	}
	rep(i, 0, n){
		string s;
		cin >> s;
		rep(j, 0, m){
			int x = s[j]-'0';
			b[i][j]=x;
		}
	}
	// rep(i, 0, n){
	// 	rep(j, 0, m){
	// 		cout << a[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	// rep(i, 0, n){
	// 	rep(j, 0, m){
	// 		cout << b[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	// return;
	rep(i, 0, n-1){
		rep(j, 0, m-1){
			if(a[i][j]==b[i][j]) continue;
			int dif = b[i][j]-a[i][j];
			if(dif<0){
				if(a[i][j]==2 && b[i][j]==0){
					dif = 1;
				}
				else dif = 2;
			}
			int ndif = 1+(dif==1);
			// cout << i << " " << j << " " << dif << " " << ndif << endl;
			a[i][j]+=dif;a[i+1][j+1]+=dif;
			a[i+1][j]+=ndif;a[i][j+1]+=ndif;
			a[i][j]%=3, a[i+1][j]%=3, a[i][j+1]%=3, a[i+1][j+1]%=3;
		}
	}
	// rep(i, 0, n){
	// 	rep(j, 0, m){
	// 		cout << a[i][j];
	// 	}
	// 	cout << endl;
	// }
	rep(i, 0, n){
		rep(j, 0, m){
			if(a[i][j]!=b[i][j]){
				cout << "NO" << endl;
				return;
			}
		}
	}
	cout << "YES" << endl;
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
