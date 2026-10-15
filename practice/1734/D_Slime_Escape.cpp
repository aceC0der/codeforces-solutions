/*
 * Problem   : 1734D - Slime Escape
 * Link      : https://codeforces.com/contest/1734/problem/D
 * Submission: https://codeforces.com/contest/1734/submission/173362808
 * Rating    : 1800   Tags: data structures, dp, greedy, two pointers
 * Verdict   : Accepted (78 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-25 (Practice)
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
    vl pref(n, 0);
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    ll mnl, mnr; mnl = mnr = LLONG_MAX;
    ll i=k-2, j=k;
    ll ival=0, jval=0, cval = a[k-1];
    bool f;
    int cnt = 0;
    while(i>0 || j<n-1){
        // if(cnt>5) break;
        while(i>=1 && ival<=0){
            ival+=a[i];
            i--;
            mnl = min(mnl, ival);
        }
        while(j<=n-2 && jval<=0){
            jval += a[j];
            j++;
            mnr = min(mnr, jval);
        }
        // cout << i << " " << ival << " " <<  j << " " << jval << "  " << cval << endl;
        f = false;
        if(mnr!=LLONG_MAX && (cval+mnr>=0) && (jval>0)){
            cval+=jval;
            jval=0;
            mnr = LLONG_MAX;
            f = true;
        }
        if((mnl!=LLONG_MAX && cval+mnl>=0) && (ival>0)){
            cval+=ival;
            ival=0;
            mnl = LLONG_MAX;
            f = true;
        }
        if(!f) break;
        // cnt++;
    }
    while(i>=0){
        ival+=a[i];
        mnl = min(mnl, ival);
        i--;
    }
    while(j<n){
        jval += a[j];
        mnr = min(mnr, jval);
        j++;
    }
    // cout << cval << " " << mnl << " " << mnr << endl;
    if(mnl==LLONG_MAX || mnr==LLONG_MAX || (cval+mnl>=0) || (cval+mnr>=0)) cout <<"YES" << endl;
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
