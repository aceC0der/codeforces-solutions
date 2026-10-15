/*
 * Problem   : 1980E - Permutation of Rows and Columns
 * Link      : https://codeforces.com/contest/1980/problem/E
 * Submission: https://codeforces.com/contest/1980/submission/264074260
 * Rating    : 1600   Tags: constructive algorithms, data structures, greedy, hashing, implementation, math, matrices, sortings
 * Verdict   : Accepted (171 ms, 10000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-04 (Practice)
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
    int n, m;
    cin >> n >> m;
    vector<vi> a(n, vi(m)), b(n, vi(m));
    vpi posb(n*m+3);
    rep(i, 0, n){
        rep(j, 0, m){
            cin >> a[i][j];
        }
    }
    rep(i, 0, n){
        rep(j, 0, m){
            cin >> b[i][j];
            posb[b[i][j]] = {i, j};
        }
    }
    vi rowF(n, -1), colF(m, -1);
    rep(i, 0, n){
        rep(j, 0, m){
            pi pos = posb[a[i][j]];
            int r = pos.ff;
            int c = pos.ss;
            if(rowF[r]==-1) rowF[r] = i;
            else if(rowF[r]!=i){
                cout << "NO" << endl;
                return;
            }
            if(colF[c]==-1) colF[c] = j;
            else if(colF[c]!=j){
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
