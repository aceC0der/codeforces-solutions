/*
 * Problem   : 1694C - Directional Increase
 * Link      : https://codeforces.com/contest/1694/problem/C
 * Submission: https://codeforces.com/contest/1694/submission/162226386
 * Rating    : 1300   Tags: greedy
 * Verdict   : Accepted (61 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-29 (Practice)
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
#define pl pair<ll, ll>
#define vpi vector<pi >
#define vpl vector<pl >
#define endl '\n'
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
#define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)


int main()
{
    fios
    TestCases{
        int n;
        cin >> n;
        int f = 1;
        ll sum = 0;
        rep(i, 0, n){
            int x;
            cin >> x;
            sum += x;
            if(sum<0) {
                f = -1;
                // cout << sum << endl;
            }
            else if(f!=-1 && sum==0) {
                f = 0;
            }
            else if(f==0 && x!=0){
                f = -1;
            }
        }
        cout << ((f==0 && sum==0) ? "Yes" : "No") << endl;
    }
    return 0;
}
