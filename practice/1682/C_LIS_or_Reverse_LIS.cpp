/*
 * Problem   : 1682C - LIS or Reverse LIS?
 * Link      : https://codeforces.com/contest/1682/problem/C
 * Submission: https://codeforces.com/contest/1682/submission/162274315
 * Rating    : 1400   Tags: constructive algorithms, greedy, implementation, math
 * Verdict   : Accepted (155 ms, 6400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-30 (Practice)
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
        int ans = n;
        map<int, int> m;
        rep(i, 0, n){
            int x;
            cin >> x;
            m[x]++;
            if(m[x]>2){
                ans--;
            }
        }
        cout << (ans+1)/2 << endl;
    }
    return 0;
}
