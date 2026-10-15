/*
 * Problem   : 2053D - Refined Product Optimality
 * Link      : https://codeforces.com/contest/2053/problem/D
 * Submission: https://codeforces.com/contest/2053/submission/298903241
 * Rating    : 1700   Tags: binary search, data structures, greedy, math, schedules, sortings
 * Verdict   : Accepted (1124 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-29 (Practice)
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
// #define int ll

#define MOD 998244353

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

ll divide(ll x, ll y){
    return mul(x, mul_inv(y));
}

int lastPos(vi& arr, int x){
    int l=0, r= arr.size()-1;
    int ans = -1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]<=x){
            if(arr[mid]==x) ans=mid;
            l = mid+1;
        }else r = mid-1;
    }
    return ans;
}


void solve(){
    int n, q;
    cin >> n >> q;
    vi a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    vi c =a, d=b;
    sort(all(c));
    sort(all(d));
    int ans = 1;
    rep(i, 0, n){
        ans = mul(ans, min(c[i], d[i]));
    }
    cout << ans << " ";
    while(q--){
        int t, x;
        cin >> t >> x;
        x--;
        if(t==1){
            int val = a[x];
            int lp = lastPos(c, val);
            int bval = d[lp];
            int gun = min(val, bval);
            ans = divide(ans, gun);
            val++;
            gun = min(bval, val);
            ans = mul(ans, gun);
            c[lp]++;
            a[x]++;
        }else{
            int val = b[x];
            int lp = lastPos(d, val);
            int bval = c[lp];
            int gun = min(val, bval);
            ans = divide(ans, gun);
            val++;
            gun = min(bval, val);
            ans = mul(ans, gun);
            d[lp]++;
            b[x]++;
        }
        cout << ans << " ";
    }
    cout << endl;
}

int32_t main()
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
