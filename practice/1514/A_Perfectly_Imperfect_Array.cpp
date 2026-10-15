/*
 * Problem   : 1514A - Perfectly Imperfect Array
 * Link      : https://codeforces.com/contest/1514/problem/A
 * Submission: https://codeforces.com/contest/1514/submission/113670616
 * Rating    : 800   Tags: math, number theory
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-04-21 (Practice)
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
        int x;
        bool flag = false;
        rep(i, 0, n){
            cin >> x;
            int y = sqrt(x);
            if(y*y != x){
                flag = true;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }

    return 0;
}
