/*
 * Problem   : 1469D - Ceil Divisions
 * Link      : https://codeforces.com/contest/1469/problem/D
 * Submission: https://codeforces.com/contest/1469/submission/102641891
 * Rating    : 1700   Tags: brute force, constructive algorithms, math, number theory
 * Verdict   : Accepted (623 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-29 (Practice)
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
#define fi(n) for(ll i=0;i<n;i++)
#define fj(n) for(ll j=0;j<n;j++)
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
        //cout << n << " " << n-1 << endl;
        vpi a;
        int x=n;
        while(x!=2){
            int y=sqrt(x);
            if(y*y!=x)
                y++;
            pre(i, x-1, y+1){
                a.pb(mp(i, x));
            }
            a.pb(mp(x, y));
            a.pb(mp(x, y));
            x=y;
        }
        int sz=a.size();
        cout << sz << endl;
        rep(i, 0, sz){
            cout << a[i].ff << " " << a[i].ss << endl;
        }
    }

    return 0;
}
