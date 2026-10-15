/*
 * Problem   : 1519B - The Cake Is a Lie
 * Link      : https://codeforces.com/contest/1519/problem/B
 * Submission: https://codeforces.com/contest/1519/submission/119265822
 * Rating    : 800   Tags: dp, math
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-06-12 (Practice)
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
        ll n, m, k;
        cin >> n >> m >> k;
        ll cost =  (n-1) + n*(m-1);
        //cout << cost << endl;
        if(cost == k){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
