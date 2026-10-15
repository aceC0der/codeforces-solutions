/*
 * Problem   : 1797B - Li Hua and Pattern
 * Link      : https://codeforces.com/contest/1797/problem/B
 * Submission: https://codeforces.com/contest/1797/submission/201414617
 * Rating    : 1100   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (187 ms, 7800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-04-09 (Practice)
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
    int n, k;
    cin >> n >> k;
    int arr[n+1][n+1];

    rep(i, 0, n){
        rep(j, 0, n){
            cin >> arr[i][j];
        }
    }
    int krr[n+1][n+1];
    rep(i, 0, n){
        rep(j, 0, n){
            krr[i][j] = -1;
        }
    }
    int b = 0, r = 0;
    if(n&1){
        int lim = n/2;
        int x1, y1, x2, y2;
        x1 = lim-1, y1 = lim-1;
        x2 = lim+1, y2 = lim+1;
        int cnt = 1;
        rep(i, 0, lim){
            rep(j, 0, lim){
                // if(k<0) break;
                    krr[x1-i][y1-j] = cnt;
                    krr[x2+i][y2+j] = cnt++;
                if(arr[x1-i][y1-j]!=arr[x2+i][y2+j]){
                    k--;
                }
            }
        }
        x1 = lim-1, x2 = lim+1, y1 = lim+1, y2 = lim-1;
        // cnt = 1;
        rep(i, 0, lim){
            rep(j, 0, lim){
                // if(k<0) break;
                    krr[x1-i][y1+j] = cnt;
                    krr[x2+i][y2-j] = cnt++;
                if(arr[x1-i][y1+j]!=arr[x2+i][y2-j]){
                    k--;
                }
            }
        }
        int c1, c2;
        c1 = c2 = 0;
        rep(i, 0, lim){
            if(arr[lim][lim+i+1]!=arr[lim][lim-i-1]) k--;
            if(arr[lim+i+1][lim]!=arr[lim-i-1][lim]) k--;
        }
        cout << ((k>=0)?  "YES" : "NO") << endl;
    }
    else{
        int lim = n/2;
        int x1, y1, x2, y2;
        x1 = lim-1, y1 = lim-1;
        x2 = lim, y2 = lim;
        int cnt = 1;
        rep(i, 0, lim){
            rep(j, 0, lim){
                // if(k<0) break;
                krr[x1-i][y1-j] = cnt;
                krr[x2+i][y2+j] = cnt++;
                if(arr[x1-i][y1-j]!=arr[x2+i][y2+j]){

                    k--;
                }
            }
        }
        x1 = lim-1, x2 = lim, y1 = lim, y2 = lim-1;
        // cnt = 1;
        rep(i, 0, lim){
            rep(j, 0, lim){
                // if(k<0) break;
                krr[x1-i][y1+j] = cnt;
                    krr[x2+i][y2-j] = cnt++;
                if(arr[x1-i][y1+j]!=arr[x2+i][y2-j]){
                    k--;
                }
            }
        }
        cout << ((k>=0 && k%2==0)? "YES" : "NO") << endl;
    }
    
    // cout << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
