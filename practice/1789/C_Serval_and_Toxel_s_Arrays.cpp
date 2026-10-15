/*
 * Problem   : 1789C - Serval and Toxel's Arrays
 * Link      : https://codeforces.com/contest/1789/problem/C
 * Submission: https://codeforces.com/contest/1789/submission/201867470
 * Rating    : 1500   Tags: combinatorics, dp, implementation, math
 * Verdict   : Accepted (561 ms, 19800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-04-13 (Practice)
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
    ll n, m;
    cin >> n >> m;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    map<ll, pl> freq;
    rep(i, 0, n){
        freq[a[i]] = {0, 0};
    }
    rep(j, 1, m+1){
        ll x, y;
        cin >> x >> y;
        x--;
        if(a[x]==y) continue;
        int cp = freq[a[x]].ff;
        freq[a[x]].ss += (j-cp);
        // if(cp==0) freq[a[x]].ss++;
        freq[a[x]].ff = -1;
        if(freq.find(y)!=freq.end()){
            freq[y].ff = j;
        }
        else{
            freq[y] = {j, 0};
        }
        a[x] = y;
    }
    ll ttl = (m*(m+1))/2;
    ll ans = 0;
    for(auto it : freq){
        // cout << it.ff <<  " " << it.ss.ff << " " << freq[it.ff].ss << " *** " << endl;
        if(it.ss.ff != -1){
            ll sum = (m+1-it.ss.ff);
            // if(it.ss.ff) sum--;
            freq[it.ff].ss += sum;
            it.ss.ss += sum;
        }
        ll rem = m+1-it.ss.ss;
        rem = (rem*(rem-1))/2;
        ans += (ttl-rem);
        // cout << it.ff <<  " " << it.ss.ff << " " << freq[it.ff].ss << " *** " << endl;
    }
    // cout << endl;
    cout << ans << endl;
    
    
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
