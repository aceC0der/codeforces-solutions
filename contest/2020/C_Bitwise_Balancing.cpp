/*
 * Problem   : 2020C - Bitwise Balancing
 * Link      : https://codeforces.com/contest/2020/problem/C
 * Submission: https://codeforces.com/contest/2020/submission/283618083
 * Rating    : 1400   Tags: bitmasks, hashing, implementation, math, schedules, ternary search
 * Verdict   : Accepted (155 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-29 (Contest)
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
    ll b, c, d;
    cin >> b >> c >> d;
    bool carry = 0;
    int arr[2][2][2];
    arr[0][0][0] = 0;
    arr[0][0][1] = 1;
    arr[0][1][0] = 0;
    arr[0][1][1] = -1;
    arr[1][0][0] = -1;
    arr[1][0][1] = 1;
    arr[1][1][0] = 1;
    arr[1][1][1] = 0;
    ll a = 0;
    rep(i, 0, 63){
        bool x, y, z;
        x = CheckBit(b, i);
        y = CheckBit(c, i);
        z = CheckBit(d, i);
        if(arr[x][y][z]==-1){
            cout << -1 << endl;
            return;
        }
        if(arr[x][y][z]){
            SetBit(a, i);
        }
    }
    cout << a << endl;
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
