/*
 * Problem   : 1684C - Column Swapping
 * Link      : https://codeforces.com/contest/1684/problem/C
 * Submission: https://codeforces.com/contest/1684/submission/162467350
 * Rating    : 1400   Tags: brute force, constructive algorithms, greedy, implementation, sortings
 * Verdict   : Accepted (62 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-01 (Practice)
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
        int a[n][m];
        int x, y;
        x = y = -1;
        rep(i, 0, n){
            rep(j, 0, m){
                cin >> a[i][j];
            }
        }
        bool flag = true;
        rep(i, 0, n){
            bool f = true;
            rep(j, 1, m){
                if(a[i][j-1]>a[i][j]){
                    if(f){
                        x = j-1;
                        f = false;
                    }
                    else {
                        y = j;
                        break;
                    }
                }
            }
            if(x!=-1){
                if(y==-1){
                    // cout << x << endl;
                    if((x+2<m && a[i][x+1]<a[i][x+2])||(x+1==m-1)){
                        // cout << " * " << endl;
                        x++;
                        int tmp = a[i][x-1];
                        y = x-1;
                        while(y-1>=0 && a[i][y-1]==tmp){
                            y--;
                        }
                        swap(x, y);
                        break;
                    }
                    int tmp = a[i][x+1];
                    y = x+1;
                    while(y+1<m && a[i][y+1]==tmp){
                        y++;
                    }
                }
                break;
            }
        }
        // cout << x+1 << " " << y+1 << endl;
        if(x==-1 && y==-1){
            rep(i, 0, n){
                rep(j, 1, m){
                    if(a[i][j-1]>a[i][j]){
                        flag = false;
                        break;
                    }
                }
                if(!flag) break;
            }
            if(flag){
                cout << 1 << " " << 1 << endl;
            }
            else{
                cout << -1 << endl;
            }
            continue;
        }
        rep(i, 0, n){
            swap(a[i][x], a[i][y]);
        }
        // cout << n << " " << m << endl;
        // rep(i, 0, n){
        //     rep(j, 0, m){
        //         cout << a[i][j] <<  " ";
        //     }
        //     cout << endl;
        // }
        rep(i, 0, n){
            rep(j, 1, m){
                if(a[i][j-1]>a[i][j]){
                    flag = false;
                    break;
                }
            }
            if(!flag) break;
        }
        if(flag){
            cout << x+1 << " " << y+1 << endl;
        } 
        else cout << -1 << endl;
    }
    return 0;
}
