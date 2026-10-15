/*
 * Problem   : 1475F - Unusual Matrix
 * Link      : https://codeforces.com/contest/1475/problem/F
 * Submission: https://codeforces.com/contest/1475/submission/292843176
 * Rating    : 1900   Tags: 2-sat, brute force, constructive algorithms
 * Verdict   : Accepted (62 ms, 3200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-11-23 (Practice)
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
    cin >> n;
    string a[n], b[n];
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];

    int grid[n][n];
    rep(i, 0, n){
        rep(j, 0, n){
            if(a[i][j]==b[i][j]) grid[i][j] = 0;
            else grid[i][j] = 1;
        }
    }
    
    rep(j, 0, n){
        if(grid[0][j]){
            rep(i, 0, n){
                grid[i][j]^=1;
            }
        }
    }

    rep(i, 0, n){
        rep(j, 1, n){
            if(grid[i][j-1]!=grid[i][j]){
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
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
