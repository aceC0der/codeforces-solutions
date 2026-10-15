/*
 * Problem   : 1986B - Matrix Stabilization
 * Link      : https://codeforces.com/contest/1986/problem/B
 * Submission: https://codeforces.com/contest/1986/submission/267000452
 * Rating    : 1000   Tags: brute force, data structures, greedy, sortings
 * Verdict   : Accepted (124 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-23 (Contest)
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

int dirx[] = { 0, 1, 0, -1};
int diry[] = { -1, 0, 1, 0};

int n, m;

bool isValid(int i, int j){
    return (i>=0 && i<n && j>=0 && j<m);
}

void solve(){
    // int n, m;
    cin >> n >> m;
    int arr[n][m];
    rep(i, 0, n){
        rep(j, 0, m) cin >> arr[i][j];
    }
    rep(i, 0, n){
        rep(j, 0, m){
            int mx = 0;
            // cout << i << " " << j << ": " << endl;
            rep(k, 0, 4){
                int x = i+dirx[k];
                int y = j+diry[k];
                // cout << x << " " << y << endl;
                if(isValid(x, y)) mx = max(mx, arr[x][y]);
            }
            // cout << arr[i][j] << " " << mx << endl;
            if(arr[i][j]>mx) arr[i][j] = mx;
        }
    }
    rep(i, 0, n){
        rep(j, 0, m){
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }

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
