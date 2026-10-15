/*
 * Problem   : 1973B - Cat, Fox and the Lonely Array
 * Link      : https://codeforces.com/contest/1973/problem/B
 * Submission: https://codeforces.com/contest/1973/submission/261426205
 * Rating    : 1300   Tags: binary search, bitmasks, data structures, greedy, math, two pointers
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-18 (Practice)
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
    int mx = 1;
    pre(j, 22, 0){
        int cnt = 0;
        rep(i, 0, n){
            cnt++;
            if(CheckBit(a[i], j)){
                mx = max(cnt, mx);
                cnt = 0;
            }
        }
        cnt = 0;
        pre(i, n-1, 0){
            cnt++;
            if(CheckBit(a[i], j)){
                mx = max(cnt, mx);
                cnt = 0;
            }
        }
        
    }
    cout << mx << endl;
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
