/*
 * Problem   : 1473B - String LCM
 * Link      : https://codeforces.com/contest/1473/problem/B
 * Submission: https://codeforces.com/contest/1473/submission/104351280
 * Rating    : 1000   Tags: brute force, math, number theory, strings
 * Verdict   : Accepted (31 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-14 (Practice)
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
        string a, b, saa, sbb;
        cin >> a >> b;
        int sa, sb, sma;
        sa = a.size();
        sb = b.size();
        int gcd = __gcd(sa, sb);
        rep(i, 0, sb/gcd){
            saa+=a;
        }
        rep(i, 0, sa/gcd){
            sbb+=b;
        }
        if(saa==sbb){
            cout << saa << endl;
        }
        else{
            cout << -1 << endl;
        }
        
    }

    return 0;
}
