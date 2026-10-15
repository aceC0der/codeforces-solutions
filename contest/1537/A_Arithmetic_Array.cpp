/*
 * Problem   : 1537A - Arithmetic Array
 * Link      : https://codeforces.com/contest/1537/problem/A
 * Submission: https://codeforces.com/contest/1537/submission/119807739
 * Rating    : 800   Tags: greedy, math
 * Verdict   : Accepted (31 ms, 0 KB)
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
        ll sum = 0;
        ll x;
        rep(i, 0, n){
            cin >> x;
            sum += x;
        }
        if(sum < n){
            cout << 1 << endl;
        }
        else{
            cout << sum-n << endl;
        }
    }

    return 0;
}
