/*
 * Problem   : 1476A - K-divisible Sum
 * Link      : https://codeforces.com/contest/1476/problem/A
 * Submission: https://codeforces.com/contest/1476/submission/106248379
 * Rating    : 1000   Tags: binary search, constructive algorithms, greedy, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-02-02 (Practice)
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
        int n, k;
        cin >> n >> k;
        int ans = 1;
        if((k==1) || (n>=k &&  n%k==0)){
            ans = 1;
        }
        else if(n>k){
            ans = 2;
        }
        else{
            if(k%n==0){
                ans = k/n;
            }
            else
                ans = k/n+1;
        }
        cout << ans << "\n";

    }

    return 0;
}
