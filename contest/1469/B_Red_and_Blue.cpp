/*
 * Problem   : 1469B - Red and Blue
 * Link      : https://codeforces.com/contest/1469/problem/B
 * Submission: https://codeforces.com/contest/1469/submission/102608786
 * Rating    : 1000   Tags: dp, greedy
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-28 (Contest)
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
        int n, x, m, maxn=0, maxm=0, sum=0;
        cin >> n;
        rep(i, 0, n){
            cin >> x;
            sum+=x;
            maxn = max(sum, maxn);
        }
        sum = 0;
        cin >> m;
        rep(i, 0, m){
            cin >> x;
            sum+=x;
            maxm = max(sum, maxm);
        }
        cout << maxn+maxm << endl;
    }

    return 0;
}
