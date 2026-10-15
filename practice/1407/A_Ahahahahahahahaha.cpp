/*
 * Problem   : 1407A - Ahahahahahahahaha
 * Link      : https://codeforces.com/contest/1407/problem/A
 * Submission: https://codeforces.com/contest/1407/submission/103037372
 * Rating    : 1100   Tags: constructive algorithms, math
 * Verdict   : Accepted (30 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-02 (Practice)
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
        int n;
        cin >> n;
        int one=0, zero=0;
        int x;
        rep(i, 0, n){
            cin >> x;
            if(x==0)
                zero++;
            else
                one++;
        }
        if(one>zero){
            one-=one%2;
            cout << one << endl;
            rep(i, 0, one){
                cout << 1 << " ";
            }
            cout << endl;
        }
        else{
            //zero-=zero%2;
            cout << zero << endl;
            rep(i, 0, zero){
                cout << 0 << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
