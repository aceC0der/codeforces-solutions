/*
 * Problem   : 1473A - Replacing Elements
 * Link      : https://codeforces.com/contest/1473/problem/A
 * Submission: https://codeforces.com/contest/1473/submission/104295266
 * Rating    : 800   Tags: greedy, implementation, math, sortings
 * Verdict   : Accepted (62 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-14 (Contest)
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
        int n, d;
        int x;
        cin >> n >> d;
        vi a;
        bool flag = true;
        rep(i, 0, n){
            cin >> x;
            if(x>d){
                flag = false;
            }
            a.pb(x);
        }
        sort(all(a));
        if(a[0]+a[1]<=d||flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
