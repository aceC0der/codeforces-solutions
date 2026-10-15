/*
 * Problem   : 1988D - The Omnipotent Monster Killer
 * Link      : https://codeforces.com/contest/1988/problem/D
 * Submission: https://codeforces.com/contest/1988/submission/272333153
 * Rating    : 2000   Tags: brute force, dfs and similar, dp, trees
 * Verdict   : Accepted (1467 ms, 78400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-07-24 (Practice)
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

const int N = 3e5+10;
ll dp[N][21];

ll calc(int i, int stg, int p, vl& a, vector<vi>& adj){
    if(dp[i][stg]!=-1) return dp[i][stg];
    ll sum = 0;
    for(auto nxt: adj[i]){
        if(nxt==p) continue;
        ll mn = LLONG_MAX;
        for(int s=0; s<21; s++){
            if(s==stg) continue;
            mn = min(mn, calc(nxt, s, i, a, adj));
        }
        sum += mn;
    }
    sum += (stg+1)*a[i];
    return dp[i][stg]=sum;
}


void solve(){
	int n;
	cin >> n;
	vl a(n);
	rep(i, 0, n) cin >> a[i];
	vector<vi> adj(n);
	rep(i, 0, n-1){
		int x, y;
		cin >> x >> y;
		x--;y--;
		adj[x].pb(y);
		adj[y].pb(x);
	}
    rep(i, 0, n){
        rep(j, 0, 21){
            dp[i][j] = -1;
        }
    }
    ll mn = LLONG_MAX;
    rep(i, 0, 21){
        mn = min(mn, calc(0, i, -1, a, adj));
    }
    cout << mn << endl;
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
