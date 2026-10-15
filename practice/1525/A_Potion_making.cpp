/*
 * Problem   : 1525A - Potion-making
 * Link      : https://codeforces.com/contest/1525/problem/A
 * Submission: https://codeforces.com/contest/1525/submission/118294331
 * Rating    : 800   Tags: math, number theory
 * Verdict   : Accepted (30 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-06-03 (Practice)
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
        int k;
        cin >> k;
        
        cout << 100/__gcd(100, k) << endl;
    }

    return 0;
}
