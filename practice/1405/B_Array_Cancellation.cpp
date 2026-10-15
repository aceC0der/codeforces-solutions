/*
 * Problem   : 1405B - Array Cancellation
 * Link      : https://codeforces.com/contest/1405/problem/B
 * Submission: https://codeforces.com/contest/1405/submission/104210618
 * Rating    : 1000   Tags: constructive algorithms, implementation
 * Verdict   : Accepted (77 ms, 0 KB)
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
        ll x, ans = 0;
        rep(i, 0, n){
            cin >> x;
            ans+=x;
            if(ans<0) ans=0;
        }
        cout << ans << endl;
        
    }

    return 0;
}
