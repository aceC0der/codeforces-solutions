/*
 * Problem   : 1807D - Odd Queries
 * Link      : https://codeforces.com/contest/1807/problem/D
 * Submission: https://codeforces.com/contest/1807/submission/198176850
 * Rating    : 900   Tags: data structures, implementation
 * Verdict   : Accepted (265 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-03-19 (Contest)
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

bool query(int l, int r, ll k, vl& pref){
    ll sum = pref[r]-pref[l-1];
    ll len = (r-l+1);
    return (sum%2==(k*len)%2);
}

void solve(){
    int n, q;
    cin >> n >> q;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    vl pref(n+1);
    rep(i, 1, n+1){
        pref[i] = pref[i-1] + a[i-1];
    }
    while(q--){
        ll l, r , k;
        cin >> l >> r >> k;
        ll qr = query(l, r, k, pref);
        if((pref[n]&1)){
            if(!qr){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
        else{
            if(qr){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
