/*
 * Problem   : 1895D - XOR Construction
 * Link      : https://codeforces.com/contest/1895/problem/D
 * Submission: https://codeforces.com/contest/1895/submission/263137462
 * Rating    : 1900   Tags: bitmasks, constructive algorithms, data structures, math, string suffix structures, trees
 * Verdict   : Accepted (156 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-29 (Practice)
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
    rep(i, 0, n-1) cin >> a[i];
    int bits[27] = {0};
    int bits_a[27] = {0};
    rep(i, 0, 25){
        rep(j, 0, n){
            if(CheckBit(j, i)){
                bits_a[i]++;
            }
        }
    }
    // rep(i, 0, 25) cout << bits_a[i] << " "; cout << endl;
    int bi = 0;
    int b1 = 0;
    rep(i, 0, n-1){
        bi ^= a[i];
        rep(j, 0, 25){
            if(CheckBit(bi, j)){
                bits[j]++;
            }
        }
    }
    // rep(i, 0, 25) cout << bits[i] << " "; cout << endl;
    rep(i, 0, 25){
        if(bits[i]!=bits_a[i]){
            SetBit(b1, i);
        }
    }
    cout << b1 << " ";
    bi = 0;
    rep(i, 0, n-1) {
        bi ^= a[i];
        cout << (b1^bi) << " ";
    }
    cout << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios
    // TestCases{
        solve();
    // }
    return 0;
}
