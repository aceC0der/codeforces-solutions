/*
 * Problem   : 1795D - Triangle Coloring
 * Link      : https://codeforces.com/contest/1795/problem/D
 * Submission: https://codeforces.com/contest/1795/submission/194492358
 * Rating    : 1600   Tags: combinatorics, math
 * Verdict   : Accepted (93 ms, 4600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-02-21 (Practice)
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

#define MOD 998244353
const int N = 300005;

ll fact[N];

ll mod(ll x){
    return (x%MOD + MOD)%MOD;
}

ll add(ll x, ll y){
    return mod(mod(x)+mod(y));
}
ll mul(ll x, ll y){
    return mod(mod(x)*mod(y));
}

ll binpow(ll x, ll y){
    ll z = 1;
    while(y){
        if(y&1) z = mul(z, x);
        x = mul(x, x);
        y /= 2;
    }
    return z;
}

ll mul_inv(ll x){
    return binpow(x, MOD-2);
}

void preCalc(){
    fact[0] = 1;
    rep(i, 1, N){
        fact[i] = mul(i, fact[i-1]);
    }
}

ll divide(ll x, ll y){
    return mul(x, mul_inv(y));
}

ll nCr(ll n, ll r){
    return divide(fact[n], mul(fact[r], fact[n-r]));
}

void solve(){
    int n;
    cin >> n;
    vi arr(n);
    rep(i, 0, n) cin >> arr[i];
    vi ans;
    rep(i, 0, n){
        int a, b, c;
        a = arr[i];
        b = arr[i+1];
        c = arr[i+2];
        int mn = min(a, min(b, c));
        int cnt = (a==mn) + (b==mn) + (c==mn);
        ans.pb(cnt);
        i+=2;
    }
    int j=n/3;
    ll res = nCr(n/3, n/6);
    rep(i, 0, j){
        res = mul(res, ans[i]);
    }
    
    cout << res << endl;
}

int main()
{
    fios
    preCalc();
    solve();
    return 0;
}
