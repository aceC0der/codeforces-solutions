/*
 * Problem   : 1486B - Eastern Exhibition
 * Link      : https://codeforces.com/contest/1486/problem/B
 * Submission: https://codeforces.com/contest/1486/submission/107908879
 * Rating    : 1500   Tags: binary search, geometry, shortest paths, sortings
 * Verdict   : Accepted (31 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-02-19 (Practice)
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
        vl x(n), y(n);

        rep(i, 0, n){
            cin >> x[i] >> y[i] ;
        }
        if(n%2){
            cout << 1 << endl;
            continue;
        }
        sort(all(x));
        sort(all(y));
        n/=2;
        cout <<( x[n]-x[n-1]+1)*(y[n]-y[n-1]+1) << endl;


    }

    return 0;
}
