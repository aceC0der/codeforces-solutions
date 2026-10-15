/*
 * Problem   : 1471A - Strange Partition
 * Link      : https://codeforces.com/contest/1471/problem/A
 * Submission: https://codeforces.com/contest/1471/submission/103402691
 * Rating    : 900   Tags: greedy, math, number theory
 * Verdict   : Accepted (61 ms, 0 KB)
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
        ll n, x, v;
        cin >> n >> x;
        ll min=0, max=0, sum=0;
        rep(i, 0, n){
            cin >> v;
            max += v/x;
            if(v%x)
                max++;
            sum+=v;
        }
        min = sum/x;
        if(sum%x)
            min++;
        cout << min << " " << max << endl;
    }

    return 0;
}
