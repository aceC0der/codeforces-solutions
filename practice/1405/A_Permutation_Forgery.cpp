/*
 * Problem   : 1405A - Permutation Forgery
 * Link      : https://codeforces.com/contest/1405/problem/A
 * Submission: https://codeforces.com/contest/1405/submission/104205793
 * Rating    : 800   Tags: constructive algorithms
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-13 (Practice)
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
        int a[n];
        rep(i, 0, n){
            cin >> a[i];
        }
        pre(i, n-1, 0){
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
