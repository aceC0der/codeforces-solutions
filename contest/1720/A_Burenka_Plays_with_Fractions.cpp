/*
 * Problem   : 1720A - Burenka Plays with Fractions
 * Link      : https://codeforces.com/contest/1720/problem/A
 * Submission: https://codeforces.com/contest/1720/submission/168813300
 * Rating    : 900   Tags: math, number theory
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-18 (Contest)
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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ad = a*d;
    ll cb = c*b;
    if(ad>cb) swap(ad, cb);
    if(ad==cb) cout << 0 << endl;
    else if(((ad==0 || cb==0) || cb%ad==0)) cout << 1 << endl;
    else cout << 2 << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
