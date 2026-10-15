/*
 * Problem   : 1695C - Zero Path
 * Link      : https://codeforces.com/contest/1695/problem/C
 * Submission: https://codeforces.com/contest/1695/submission/224700991
 * Rating    : 1700   Tags: brute force, data structures, dp, graphs, greedy, shortest paths
 * Verdict   : Accepted (249 ms, 11700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-23 (Practice)
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

/*
    Analysis:
    -> Read the problem statement very carefully
    -> Find out what is given and what is wanted
    -> Try die hard to solve
    -> Prove your idea: why should it work?
    -> Eliminate your wrong ideas as soon as possible
    -> Have you missed any corner case?
    -> never miss post solving Analysis
 
    Remember:  You know what your capability is. Just believe in yourself and work very hard. GOD will never let you down.
*/

bool isValid(int i, int j){
    return (i>=0 && j>=0);
}

void solve(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int mn[n][m], mx[n][m];
    rep(i, 0, n){
        rep(j, 0, m){
            cin >> arr[i][j];
            mn[i][j] = INT_MAX;
            mx[i][j] = INT_MIN;
        }
    }
    mn[0][0] = mx[0][0] = arr[0][0];
    rep(i, 0, n){
        rep(j, 0, m){
            if(!i && !j) continue;
            if(isValid(i, j-1)){
                mn[i][j] = min(mn[i][j], mn[i][j-1]+arr[i][j]);
                mx[i][j] = max(mx[i][j], mx[i][j-1]+arr[i][j]);
            }
            if(isValid(i-1, j)){
                mn[i][j] = min(mn[i][j], mn[i-1][j]+arr[i][j]);
                mx[i][j] = max(mx[i][j], mx[i-1][j]+arr[i][j]);
            }
        }
    }
    // rep(i, 0, n){
    //     rep(j, 0, m){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // rep(i, 0, n){
    //     rep(j, 0, m){
    //         cout << mn[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // rep(i, 0, n){
    //     rep(j, 0, m){
    //         cout << mx[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    if(mx[n - 1][m - 1] % 2 || mn[n - 1][m - 1] > 0 || mx[n - 1][m - 1] < 0){
        cout << "NO" << endl;
        return;
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
