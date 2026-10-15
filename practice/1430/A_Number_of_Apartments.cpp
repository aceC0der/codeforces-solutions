/*
 * Problem   : 1430A - Number of Apartments
 * Link      : https://codeforces.com/contest/1430/problem/A
 * Submission: https://codeforces.com/contest/1430/submission/102699631
 * Rating    : 900   Tags: brute force, constructive algorithms, math
 * Verdict   : Accepted (31 ms, 0 KB)
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
          int rem;
          bool flag = false;
          rep(i, 0, n){
              rep(j, 0, n){
                  rem = n-i*3-j*5;
                  if(rem>=0 && rem%7==0){
                      //cout << rem << endl;
                      rem = rem/7;
                      cout << i << " " << j << " " << (rem) << endl;
                      rem = -1;
                      break;
                  }
              }
              if(rem==-1)
                break;
              if(i==n-1)
                flag = true;
          }
          if(flag)
            cout << -1 << endl;
    }

    return 0;
}
