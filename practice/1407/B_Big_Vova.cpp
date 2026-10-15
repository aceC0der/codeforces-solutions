/*
 * Problem   : 1407B - Big Vova
 * Link      : https://codeforces.com/contest/1407/problem/B
 * Submission: https://codeforces.com/contest/1407/submission/103042558
 * Rating    : 1300   Tags: brute force, greedy, math, number theory
 * Verdict   : Accepted (31 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-02 (Practice)
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
    /*bool sieve[1050];
    int lim = sqrt(1050);
    rep(i, 0, 1050){
        sieve[i]=true;
    }
    rep(i, 2, lim){
        rep(j, 3, 1050){
            if(j%i==0 && j!=i){
                sieve[j] = false;
            }
        }
    }
    sieve[0]=sieve[1]=false;
    vi prime;
    rep(i, 2, 1050){
        if(sieve[i]){
            prime.pb(i);
        }
    }*/
    T{
        int n;
        cin >> n;
        vi a, b;
        vector<bool> flag;
        int x;
        rep(i, 0, n){
            cin >> x;
            a.pb(x);
            flag.pb(true);
        }
        sort(all(a), greater<int>());
        flag[0]=false;
        vpi primeFacto;
        b.pb(a[0]);
        int cgcd = a[0], mgcd=0, mindex=0;
        
        rep(i, 1, n){
            mgcd=0;
            rep(j, 1, n){
                if(flag[j]){
                    int g =__gcd(a[j], cgcd);
                    if(g>mgcd){
                        mgcd=g;
                        mindex = j;
                    }
                }
            }
            b.pb(a[mindex]);
            flag[mindex]=false;
            cgcd = mgcd;
        }
        rep(i, 0, n){
            cout << b[i] << " ";
        }
        cout << endl;

    }

    return 0;
}
