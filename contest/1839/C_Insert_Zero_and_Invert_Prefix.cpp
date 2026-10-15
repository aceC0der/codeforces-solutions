/*
 * Problem   : 1839C - Insert Zero and Invert Prefix
 * Link      : https://codeforces.com/contest/1839/problem/C
 * Submission: https://codeforces.com/contest/1839/submission/208340546
 * Rating    : 1300   Tags: constructive algorithms
 * Verdict   : Accepted (46 ms, 1500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-03 (Contest)
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
    rep(i, 0, n) cin >> a[i];
    vi p;
    int i=n-1;
    if(a[i]==1){
        cout << "NO" << endl;
        return;
    }
    while(i>=0){
        int zr=0;
        int on=0;
        while(i>=0 && a[i]==0){
            zr++;
            i--;
        }
        zr--;
        while(i>=0 && a[i]==1){
            on++;
            i--;
        }
        zr+=on;
        while(zr--) p.pb(0);
        if(on) p.pb(on);
        else p.pb(0);
    }
    cout << "YES" << endl;
    for(auto it: p){
        cout << it << " " ;
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
    TestCases{
        solve();
    }
    return 0;
}
