/*
 * Problem   : 1765D - Watch the Videos
 * Link      : https://codeforces.com/contest/1765/problem/D
 * Submission: https://codeforces.com/contest/1765/submission/188235704
 * Rating    : 1700   Tags: binary search, constructive algorithms, two pointers
 * Verdict   : Accepted (62 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-06 (Practice)
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
const int N = 2e5+5;
int a[N], n, s;

bool can(int x) {
    int l = x - 1, r = n - 1;
    while (l < r) {
        if (a[r] > s - a[l]) return false;
        ++l;
        if (l < r) {
            if (a[l] > s - a[r]) return false;
            --r;
        }
    }
    return true;
}


int main() {
    long long sum = 0;
    scanf("%d %d\n", &n, &s);
    for(int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    sort(a, a + n, greater<int>());

    int l = 1, r = n;
    while (l < r) {
        int m = (l + r) >> 1;
        if (can(m)) r = m;
        else l = m + 1;
    }

    long long ans = sum + r;
    cout << ans << endl;

    return 0;
}
