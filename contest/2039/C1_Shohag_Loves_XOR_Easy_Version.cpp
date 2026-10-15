/*
 * Problem   : 2039C1 - Shohag Loves XOR (Easy Version)
 * Link      : https://codeforces.com/contest/2039/problem/C1
 * Submission: https://codeforces.com/contest/2039/submission/292943973
 * Rating    : 1200   Tags: bitmasks, brute force, math, number theory
 * Verdict   : Accepted (217 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-11-23 (Contest)
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
#define int ll

void solve(){
    int n, m;
    cin >> n >> m;
    // cout << n << " " << m << endl;
    // return;
    int cnt = 0;
    int mx = 0;
    pre(i, 30, 0){
        if(CheckBit(n, i)){
            SetBit(mx, i+1);
            break;
        }
    }
    mx = min(mx, m);
    rep(i, 1, mx+1){
        int d = i^n;
        if(!d) continue;
        if(n%d==0 || i%d==0){
            // cout << i << " " << d << " " << i%d << endl;
            cnt++;
        }
    }
    cout << cnt;
    cout << endl;
}

int32_t main()
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
