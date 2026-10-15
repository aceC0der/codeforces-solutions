/*
 * Problem   : 1978D - Elections
 * Link      : https://codeforces.com/contest/1978/problem/D
 * Submission: https://codeforces.com/contest/1978/submission/266030746
 * Rating    : 1600   Tags: data structures, greedy, implementation, math
 * Verdict   : Accepted (155 ms, 1200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-16 (Contest)
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
    ll n, c;
    cin >> n >> c;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    vl suf(n);
    suf[n-1] = -1;
    pre(i, n-2, 0){
        suf[i] = max(suf[i+1], a[i+1]);
    }
    vl pref(n);
    pref[0] = -1;
    rep(i, 1, n) pref[i] = max(pref[i-1], a[i-1]);
    ll sum = 0;
    ll x = 0;
    rep(i, 0, n){
        if(i>0 && suf[i]<=a[i] && a[0]+c<a[i] && pref[i]<a[i]){
            cout << 0 << " ";
            sum+=a[i];
            x++;
            continue;
        }
        ll cnt = 0;
        if(a[0]+c>=a[i] || pref[i]>=a[i] || suf[i]>a[i]){
            cnt = i;
            sum += a[i];
            // cout << i << " " << sum << " " << c << endl;
            if(sum+c<suf[i]) cnt++;
            // if(i==0){
            //     if(a[0]+c<suf[0]) cnt++;
            // }
            cout << cnt << " ";
            x++;
            continue;
        }
        

    }
    cout << endl;
    // cout << x << endl;

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
