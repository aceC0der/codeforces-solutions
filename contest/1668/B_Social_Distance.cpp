/*
 * Problem   : 1668B - Social Distance
 * Link      : https://codeforces.com/contest/1668/problem/B
 * Submission: https://codeforces.com/contest/1668/submission/154103888
 * Rating    : 900   Tags: greedy, math, sortings
 * Verdict   : Accepted (62 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-19 (Contest)
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
        ll n, m;
        cin >> n >> m;
        vl arr(n);
        ll mini = 0;
        rep(i, 0, n){
            cin >> arr[i];
            mini += arr[i];
        }
        sort(all(arr));
        mini += arr[n-1] - arr[0]+n;
        if(m<mini){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" <<endl;
        }
    }
    return 0;
}
