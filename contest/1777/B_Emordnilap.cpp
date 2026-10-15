/*
 * Problem   : 1777B - Emordnilap
 * Link      : https://codeforces.com/contest/1777/problem/B
 * Submission: https://codeforces.com/contest/1777/submission/190003773
 * Rating    : 900   Tags: combinatorics, greedy, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-21 (Contest)
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

const int mod = 1e9+7;

void solve(){
    int n;
    cin >> n;
    ll s = 0;
    rep(i, 1, n){
        s = (s%mod + i%mod)%mod;
    }
    // cout << s  << "*"<< endl;
    s += s;
    ll sum = 1;
    ll fact = 1;
    rep(i, 0, n){
        fact = (fact%mod * (i+1)%mod)%mod;
    }
    sum = ((fact%mod)*(s%mod))%mod;
    cout << sum << endl;

}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
