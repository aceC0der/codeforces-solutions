/*
 * Problem   : 1793A - Yet Another Promotion
 * Link      : https://codeforces.com/contest/1793/problem/A
 * Submission: https://codeforces.com/contest/1793/submission/194539581
 * Rating    : 800   Tags: greedy, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-02-22 (Practice)
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
    ll a, b;
    ll n, m;
    cin >> a >> b;
    cin >> n >> m;
    if(n<=m){
        cout << min(a, b)*n << endl;
        return;
    }
    ll x = (a*m)/(m+1);
    if(x<b){
        x = n%(m+1);
        n/=(m+1);
        cout << min(a, b)*x + (a*n*m) << endl;
    }
    else{
        cout << b*n << endl;
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
