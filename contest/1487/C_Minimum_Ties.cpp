/*
 * Problem   : 1487C - Minimum Ties
 * Link      : https://codeforces.com/contest/1487/problem/C
 * Submission: https://codeforces.com/contest/1487/submission/107451858
 * Rating    : 1500   Tags: brute force, constructive algorithms, dfs and similar, graphs, greedy, implementation, math
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-02-15 (Contest)
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
#define vpi vector<pi>
#define T int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define I ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

struct team{
    int w, l, t;
};

int main()
{
    I
    T{
        int n;
        cin >> n;
        int win = (n-1)/2, tie = (n-1)%2, loss = (n-1)/2;
        vector<team> a(n);
        rep(i, 0, n){
            a[i].w = win;
            a[i].t = tie;
            a[i].l = loss;
        }
        rep(i, 0, n-1){
            rep(j, i+1, n){
                if(a[i].t>0 && a[j].t>0){
                    a[i].t--;
                    a[j].t--;
                    cout << "0 ";
                }
                else if(a[i].w > 0 && a[j].l> 0){
                    a[i].w--;
                    a[j].l--;
                    cout << 1 << " ";
                }
                else if(a[i].l > 0 && a[j].w > 0){
                    a[i].l--;
                    a[j].w--;
                    cout << -1 << " ";
                }
            }
        }
        cout << endl;
        // rep(i, 0, n){
        //     cout << a[i].w << " " << a[i].l << " " << a[i].t << endl;
        // }
    }

    return 0;
}
