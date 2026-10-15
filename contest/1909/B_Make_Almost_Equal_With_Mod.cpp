/*
 * Problem   : 1909B - Make Almost Equal With Mod
 * Link      : https://codeforces.com/contest/1909/problem/B
 * Submission: https://codeforces.com/contest/1909/submission/238532529
 * Rating    : 1200   Tags: bitmasks, constructive algorithms, math, number theory
 * Verdict   : Accepted (46 ms, 1200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-12-23 (Contest)
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

/*
    Analysis:
    -> Read the problem statement very carefully
    -> Find out what is given and what is wanted
    -> Try die hard to solve
    -> Prove your idea: why should it work?
    -> Eliminate your wrong ideas as soon as possible
    -> Have you missed any corner case?
    -> never miss post solving Analysis
 
    Remember:  You know what your capability is. Just believe in yourself and work very hard. GOD will never let you down.
*/



void solve(){
    int n;
    cin >> n;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    ll ans = 2;
    while(true){
    	ll prev = -1;
    	rep(i, 0, n){
    		ll rem = a[i]%ans;
    		if(prev==-1){
    			prev = rem;
    		}
    		else if(prev!=rem){
    			cout << ans << endl;
    			return;
    		}
    	}
    	ans *= 2;
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("INPUT.txt", "r", stdin);
        freopen("OUTPUT.txt", "w", stdout);
    #endif
 
    fios
    TestCases{
        solve();
    }
    return 0;
}
