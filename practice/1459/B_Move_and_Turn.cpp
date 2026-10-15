/*
 * Problem   : 1459B - Move and Turn
 * Link      : https://codeforces.com/contest/1459/problem/B
 * Submission: https://codeforces.com/contest/1459/submission/102529243
 * Rating    : 1300   Tags: dp, math
 * Verdict   : Accepted (30 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-28 (Practice)
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
    int n;
    cin >> n;
    int a, b;
    a = b = n/2;
    if(n%2==0){
       cout << (++a*++b) << endl;
    }
    else{
        cout << (++a+1)*(++b)*2 << endl;
    }


    return 0;
}
