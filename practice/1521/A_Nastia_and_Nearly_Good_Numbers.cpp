/*
 * Problem   : 1521A - Nastia and Nearly Good Numbers
 * Link      : https://codeforces.com/contest/1521/problem/A
 * Submission: https://codeforces.com/contest/1521/submission/116092031
 * Rating    : 1000   Tags: constructive algorithms, math, number theory
 * Verdict   : Accepted (77 ms, 3600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-05-13 (Practice)
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
        ll a, b;
        cin >> a >> b;
        if(b == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            cout << a << " " << a*b << " " << a*(b+1) << endl;
        }
    }

    return 0;
}
