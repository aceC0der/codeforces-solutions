/*
 * Problem   : 1539C - Stable Groups
 * Link      : https://codeforces.com/contest/1539/problem/C
 * Submission: https://codeforces.com/contest/1539/submission/120130907
 * Rating    : 1200   Tags: greedy, sortings
 * Verdict   : Accepted (124 ms, 4700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-06-20 (Practice)
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
#define vpi vector<pi>
#define T int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define I ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

int main()
{
    I
    ll n, k, x;
    cin >> n >> k >> x;
    vl a(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    sort(all(a));
    ll mk = k;
    ll grp = 1;
    vl lefts;
    rep(i, 1, n){
        ll dif = a[i]-a[i-1];
        if(dif>x){
            //cout << a[i-1] << " " << a[i] << endl;
            ll p = (dif-1)/x;
            //if(dif%x) p++;
            lefts.pb(p);
            //cout << dif/x << endl;
            grp++;
        }       
    }
    sort(all(lefts));
    int sz = lefts.size();
    rep(i, 0, sz){
        if(k>=lefts[i]) {k-=lefts[i]; grp--;}
        else break;
    }
    cout << grp << endl;

    return 0;
}
