/*
 * Problem   : 1606C - Banknotes
 * Link      : https://codeforces.com/contest/1606/problem/C
 * Submission: https://codeforces.com/contest/1606/submission/165046670
 * Rating    : 1400   Tags: greedy, number theory
 * Verdict   : Accepted (140 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-21 (Practice)
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
    TestCases{
        ll n, k;
        ll ans = 0;
        cin >> n >> k;
        vi a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        k++;

        rep(i, 1, n){
            ll x = a[i]-a[i-1];
            x = (ll)pow(10, x)-1;
            // cout << k << endl;
            if(k>x) {
                k-=x;
                ans += (x*(ll)pow(10,a[i-1]));
            }
            else{
                ans += (k*(ll)pow(10,a[i-1]));
                k=0;
                break;
            }
        }
        ans += (k*(ll)pow(10,a[n-1]));
        cout << ans << endl;
    }

    return 0;
}
