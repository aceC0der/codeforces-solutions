/*
 * Problem   : 1787A - Exponential Equation
 * Link      : https://codeforces.com/contest/1787/problem/A
 * Submission: https://codeforces.com/contest/1787/submission/193164140
 * Rating    : 800   Tags: constructive algorithms, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-02-11 (Practice)
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
    if(n&1){
        cout << -1 << endl;
        return;
    }
    else{
        cout << n/2 << " " << 1 << endl;
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
