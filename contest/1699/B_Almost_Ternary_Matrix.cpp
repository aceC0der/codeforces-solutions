/*
 * Problem   : 1699B - Almost Ternary Matrix
 * Link      : https://codeforces.com/contest/1699/problem/B
 * Submission: https://codeforces.com/contest/1699/submission/162781469
 * Rating    : 900   Tags: bitmasks, constructive algorithms, matrices
 * Verdict   : Accepted (30 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-04 (Contest)
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


int main()
{
    fios
    TestCases{
        int n, m;
        cin >> n >> m;
        bool a[n+5][m+5];
        n /=2;
        m/=2;
        bool f = true;
        rep(i, 0, n){
            bool fff = f;
            rep(j, 0, m){
                int x, y;
                x = i*2, y = j*2;
                if(fff){
                    a[x][y] = a[x+1][y+1] = 1;
                    a[x][y+1] = a[x+1][y] = 0;
                }
                else{
                    a[x][y] = a[x+1][y+1] = 0;
                    a[x][y+1] = a[x+1][y] = 1;
                }
                fff = !fff;
            }
            f = !f;
        }
        n*=2;
        m*=2;
        rep(i, 0, n){
            rep(j, 0, m){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
