/*
 * Problem   : 1762C - Binary Strings are Fun
 * Link      : https://codeforces.com/contest/1762/problem/C
 * Submission: https://codeforces.com/contest/1762/submission/185346721
 * Rating    : 1400   Tags: combinatorics, math
 * Verdict   : Accepted (31 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-15 (Contest)
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

const ll mod = 998244353;
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 1;
    ll cons = 0;
    ll cnt = 1;
    rep(i, 1, n){
        if(s[i]==s[i-1]){
            cnt = (cnt%mod * 2%mod)%mod;
            ans = (ans%mod + cnt%mod)%mod;
        }
        else{
            cnt = 1;
            ans = (ans%mod + cnt%mod)%mod;
        }
    }
    cout << ans << endl;

}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
