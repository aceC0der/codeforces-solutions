/*
 * Problem   : 1514B - AND 0, Sum Big
 * Link      : https://codeforces.com/contest/1514/problem/B
 * Submission: https://codeforces.com/contest/1514/submission/114352601
 * Rating    : 1200   Tags: bitmasks, combinatorics, math
 * Verdict   : Accepted (30 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-04-27 (Practice)
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
#define vpi vector<pi>
#define T int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define I ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

const int mod = 1e9 + 7;

ll mod_multiply(ll a, ll b){
    return ((a%mod) * (b%mod)) % mod;
}

ll mod_power(ll a, ll b){
    if(b == 0) return 1;
    ll ans = mod_power(a, b/2);
    ans = mod_multiply(ans, ans);
    if(b%2) ans = mod_multiply(ans, a);

    return ans;
}

int main()
{
    I
    T{
        ll n, k;
        cin >> n >> k;
        ll ans = mod_power(n, k);
        cout << ans << endl;
        
    }

    return 0;
}
