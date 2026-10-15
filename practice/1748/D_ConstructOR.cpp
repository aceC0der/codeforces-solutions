/*
 * Problem   : 1748D - ConstructOR 
 * Link      : https://codeforces.com/contest/1748/problem/D
 * Submission: https://codeforces.com/contest/1748/submission/181053669
 * Rating    : 2100   Tags: bitmasks, chinese remainder theorem, combinatorics, constructive algorithms, math, number theory
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-11-15 (Practice)
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

int lsb(ll a){
    int cnt=0;
    while(!(a&1)){
        a>>=1LL;
        cnt++;
    }
    return cnt;
}

void printbin(ll n){
    pre(i, 30, 0){
        cout<< CheckBit(n, i);
    }
    cout << endl;
}

void solve(){
    ll a, b, d;
    cin >> a >> b >> d;
    int mn = min(lsb(a), lsb(b));
    // cout << mn << endl;
    ll ld = lsb(d);
    if(mn<ld){
        cout << -1 << endl;
        return;
    }
    ll ans = 0;
    ll ab = a|b;
    rep(i, ld, 31){
        if(CheckBit(ab, i) && !CheckBit(ans, i)) ans += d<<(i-ld);
    }
    cout << ans << endl;
    // printbin(ans);printbin(ab);
    // if(ans%d==0) cout << "*****" << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
