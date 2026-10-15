/*
 * Problem   : 1717C - Madoka and Formal Statement
 * Link      : https://codeforces.com/contest/1717/problem/C
 * Submission: https://codeforces.com/contest/1717/submission/189894676
 * Rating    : 1300   Tags: greedy
 * Verdict   : Accepted (109 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-21 (Practice)
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
    vi a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    bool f = false;
    rep(i, 0, n){
        f |= (a[i]>b[i]);
    }
    if(f){
        cout << "NO" << endl;
        return;
    }
    rep(i, 0, n){
        if(a[i]==b[i]) continue;
        if(i==n-1){
            if(b[i]>b[0]+1){
                cout << "NO" << endl;
                return;
            }
        }
        else{
            if(b[i]>b[i+1]+1){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;

}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
