/*
 * Problem   : 1467A - Wizard of Orz
 * Link      : https://codeforces.com/contest/1467/problem/A
 * Submission: https://codeforces.com/contest/1467/submission/103747023
 * Rating    : 900   Tags: constructive algorithms, greedy, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-08 (Contest)
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
        if(n==1){
            cout << 9 << endl;
            continue;
        }
        cout << 98 ;
        int digit=9;
        rep(i, 0, n-2){
            cout << digit;
            if(digit==9){
                digit=0;
                continue;
            }
            digit++;
        }
        cout << endl;
        
    }

    return 0;
}
