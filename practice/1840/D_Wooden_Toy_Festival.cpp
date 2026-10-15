/*
 * Problem   : 1840D - Wooden Toy Festival
 * Link      : https://codeforces.com/contest/1840/problem/D
 * Submission: https://codeforces.com/contest/1840/submission/208852915
 * Rating    : 1400   Tags: binary search, greedy, sortings
 * Verdict   : Accepted (139 ms, 900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-07 (Practice)
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

bool ok(vi& a, ll x){
    // cout << "******" << x << endl;
    
    vpi ranges;
    rep(i, 0, a.size()){
        bool f = false;
        int l=a[i]-x, r = a[i]+x;
        l = max(0, l);
        for(int j = 0; j<ranges.size(); j++){
            pi it = ranges[j];
            // cout << it.ff << " " << it.ss << "** " << i << " " << j <<  endl;
            // cout << l << " " << r << endl;
            if((it.ff<=l && l<=it.ss) || (it.ff<=r && r<=it.ss)){
                f = true;
                ranges[j].ff = max(l, it.ff);
                ranges[j].ss = min(r, it.ss);
                break;
            }
        }
        if(!f){
             ranges.pb({l, r});
        }
        if(ranges.size()>=4) return false;
    }
    // rep(i, 0, ranges.size()) cout << ranges[i].ff << " " << ranges[i].ss << endl;
    return true;
}

void solve(){
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    sort(all(a));
    ll l = 0, r = 1e9;
    ll ans = INT_MAX;
    while(l<=r){
        ll mid = (l+r)/2;
        if(ok(a, mid)){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    cout << ans << endl;
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
