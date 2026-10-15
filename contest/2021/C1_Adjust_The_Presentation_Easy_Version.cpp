/*
 * Problem   : 2021C1 - Adjust The Presentation (Easy Version)
 * Link      : https://codeforces.com/contest/2021/problem/C1
 * Submission: https://codeforces.com/contest/2021/submission/284565772
 * Rating    : 1300   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (155 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-06 (Contest)
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
#define vvi vector<vector<int>>
#define vb vector<bool>
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
	int n, m, q;
	cin >> n >> m >> q;
	vi a(n), b(m);
	rep(i, 0, n) cin >> a[i];
	rep(i, 0, m) cin >> b[i];
	vb visited(n);
	rep(i, 0, n){
		a[i]--;
	}
	rep(i, 0, m) b[i]--;
	int idxa = 0;
	rep(i, 0, m){
		if(a[idxa]==b[i]){
			visited[b[i]] = true;
			idxa++;
		}else if(visited[b[i]]){
			continue;
		}else{
			cout << "TIDAK" << endl;
			return;
		}
	}
	cout << "YA" << endl;
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
