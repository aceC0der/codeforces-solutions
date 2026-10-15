/*
 * Problem   : 1651C - Fault-tolerant Network
 * Link      : https://codeforces.com/contest/1651/problem/C
 * Submission: https://codeforces.com/contest/1651/submission/188354811
 * Rating    : 1500   Tags: brute force, data structures, implementation
 * Verdict   : Accepted (109 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-08 (Practice)
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

ll best(vl& a, int b){
    ll mn = LLONG_MAX;
    ll p = 0;
    rep(i, 0, a.size()){
        if(mn>abs(a[i]-b)){
            p = i;
            mn = abs(a[i]-b);
        }
    }
    return p;
}

void solve(){
    int n;
    cin >> n;
    vl a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    bool f[4];
    ll ans = 0;
    vl c1, c2;
    c1 = {0, best(b, a[0]), n-1};
    c2 = {0, best(b, a[n-1]), n-1};
    int b1 = best(a, b[0]);
    int bn = best(a, b[n-1]);
    ll mn = LLONG_MAX;
    rep(i, 0, 3){
        rep(j, 0, 3){
            ans = abs(a[0]-b[c1[i]])+abs(a[n-1]-b[c2[j]]);
            if(c1[i]!=0 && c2[j]!=0){
                ans += abs(b[0]-a[b1]);
            }
            if(c1[i]!=n-1 && c2[j]!=n-1){
                ans += abs(b[n-1]-a[bn]);
            }
            mn = min(mn, ans);
        }
    }
    
    cout << mn << endl;

}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
