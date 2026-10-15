/*
 * Problem   : 1474B - Different Divisors
 * Link      : https://codeforces.com/contest/1474/problem/B
 * Submission: https://codeforces.com/contest/1474/submission/104891532
 * Rating    : 1000   Tags: binary search, constructive algorithms, greedy, math, number theory
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-20 (Practice)
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
        int d;
        cin >> d;
        ll ans = 1;
        for(int i=ans+d; ; i++){
            //cout << "*";
            bool chk = true;
            int sz = sqrt(i);
            for(int j=2; j<=sz; j++){
                if(i%j==0){
                    chk = false;
                    break;
                }   
            }
            if(chk){
                ans = i;
                break;
            }
        }
        for(int i=ans+d; ; i++){
            bool chk = true;
            int sz = sqrt(i);
            for(int j=2; j<=sz; j++){
                if(i%j==0){
                    chk = false;
                    break;
                }
            }
            if(chk){
                ans *= i;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
