/*
 * Problem   : 1776L - Controllers
 * Link      : https://codeforces.com/contest/1776/problem/L
 * Submission: https://codeforces.com/contest/1776/submission/202719846
 * Rating    : 1500   Tags: binary search, math
 * Verdict   : Accepted (93 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-04-19 (Practice)
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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll p = 0, m = 0;
    rep(i, 0, n) if(s[i]=='+') p++;
    m = n-p;
    ll dif = (p-m);
    ll q;
    cin >> q;
    while(q--){
        int a, b;
        cin >> a >> b;
        if(!dif){
            cout << "YES" << endl;
            continue;
        }
        ll div = dif*b;
        if((a-b)==0 || div%(b-a)){
            cout << "NO" << endl;
            continue;
        }
        ll r = div/(b-a);
        // cout << r << "****" << endl;
        if((-1*m)<=r && r<=p){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int main()
{
    fios
        solve();
    return 0;
}
