/*
 * Problem   : 1732A - Bestie
 * Link      : https://codeforces.com/contest/1732/problem/A
 * Submission: https://codeforces.com/contest/1732/submission/177614623
 * Rating    : 1000   Tags: brute force, combinatorics, constructive algorithms, implementation, math, number theory
 * Verdict   : Accepted (46 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-10-23 (Contest)
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
    int n;
    cin >> n;
    vi a(n);
    int g=0;
    rep(i, 0, n){
        cin >> a[i];
        g = __gcd(g, a[i]);
    }
    if(g==1){
        cout << 0 << endl;
    }
    else{
        int cnt = 1;
        int mn = INT_MAX;
        pre(i, n-1, 0){
            a[i] = __gcd(a[i], i+1);
            if(__gcd(a[i], g)==1) {
                // cout << 'I' << i << endl;
                mn = min(mn, n-i);
            }
        }
        // cout << mn << " ** " << endl;
        // rep(i, 0, n) cout << a[i] << " ";
        // cout << endl;
        rep(i, 0, n){
            rep(j, i+1, n){
                int x = __gcd(a[i], a[j]);
                int cst = n-i+n-j;
                mn = min(cst, mn);
            }
        }
        cout << mn <<endl;
    }
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
