/*
 * Problem   : 1699C - The Third Problem
 * Link      : https://codeforces.com/contest/1699/problem/C
 * Submission: https://codeforces.com/contest/1699/submission/162834273
 * Rating    : 1700   Tags: combinatorics, constructive algorithms, math
 * Verdict   : Accepted (46 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-05 (Practice)
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
const ll mod = 1e9 + 7;

int main()
{
    fios
    TestCases{
        int n;
        cin >> n;
        vi a(n);
        vi p(n);
        ll ans = 1;
        rep(i, 0, n){
            cin >> a[i];
            p[a[i]] = i;
        }
        int l = p[0], r = p[1];
        if(l>r) swap(l, r);
        int cnt = 2;
        rep(i, 2, n){
            if(l<p[i] && p[i]<r){
                ans = ((ans%mod) * ((r-l+1-cnt)%mod))%mod;
            }
            l = min(l, p[i]);
            r = max(r, p[i]);
            cnt++;
        }
        cout << ans << endl;
    }
    return 0;
}
