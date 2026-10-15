/*
 * Problem   : 1537C - Challenging Cliffs
 * Link      : https://codeforces.com/contest/1537/problem/C
 * Submission: https://codeforces.com/contest/1537/submission/119853381
 * Rating    : 1200   Tags: constructive algorithms, greedy, implementation, math
 * Verdict   : Accepted (155 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-06-18 (Contest)
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

int main()
{
    I
    T{
        ll n;
        cin >> n;
        vl b(n);
        rep(i, 0, n){
            cin >> b[i];
        }
        sort(all(b));
        ll mini = LONG_LONG_MAX, x, y;
        rep(i, 0, n-1){
            ll dif = b[i+1]-b[i];
            if(dif < mini){
                mini = dif;
                x = i;
                y = i+1;
            }

        }
        cout << b[x] << " ";
        rep(i, y+1, n){
            //if(i == x || i == y) continue;
            cout << b[i] << " ";
        }
        rep(i, 0, x){
            cout << b[i] << " ";
        }
        cout << b[y] << endl;
    }

    return 0;
}
