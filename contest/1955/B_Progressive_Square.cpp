/*
 * Problem   : 1955B - Progressive Square
 * Link      : https://codeforces.com/contest/1955/problem/B
 * Submission: https://codeforces.com/contest/1955/submission/255676543
 * Rating    : 1000   Tags: constructive algorithms, data structures, implementation, sortings
 * Verdict   : Accepted (108 ms, 1100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-04-08 (Contest)
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

int mat[505][505];

void solve(){
    int n, first, c, d;
    cin >> n >> c >> d;
    // cin >> first;
    int N = n*n;
    vi arr(N);
    rep(i, 0, N) cin >> arr[i];
    sort(all(arr));
    first = arr[0];
    mat[0][0] = first;
    rep(i, 1, n){
        mat[0][i] = mat[0][i-1]+d;
        mat[i][0] = mat[i-1][0]+c;
    }
    rep(i, 1, n){
        rep(j, 1, n){
            mat[i][j] = mat[i][j-1]+d;
        }
    }
    // cout << first << " " << c << " " <<d << endl;
    vi b;
    rep(i, 0, n){
        rep(j, 0, n){
            b.pb(mat[i][j]);
        }
    }
    sort(all(b));
    // rep(i, 0, N){
    //     cout << "( " << arr[i] << ", " << b[i] << " )" << endl;
    // }
    cout << ((arr==b) ? "YES": "NO") << endl;
    // rep(i, 0, n){
    //     rep(j, 0, n){
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

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
