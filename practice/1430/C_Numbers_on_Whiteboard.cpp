/*
 * Problem   : 1430C - Numbers on Whiteboard
 * Link      : https://codeforces.com/contest/1430/problem/C
 * Submission: https://codeforces.com/contest/1430/submission/102703289
 * Rating    : 1000   Tags: constructive algorithms, data structures, greedy, implementation, math
 * Verdict   : Accepted (561 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-29 (Practice)
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
#define fi(n) for(ll i=0;i<n;i++)
#define fj(n) for(ll j=0;j<n;j++)
#define T int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define I ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

int main()
{
    I
    T{
        int n, tmp;
        cin >> n;
        tmp=n;
        cout << 2 << endl;
        pre(i, n-1, 1){
            cout << tmp << " " << i << endl;
            int x = tmp;
            tmp = (tmp+i)/2;
            if((x+i)%2)
                tmp++;
        }
        
    }

    return 0;
}
