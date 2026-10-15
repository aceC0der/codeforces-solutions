/*
 * Problem   : 1720C - Corners
 * Link      : https://codeforces.com/contest/1720/problem/C
 * Submission: https://codeforces.com/contest/1720/submission/168846093
 * Rating    : 1200   Tags: greedy, implementation
 * Verdict   : Accepted (15 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-18 (Contest)
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
    string a[n];
    int ones = 0;
    rep(i, 0, n){
        cin >> a[i];
    }
    rep(i, 0, n){
        rep(j, 0, m){
            if(a[i][j]=='1') ones++;
        }
    }
    // cout << ones << endl;
    int zr = n*m-ones;
    // if(!ones) cout << 0 << endl;
    if(zr==0){
        cout << ones-2 << endl;
        return;
    }
    bool f = false;
    rep(i, 0, n){
        rep(j, 0, m){
            // cout << i << " " << j << endl;
            if(a[i][j]=='0'){
                if(i-1>=0){
                    rep(k, j-1, j+2){
                        if(k>=0 && k<m){
                            f |= (a[i-1][k]=='0');
                            // cout << (a[i-1][k]=='0');
                        }
                    }
                }
                if(i+1<n){
                    rep(k, j-1, j+2){
                        if(k>=0 && k<m){
                            f |= (a[i+1][k]=='0');
                            // cout << (a[i+1][k]=='0');
                        }
                    }
                }
                if(j-1>=0) f |= (a[i][j-1]=='0');
                if(j+1<m) f |= (a[i][j+1]=='0');
            }
            if(f) break;
        }
        if(f) break;
    }
    if(f) cout << ones << endl;
    else cout << ones-1 << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
