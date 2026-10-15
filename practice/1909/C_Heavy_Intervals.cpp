/*
 * Problem   : 1909C - Heavy Intervals
 * Link      : https://codeforces.com/contest/1909/problem/C
 * Submission: https://codeforces.com/contest/1909/submission/238625035
 * Rating    : 1400   Tags: constructive algorithms, data structures, dsu, greedy, math, sortings
 * Verdict   : Accepted (124 ms, 6000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-12-24 (Practice)
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
    ll n;
    cin >> n;
    vl l(n), r(n), c(n);
    rep(i, 0, n) cin >> l[i];
    rep(i, 0, n) cin >> r[i];
    rep(i, 0, n) cin >> c[i];
    sort(all(l));
    sort(all(r));
    sort(all(c), greater<ll>());
    vl dif;
    ll i = 0;
    ll j = 0;
    ll cnt = 0;
    stack<ll> st;
    while(j<n && i<n){
    	cnt = 0;
    	ll s = i, e=j;
    	while(i<n && l[i]<r[j]){
            st.push(l[i]);
	    	i++;
	    }
        if(i>=n) break;
        // cout << st.top() << " " << r[j] << endl;
        dif.pb(r[j]-st.top());
        st.pop();
        j++;
    }
    while(!st.empty()){
        dif.pb(r[j]-st.top());
        j++;
        st.pop();
    }
    // vl dif2(n);
    // rep(i, 0, n){
    //     dif2[i] = r[i]-l[i];
    // }
    // sort(all(dif2));
    
    sort(all(dif));
    ll ans = 0;
    rep(i, 0, n){
        // ans2 += dif2[i]*c[i];
    	ans += dif[i]*c[i];
    }
    // cout << ans2 << " ";
    cout <<  ans << endl;

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
