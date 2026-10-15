/*
 * Problem   : 1754D - Factorial Divisibility
 * Link      : https://codeforces.com/contest/1754/problem/D
 * Submission: https://codeforces.com/contest/1754/submission/178207303
 * Rating    : 1600   Tags: math
 * Verdict   : Accepted (140 ms, 2000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-10-28 (Practice)
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
    int n, x;
    cin >> n >> x;
    vi a(x);
    int z;
    rep(i, 0, n){
        cin >> z;
        if(z<x) a[z]++;
    }
    rep(i, 0, x){
        if(a[i]>i){
            // cout << i << endl;
            int y = a[i]/(i+1);
            if(i+1<x){
                a[i+1]+=y;
            }
            a[i]-=(y*(i+1));
        }
    }
    // rep(i, 0, x){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    int s = 0;
    rep(i, 0, x){
        s+=a[i];
    }
    cout << (s ? "No" : "Yes" ) << endl;
}

int main()
{
    fios
        solve();
    return 0;
}
