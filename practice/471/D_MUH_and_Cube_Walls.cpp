/*
 * Problem   : 471D - MUH and Cube Walls
 * Link      : https://codeforces.com/contest/471/problem/D
 * Submission: https://codeforces.com/contest/471/submission/292840035
 * Rating    : 1800   Tags: string suffix structures, strings
 * Verdict   : Accepted (140 ms, 7600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-11-23 (Practice)
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
#define int ll

vector<int> z_function(vi s) {
    int n = s.size();
    vector<int> z(n);
    int l = 0, r = 0;
    for(int i = 1; i < n; i++) {
        if(i < r) {
            z[i] = min(r - i, z[i - l]);
        }
        while(i + z[i] < n && s[z[i]] == s[i + z[i]]) {
            z[i]++;
        }
        if(i + z[i] > r) {
            l = i;
            r = i + z[i];
        }
    }
    return z;
}

void solve(){

	int n, m;
	cin >> n >> m;
	vi arr(n), arr1(m);
    rep(i, 0, n) cin >> arr[i];
    rep(i, 0, m) cin >> arr1[i];
    vi diff;
    rep(i, 1, m){
        diff.pb(arr1[i-1]-arr1[i]);
    }
    diff.pb(INT_MAX);
    rep(i, 1, n) diff.pb(arr[i-1]-arr[i]);
    vi z = z_function(diff);
    // rep(i, 0, diff.size()) cout << diff[i] <<  " "; cout << endl;
    // rep(i, 0, z.size()) cout << z[i] << " "; cout << endl;
    int ans = 0;
    rep(i, 0, z.size()) if(z[i]>=m-1) ans++;
    cout << ans << endl;
	
}

int32_t main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	fios
	// TestCases{
		solve();
	// }
	return 0;
}
