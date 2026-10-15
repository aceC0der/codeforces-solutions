/*
 * Problem   : 1513B - AND Sequences
 * Link      : https://codeforces.com/contest/1513/problem/B
 * Submission: https://codeforces.com/contest/1513/submission/116276219
 * Rating    : 1400   Tags: bitmasks, combinatorics, constructive algorithms, math
 * Verdict   : Accepted (109 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-05-15 (Practice)
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
    ll mod = 1e9 + 7;
    T{
        ll n;
        cin >> n;
        vl a(n);
        ll mini = LONG_LONG_MAX;
        ll fact = 1;
        rep(i, 0, n){
            cin >> a[i];
            if(a[i] < mini){
                mini = a[i];
            }
            if(i < n-2){
                fact = (fact%mod * ((i+1)%mod * 1LL%mod)) % mod;
            }
        }
        ll cnt = 0;
        rep(i, 0, n){
            if(mini == a[i]) cnt++;
            if((mini & a[i]) != mini){
                cout << 0 << endl;
                mini = -1;
                break;
            }
        }
        if(mini == -1) continue;

        ll ans = (cnt%mod * (cnt-1)%mod * fact%mod) % mod;
        cout << ans << endl;

    
    }

    return 0;
}
