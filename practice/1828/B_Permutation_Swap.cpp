/*
 * Problem   : 1828B - Permutation Swap
 * Link      : https://codeforces.com/contest/1828/problem/B
 * Submission: https://codeforces.com/contest/1828/submission/206792120
 * Rating    : 900   Tags: math, number theory
 * Verdict   : Accepted (61 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-22 (Practice)
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
    vi pos(n+1);
    vi a(n);
    rep(i, 0, n){
        int x;
        cin >> x;
        a[i] = x;
        pos[x] = i+1;
    }
    int mn = 0;
    rep(i, 0, n){
        if(i+1!=a[i]){
            int dif = abs(pos[i+1]-pos[a[i]]);
            mn = gcd(dif, mn);
        }
    }
    // rep(i, 0, n){
    //     if(i+1!=a[i]){
    //         int dif = abs(pos[i+1]-pos[a[i]]);
    //         if(dif%mn){
    //             cout << 1 << endl;
    //             return;
    //         }
    //     }
    // }
    cout << mn << endl;
    
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
