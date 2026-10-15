/*
 * Problem   : 1763B - Incinerate
 * Link      : https://codeforces.com/contest/1763/problem/B
 * Submission: https://codeforces.com/contest/1763/submission/186016074
 * Rating    : 1200   Tags: binary search, brute force, data structures, implementation, math, sortings
 * Verdict   : Accepted (124 ms, 1200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-19 (Practice)
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
    int n, k;
    cin >> n >> k;
    vpi a(n);
    rep(i, 0, n){
        cin >> a[i].ff;
    }
    rep(i, 0, n) cin >> a[i].ss;
    sort(all(a));
    vi mini(n);
    int mn = INT_MAX;
    pre(i, n-1, 0){
        mn = min(a[i].ss, mn);
        mini[i] = mn;
        
    }
    bool f = true;
    int ttl = k;
    int i=0;
    while(i<n){
        while(i<n && a[i].ff<=ttl){
            i++;
        }
        if(i>=n) break;
        k-=mini[i];
        if(k<=0) {
            f = false;
            break;
        }
        ttl += k;
    }
    if(f) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
