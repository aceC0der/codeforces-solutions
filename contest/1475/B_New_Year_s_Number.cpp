/*
 * Problem   : 1475B - New Year's Number
 * Link      : https://codeforces.com/contest/1475/problem/B
 * Submission: https://codeforces.com/contest/1475/submission/105349910
 * Rating    : 900   Tags: brute force, dp, math
 * Verdict   : Accepted (61 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-25 (Contest)
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
        ll x = n%2020;
        ll y = n/2020;
        if(n%2020==0||n%2021==0 || x<y){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
