/*
 * Problem   : 1705A - Mark the Photographer
 * Link      : https://codeforces.com/contest/1705/problem/A
 * Submission: https://codeforces.com/contest/1705/submission/164273794
 * Rating    : 800   Tags: greedy, sortings
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-15 (Contest)
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
        int n, x;
        cin >> n >> x;
        n*=2;
        vi a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        sort(all(a));
        vector<bool> flag(n, false);
        bool f = true;
        int y = n/2;
        // cout << y << endl;
        rep(i, 0, y){
            int k = a[i]+x;
            bool ff = false;
            rep(j, y, n){
                if(a[j]>=k && flag[j]==false){
                    flag[j] = true;
                    ff = true;
                    break;
                }
            }
            f &= ff;
        }
        cout << (f? "YES" : "NO") << endl;
    }
    return 0;
}
