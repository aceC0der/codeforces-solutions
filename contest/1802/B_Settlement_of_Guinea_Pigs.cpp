/*
 * Problem   : 1802B - Settlement of Guinea Pigs
 * Link      : https://codeforces.com/contest/1802/problem/B
 * Submission: https://codeforces.com/contest/1802/submission/196613309
 * Rating    : 1000   Tags: greedy, implementation, math
 * Verdict   : Accepted (31 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-03-09 (Contest)
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
    rep(i, 0, n){
        cin >> a[i];
    }
    int crr = 0, mx = 0;
    int gini = 0;
    rep(i, 0, n){
        if(a[i]==1) {
            gini++;
            crr++;
        }
        else if(gini>0){
            crr = gini/2 + 1;
            // if(!gini) crr--;
        }
        mx = max(mx, crr);
    }
    cout << mx << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
