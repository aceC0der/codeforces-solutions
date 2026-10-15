/*
 * Problem   : 1676B - Equal Candies
 * Link      : https://codeforces.com/contest/1676/problem/B
 * Submission: https://codeforces.com/contest/1676/submission/156994531
 * Rating    : 800   Tags: greedy, math, sortings
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-13 (Practice)
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
        int x=INT32_MAX;
        ll sum = 0;
        vi arr(n);
        rep(i, 0, n){
            cin >> arr[i];
            x = min(x, arr[i]);
        }
        rep(i, 0, n){
            sum += (arr[i]-x);
        }
        cout << sum << endl;
    }
    return 0;
}
