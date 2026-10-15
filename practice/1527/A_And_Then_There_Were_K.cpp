/*
 * Problem   : 1527A - And Then There Were K
 * Link      : https://codeforces.com/contest/1527/problem/A
 * Submission: https://codeforces.com/contest/1527/submission/118122577
 * Rating    : 800   Tags: bitmasks
 * Verdict   : Accepted (139 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-06-01 (Practice)
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
        int i = 0;
        while(n){
            i++;
            n /= 2;
        }
        n = pow(2, i-1)-1;
        cout << n << endl;
        
    }

    return 0;
}
