/*
 * Problem   : 1975B - 378QAQ and Mocha's Array
 * Link      : https://codeforces.com/contest/1975/problem/B
 * Submission: https://codeforces.com/contest/1975/submission/262693333
 * Rating    : 1000   Tags: brute force, greedy, math, sortings
 * Verdict   : Accepted (93 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-26 (Practice)
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
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    sort(all(a));
    vi b;
    rep(i, 0, n){
        if(a[i]%a[0]!=0){
            b.pb(a[i]);
            // return;
        }
    }
    rep(i, 0, b.size()){
        if(b[i]%b[0]!=0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios
    TestCases{
        solve();
    }
    return 0;
}
