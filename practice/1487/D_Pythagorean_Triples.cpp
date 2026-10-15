/*
 * Problem   : 1487D - Pythagorean Triples
 * Link      : https://codeforces.com/contest/1487/problem/D
 * Submission: https://codeforces.com/contest/1487/submission/107497037
 * Rating    : 1500   Tags: binary search, brute force, math, number theory
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-02-16 (Practice)
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
        int n;
        cin >> n;
        int k = 2 * n - 1;
        k = sqrt(k);

        int ans = k / 2 ;
        if(k % 2 == 0){
            ans--;
        }

        cout << ans << endl;
    }

    return 0;
}
