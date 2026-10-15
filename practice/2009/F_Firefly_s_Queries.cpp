/*
 * Problem   : 2009F - Firefly's Queries
 * Link      : https://codeforces.com/contest/2009/problem/F
 * Submission: https://codeforces.com/contest/2009/submission/279862115
 * Rating    : 1700   Tags: bitmasks, data structures, flows, math
 * Verdict   : Accepted (280 ms, 300 KB)
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


ll leftCalc(ll c, vl& pref, ll l , ll n, ll& dif){
    l %= n;
    if(!l) l=n;
    l--;
    ll d = (n-l);
    dif-=d;
    if(!c) return pref[n]-pref[l];
    l+=c;l%=n;
    if(l<c){
        ll ans = pref[c]-pref[l];
        return ans;
    }
    ll ans = pref[n]-pref[l];
    ans+=pref[c];
    return ans;
}

ll rightCalc(ll c, vl& pref, ll r, ll n, ll& dif){
    r %= n;
    if(!r) r=n;
    r--;
    ll d = r+1;
    dif-=d;
    if(!c) return pref[r+1];
    r=(r+c)%n;
    if(r<c){
        ll ans = (pref[n]-pref[c])+pref[r+1];
        return ans;
    }
    ll ans = (pref[r+1]-pref[c]);
    return ans;

}

void solve(){
    ll n, q;
    cin >> n >> q;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    vl pref(n+1);
    rep(i, 1, n+1){
        pref[i] = pref[i-1]+a[i-1];
    }
    // ll dif = 1000;
    // cout << leftCalc(3, pref, 9, n, dif) << endl;
    // cout << rightCalc(3, pref, 7, n, dif) << endl;
    // ll sum = pref[n];
    while(q--){
        ll l, r;
        cin >> l >> r;
        ll dif = r-l+1;
        ll posl = (l+n-1)/n;
        ll posr = (r+n-1)/n;
        posr--;
        posl--;
        ll cshl = posl%n;
        ll cshr = posr%n;
        ll left = leftCalc(cshl, pref, l, n, dif);
        ll right = rightCalc(cshr, pref, r, n, dif);
        if(posl==posr){
            ll ans = left+right-pref[n];
            cout << ans << endl;
            continue;
        }
        ll ans = left+right+(dif/n)*pref[n];
        cout << ans << endl;
        


    }
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
