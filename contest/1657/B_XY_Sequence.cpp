/*
 * Problem   : 1657B - XY Sequence
 * Link      : https://codeforces.com/contest/1657/problem/B
 * Submission: https://codeforces.com/contest/1657/submission/150484217
 * Rating    : 800   Tags: greedy
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-03-22 (Contest)
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
        ll n, b, x, y;
        cin >> n >> b >> x >> y;
        ll a = 0;
        ll sum = 0;
        rep(i, 0, n){
            if(a+x<=b){
                a+=x;
                sum +=a;
            }
            else{
                a-=y;
                sum+=a;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
