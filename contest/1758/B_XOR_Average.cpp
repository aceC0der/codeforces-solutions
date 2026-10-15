/*
 * Problem   : 1758B - XOR = Average
 * Link      : https://codeforces.com/contest/1758/problem/B
 * Submission: https://codeforces.com/contest/1758/submission/182527950
 * Rating    : 900   Tags: constructive algorithms
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-11-25 (Contest)
 */
#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
#define vi vector<ll>
#define vl vector<ll>
#define pi pair<ll, ll>
#define pl pair<ll, ll>
#define vpi vector<pi >
#define vpl vector<pl >
#define endl '\n'
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
#define TestCases ll tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(ll i=a; i<b; i++)
#define pre(i, a, b) for(ll i=a; i>=b; i--)

void solve(){
    ll n;
    cin >> n;
    if(n&1){
        rep(i, 0, n) cout << 1 << " "; cout << endl;
    }
    else if(n!=2){
        ll x = (n*n - (n+2))%(n-2);
        ll y = (n*n - (n+2))/(n-2);
        rep(i, 0, x){
            cout << y+1 << " ";
        }
        rep(i, 0, n-2-x) cout << y << " ";
        cout << 1 << " " << n+1 << endl;
    }
    else{
        cout << 1 << " " << 3 << endl;
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
