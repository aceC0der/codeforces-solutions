/*
 * Problem   : 1671D - Insert a Progression
 * Link      : https://codeforces.com/contest/1671/problem/D
 * Submission: https://codeforces.com/contest/1671/submission/154637346
 * Rating    : 1600   Tags: brute force, constructive algorithms, greedy
 * Verdict   : Accepted (62 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-23 (Practice)
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
        ll n, x;
        cin >> n >> x;
        vl arr(n);
        ll mini = LLONG_MAX, maxi = -1;
        ll ans = 0;
        rep(i, 0, n){
            cin >> arr[i];
            if(i>0){
                ans += abs(arr[i]-arr[i-1]);
            }
            mini = min(mini, arr[i]);
            maxi = max(maxi, arr[i]);
        }
        if(mini>1){
            ans += min((mini-1)*2, min((arr[0]-1), (arr[n-1]-1)));
        }
        if(maxi<x){
            ans += min((x-maxi)*2, min(( x-arr[0]), (x-arr[n-1])));
        }

        cout << ans << endl;
    }
    return 0;
}
