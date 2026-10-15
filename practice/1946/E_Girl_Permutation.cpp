/*
 * Problem   : 1946E - Girl Permutation
 * Link      : https://codeforces.com/contest/1946/problem/E
 * Submission: https://codeforces.com/contest/1946/submission/261319621
 * Rating    : 2200   Tags: combinatorics, dp, math, number theory
 * Verdict   : Accepted (421 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-17 (Practice)
 */
#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define ff first
// #define ss second
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

#define MOD 1000000007
const int N = 200009;

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
    int n, ps, ss;
    cin >> n >> ps >> ss;
    vi p(ps), s(ss);
    rep(i, 0, ps) cin >> p[i];
    rep(i, 0, ss) cin >> s[i];
    if(p[0]!=1 || p.back()!=s[0] || s.back()!=n){
        cout << 0 << endl;
        return ;
    }
    
    int left = 1;
    int num = p.back()-1;
    pre(i, ps-1, 1){
        int v = p[i]-p[i-1];
        left = mul(fact[v-1], left);
        left = mul(nCr(num-1, v-1), left);
        num-=v;
    }

    int right = 1;
    num = n-p.back();
    rep(i, 1, ss){
        int v = s[i]-s[i-1];
        right = mul(nCr(num-1, v-1), right);
        right = mul(fact[v-1], right);
        num-=v;
    }
    // cout << left << " " << right << endl;
    // return;
    left = mul(nCr(n-1, p.back()-1), left);
    int ans = mul(left, right);
    cout << ans << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    preCalc();
    // cout << "***** " << (nCr(19, 11)*24*5040)%MOD << endl;
    fios
    TestCases{
        solve();
    }
    return 0;
}
