/*
 * Problem   : 1430B - Barrels
 * Link      : https://codeforces.com/contest/1430/problem/B
 * Submission: https://codeforces.com/contest/1430/submission/102700468
 * Rating    : 800   Tags: greedy, implementation, sortings
 * Verdict   : Accepted (108 ms, 1600 KB)
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
        int n, k, x;
        cin >> n >> k;
        vi a, b;
        rep(i, 0, n){
            cin >> x;
            a.pb(x);
        }
        ll maxi ;
        sort(all(a));
        maxi = a[n-1];
        int cnt = 0;
        pre(i, n-2, 0){
            if(cnt>=k)
                break;
            maxi += a[i];
            cnt++;
        }
        cout << maxi << endl;
    }

    return 0;
}
