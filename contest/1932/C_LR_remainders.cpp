/*
 * Problem   : 1932C - LR-remainders
 * Link      : https://codeforces.com/contest/1932/problem/C
 * Submission: https://codeforces.com/contest/1932/submission/247038467
 * Rating    : 1400   Tags: brute force, data structures, implementation, math, two pointers
 * Verdict   : Accepted (93 ms, 5600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-02-18 (Contest)
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


const int N = 300005;

int MOD = 1;

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
    cin >> n >> MOD;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    string s;
    cin >> s;
    int ans = 1;
    
    int l = 0, r = n-1;
    int cnt = 0;
    rep(i, 0, n){
        if(s[i]=='L'){
            // ans = divide(ans, a[l]);
             l++;
        }
        else{
            // ans = divide(ans, a[r]);
             r--;
        }
        cnt++;
    }
    // cout << l << " " << r << endl;
    l--;r++;
    // return;
    vi ret;
    pre(i, n-1, 0){

        if(s[i]=='L'){
            ans = mul(ans, a[l]);
            l--;
        }
        else{
            ans = mul(ans, a[r]);
            r++;
        }
        // cout << ans << " " << l << " " << r << endl;
        ret.pb(ans);
    }
    reverse(all(ret));
    rep(i, 0, n) cout << ret[i] << " "; cout << endl;

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
