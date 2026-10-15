/*
 * Problem   : 1983C - Have Your Cake and Eat It Too
 * Link      : https://codeforces.com/contest/1983/problem/C
 * Submission: https://codeforces.com/contest/1983/submission/269272256
 * Rating    : 1400   Tags: binary search, brute force, greedy, implementation
 * Verdict   : Accepted (202 ms, 1200 KB)
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
	int n;
	cin >> n;
	vi a(n), b(n), c(n);
	ll ttl = 0;
	rep(i, 0, n) cin >> a[i];
	rep(i, 0, n) cin >> b[i];
	rep(i, 0, n) cin >> c[i];
	rep(i, 0, n) ttl+=a[i];
	vi dpa(n+1, -1), dpb(n+1, -1), dpc(n+1, -1);
	ll th = (ttl/3) + (ttl%3!=0);
	ll sum = 0;
	int idx = 0;
	rep(i, 0, n){
		sum+=a[i];
		if(sum>=th){
			dpa[idx]=i;
			sum-=a[idx];
			idx++;
			sum-=a[i];
			i--;
		}
	}
	sum = 0;
	idx = 0;
	rep(i, 0, n){
		sum+=b[i];
		if(sum>=th){
			dpb[idx]=i;
			sum-=b[idx];
			idx++;
			sum-=b[i];
			i--;
		}
	}
	sum = 0;
	idx = 0;
	rep(i, 0, n){
		sum+=c[i];
		if(sum>=th){
			dpc[idx]=i;
			sum-=c[idx];
			idx++;
			sum-=c[i];
			i--;
		}
	}
	// cout << ttl << " " << th << "*****" << endl;
	// rep(i, 0, n) cout << dpa[i] << " "; cout << endl;
	// rep(i, 0, n) cout << dpb[i] << " "; cout << endl;
	// rep(i, 0, n) cout << dpc[i] << " "; cout << endl;
	int br1 = dpa[0];
	int br2 = dpb[br1+1];
	int br3 = dpc[br2+1];
	if(br1!=-1 && br2!=-1 && br3!=-1){
		cout << 1 << " " << br1+1 << " " << br1+2 << " " << br2+1 << " " << br2+2 << " " << n << endl;
		return;
	}
	
	br1 = dpa[0];
	br2 = dpc[br1+1];
	br3 = dpb[br2+1];
	// cout << br1 << " " << br2 << " " << br3 << " **** " << endl;
	if(br1!=-1 && br2!=-1 && br3!=-1){
		cout << 1 << " " << br1+1 << " " << br2+2 << " " << n << " " << br1+2 << " " << br2+1 << endl;
		return;
	}

	br1 = dpb[0];
	br2 = dpa[br1+1];
	br3 = dpc[br2+1];
	if(br1!=-1 && br2!=-1 && br3!=-1){
		cout << br1+2 << " " << br2+1 << " " << 1 << " " << br1+1 << " " << br2+2 << " " << n << endl;
		return;
	}

	br1 = dpb[0];
	br2 = dpc[br1+1];
	br3 = dpa[br2+1];
	if(br1!=-1 && br2!=-1 && br3!=-1){
		cout << br2+2 << " " << n << " " << 1 << " " << br1+1 << " " << br1+2 << " " << br2+1<< endl;
		return;
	}

	br1 = dpc[0];
	br2 = dpb[br1+1];
	br3 = dpa[br2+1];
	if(br1!=-1 && br2!=-1 && br3!=-1){
		cout << br2+2 << " " << n << " " << br1+2 << " " << br2+1 << " " << 1 << " " << br1+1 << endl;
		return;
	}

	br1 = dpc[0];
	br2 = dpa[br1+1];
	br3 = dpb[br2+1];
	if(br1!=-1 && br2!=-1 && br3!=-1){
		cout << br1+2 << " " << br2+1 << " " << br2+2 << " " << n << " " << 1 << " " << br1+1 << endl;
		return;
	}

	cout << -1 << endl;
	
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
