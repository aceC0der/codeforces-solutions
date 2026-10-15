/*
 * Problem   : 1471B - Strange List
 * Link      : https://codeforces.com/contest/1471/problem/B
 * Submission: https://codeforces.com/contest/1471/submission/103446304
 * Rating    : 1100   Tags: brute force, greedy, implementation, math
 * Verdict   : Accepted (155 ms, 99900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-05 (Contest)
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
        ll n, x;
        cin >> n >> x;
        ll m, sum=0;
        vector<long long> b;
        vector<pair<long long, ll>> a;
        bool chl = true;
        rep(i, 0, n){
            cin >> m;
            b.pb(m);
            if(!(b[i]%x)&&chl){
                a.pb(mp(b[i]/x, x));
                sum+=b[i];
            }
            else{
                sum+=b[i];
                chl = false;
            }
        }
        if(!chl){
            int sz = a.size();
            rep(i, 0, sz){
                sum+=(ll)a[i].ff*(ll)a[i].ss;
            }
        }
        while(chl){
            rep(i, 0, a.size()){
                //cout << a.size() << endl;
                if(!(a[i].ff%x)&&chl){
                    a.pb(mp(a[i].ff/x, a[i].ss*x));
                    sum+=(ll)a[i].ff*(ll)a[i].ss;
                    //i=-1;
                    //a.erase(a.begin());
                }
                else{
                    sum+=(ll)a[i].ff*(ll)a[i].ss;
                    chl = false;
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}
