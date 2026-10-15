/*
 * Problem   : 1722G - Even-Odd XOR
 * Link      : https://codeforces.com/contest/1722/problem/G
 * Submission: https://codeforces.com/contest/1722/submission/199138612
 * Rating    : 1500   Tags: bitmasks, constructive algorithms, greedy
 * Verdict   : Accepted (46 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-03-26 (Practice)
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
    int xr = 0;
    int idx = 1;
    if(n==3){
        cout << "2 1 3" << endl;
        return;
    }
    vi a(n);
    for(int i=1; i<n; i+=2){
        a[i] = idx++;
        // xr ^= a[i];
    }
    // cout << idx << endl;
    int mx = 0;
    rep(i, 0, 31){
        if(idx & (1<<i)){
            mx = i+1;
        }
    }
    idx = (1<<mx)+1;
    // cout << idx << endl;
    for(int i=0; i<n; i+=2){
        a[i] = idx++;
        // xr ^= a[i];
    }
    // if(n&1){
    //     xr ^= a[n-1];
    //     a[n-1] = 0;
    // }
    // cout << a[1] << " ";
    if((n/2)&1) a[2] ^= (1<<mx);
    a[2] |= (1<<(mx+1));
    a[1] |= (1<<(mx+1));
    // cout << a[1] << endl;
    xr = 0;
    if(n&1) a[n-1] = 0;
    rep(i, 0, n){
        xr ^= a[i];
        cout << a[i] << " ";
    }
    cout << endl;
    // cout << xr << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
