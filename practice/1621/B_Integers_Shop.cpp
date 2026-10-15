/*
 * Problem   : 1621B - Integers Shop
 * Link      : https://codeforces.com/contest/1621/problem/B
 * Submission: https://codeforces.com/contest/1621/submission/164965469
 * Rating    : 1500   Tags: data structures, greedy, implementation
 * Verdict   : Accepted (249 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-20 (Practice)
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

        const int A = 1e9 + 1;
        int minL = A, costL = A;
        int maxR = 0, costR = A;
        int maxLen = 0, costLen = A;
        for (int i = 0; i < n; i++)
        {
            int l, r, c;
            cin >> l >> r >> c;

            if (l < minL)
                minL = l, costL = A;
            if (l == minL)
                costL = min(costL, c);

            if (maxR < r)
                maxR = r, costR = A;
            if (maxR == r)
                costR = min(costR, c);

            if (maxLen < r - l + 1)
                maxLen = r - l + 1, costLen = A;
            if (maxLen == r - l + 1)
                costLen = min(costLen, c);

            int ans = costL + costR;
            if (maxLen == maxR - minL + 1)
                ans = min(ans, costLen);
            cout << ans << "\n";
        }
    }
    return 0;
}
