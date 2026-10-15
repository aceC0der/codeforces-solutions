/*
 * Problem   : 1465B - Fair Numbers
 * Link      : https://codeforces.com/contest/1465/problem/B
 * Submission: https://codeforces.com/contest/1465/submission/102410141
 * Rating    : 1000   Tags: brute force, math, number theory
 * Verdict   : Accepted (233 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-26 (Practice)
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
        ll n, tmp, dig, tmp2;
        cin >> n;
        bool flag = true;
        while(flag){
            tmp=tmp2=n;
            while(tmp){
                dig = tmp%10;
                tmp /= 10;
                if(dig && n%dig){
                    n++;
                    break;
                }
                else
                {
                    continue;
                }
                
            }
            //cout << n << " " << dig << " " << tmp << endl; 
            if(tmp2==n){
                flag = false;
            }
        }
        cout << n << endl;
    }

    return 0;
}
