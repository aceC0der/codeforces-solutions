/*
 * Problem   : 1459C - Row GCD
 * Link      : https://codeforces.com/contest/1459/problem/C
 * Submission: https://codeforces.com/contest/1459/submission/102537975
 * Rating    : 1600   Tags: math, number theory
 * Verdict   : Accepted (327 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-28 (Practice)
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
#define fi(n) for(ll i=0;i<n;i++)
#define fj(n) for(ll j=0;j<n;j++)
#define T int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define I ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

int main()
{
    I
    int n, m;
    cin >> n >> m;
    vl a, b;
    ll x;
    rep(i, 0, n){
        cin >> x;
        a.pb(x);
    }
    ll gcd =0;
    sort(all(a));
    rep(i, 1, n){
        gcd = __gcd(gcd, a[i]-a[0]);
    }
    rep(i, 0, m){
        cin >> x;
        cout << __gcd(gcd, x+a[0]) << " ";
    }
    //cout << __gcd(0, 5);
    cout<< endl;


    return 0;
}
