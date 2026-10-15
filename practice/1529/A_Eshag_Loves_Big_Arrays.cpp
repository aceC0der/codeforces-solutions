/*
 * Problem   : 1529A - Eshag Loves Big Arrays
 * Link      : https://codeforces.com/contest/1529/problem/A
 * Submission: https://codeforces.com/contest/1529/submission/117873141
 * Rating    : 800   Tags: constructive algorithms, greedy, math
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-05-30 (Practice)
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
        vl a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        sort(all(a));
        ll i = 0, x = a[0];
        while(x==a[i]){
            i++;
        }
        cout << n-i << endl;
        
    }

    return 0;
}
