/*
 * Problem   : 1749D - Counting Arrays
 * Link      : https://codeforces.com/contest/1749/problem/D
 * Submission: https://codeforces.com/contest/1749/submission/177447140
 * Rating    : 1900   Tags: combinatorics, dp, math, number theory
 * Verdict   : Accepted (78 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-10-22 (Practice)
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
const int MOD = 998244353;

int add(int x, int y)
{
    x += y;
    while(x >= MOD) x -= MOD;
    while(x < 0) x += MOD;
    return x;
}   

int sub(int x, int y)
{
    return add(x, -y);
}   

int mul(int x, int y)
{
    return (x * 1ll * y) % MOD;
}

int binpow(int x, int y)
{
    int z = 1;
    while(y)
    {
        if(y & 1) z = mul(z, x);
        x = mul(x, x);
        y >>= 1;
    }
    return z;
}




void solve(){
    ll n, m;
    cin >> n >> m;
    vector<bool> prime(n+5, true);
    prime[1] = false;
     
    for (int p = 2; p * p <= n+5; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n+5; i += p)
                prime[i] = false;
        }
    }
    ll ans = 0;
    ll ttl = mul(1, m%MOD);
    ll p = 1;
    ll cnt = 1;
    rep(i, 1, n+1){
        ans = add(ans, binpow(m%MOD, i));
        if(p<=m){
            if(prime[i]) p*=i;
            ll x = m/p;
            cnt = mul(cnt, (m / p) % MOD);
            ans=sub(ans, cnt);
        }
        // cout << ans << endl;
    }
    cout << ans << endl;

}

int main()
{
    fios
    solve();
    return 0;
}
