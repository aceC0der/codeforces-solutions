/*
 * Problem   : 2053A - Tender Carpenter
 * Link      : https://codeforces.com/contest/2053/problem/A
 * Submission: https://codeforces.com/contest/2053/submission/298810706
 * Rating    : 800   Tags: dp, geometry, greedy, math
 * Verdict   : Accepted (61 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-28 (Contest)
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
#define vvi vector<vector<int>>
#define vb vector<bool>
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
    cin >>n ;
    vi a(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    bool f = false;
    rep(i, 0, n-1){
        int mn = min(a[i], a[i+1]);
        int mx = max(a[i], a[i+1]);
        if(2*mn>mx){
            f = true;
            break;
        }
    }
    cout << (f? "YES" : "NO") << endl;
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
