/*
 * Problem   : 1613C - Poisoned Dagger
 * Link      : https://codeforces.com/contest/1613/problem/C
 * Submission: https://codeforces.com/contest/1613/submission/167834780
 * Rating    : 1200   Tags: binary search
 * Verdict   : Accepted (62 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-11 (Practice)
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

bool yo(vi& a, ll h, ll k){
    ll dmg = 0;
    ll crnt = a[0]+k;
    rep(i, 1, a.size()+1){
        if(i==a.size()) dmg+=k;
        else if(crnt>a[i]){
            dmg += a[i]-a[i-1];
            crnt = a[i]+k;
        }
        else {
            dmg+=k;
            crnt = a[i]+k;
        }
    }
    return (dmg>=h);
}

void solve(){
    int n;
    cin >> n;
    ll h;
    cin >> h;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    ll l=0, r = h;
    ll ans = h;
    while(l<=r){
        ll mid = (r-l)/2 + l;
        if(yo(a, h, mid)){
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
    fios
    TestCases{
        solve();
    }
    return 0;
}
