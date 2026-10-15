/*
 * Problem   : 2009E - Klee's SUPER DUPER LARGE Array!!!
 * Link      : https://codeforces.com/contest/2009/problem/E
 * Submission: https://codeforces.com/contest/2009/submission/279857636
 * Rating    : 1400   Tags: binary search, math, ternary search
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-05 (Practice)
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

ll n, k;
ll calcVal(ll i, ll total){
    ll a = (k*(i+1))+(i*(i+1))/2;
    ll b = total-a;
    // cout << i+1 << " " << a  << ": " << b << endl;
    return a-b;
}

void solve(){
    cin >> n >> k;
    ll total = (n*k)+(n*(n-1))/2;
    // positive case
    ll l=0, r=n-1;
    ll pans = LLONG_MAX;
    while(l<=r){
        
        ll mid = (l+r)/2;
        ll v = calcVal(mid, total);
        // cout << mid << " " << v << endl;
        if(v<0) l=mid+1;
        else{
            if(v<pans){
                pans = v;
                r=mid-1;
            }
            else l = mid+1;
        }
    }
    // cout << "**********" << endl;
    l=0, r=n-1;
    ll nans = -LLONG_MAX;
    while(l<=r){
        ll mid = (l+r)/2;
        ll v = calcVal(mid, total);
        // cout << mid << " " << v << endl;
        if(v>0) r = mid-1;
        else{
            if(v>=nans){nans = v;
            l=mid+1;}
            else r=mid-1;
        }
    }
    // cout << "*******" << endl;
    // cout << pans << " " << nans << endl;
    ll ans = min(pans, abs(nans));
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
