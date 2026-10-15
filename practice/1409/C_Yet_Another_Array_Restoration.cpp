/*
 * Problem   : 1409C - Yet Another Array Restoration
 * Link      : https://codeforces.com/contest/1409/problem/C
 * Submission: https://codeforces.com/contest/1409/submission/104524289
 * Rating    : 1200   Tags: brute force, math, number theory
 * Verdict   : Accepted (30 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-16 (Practice)
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
        ll n, x, y;
        cin >> n >> x >> y;
        ll dif = y-x;
        ll d=1;
        while(1){
            if(dif%d==0 && (dif/d)+1<=n){
                break;
            }
            d++;
        }
        for(int i=x; i<=y; i+=d){
            cout << i << " ";
        }
        ll np = n-dif/d-1;
        if(np){
            x-=d;
            while(x>0 && np){
                cout << x << " ";
                x-=d;
                np--;
            }
            while(np){
                cout << y+d << " ";
                np--;
                y+=d;
            }
        }
        cout << endl;

    }

    return 0;
}
