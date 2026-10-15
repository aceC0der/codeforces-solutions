/*
 * Problem   : 1711B - Party
 * Link      : https://codeforces.com/contest/1711/problem/B
 * Submission: https://codeforces.com/contest/1711/submission/165575018
 * Rating    : 1300   Tags: brute force, graphs
 * Verdict   : Accepted (78 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-24 (Contest)
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
        int n, m;
        cin >>n >> m;
        n++;
        vi a(n);
        rep(i, 1, n) cin >> a[i];
        vi freq(n, 0);
        vpi pairs(m);
        rep(i, 0, m){
            int x, y;
            cin >> x >> y;
            pairs[i].first = x;
            pairs[i].second = y;
            freq[x]++;freq[y]++;
        }
        if(m%2){
            bool f = false;
            int mn = INT_MAX;
            rep(i, 1, n) if(freq[i]&1){
                mn = min(mn, a[i]);
                f = true;
            }
            int mn2 = INT_MAX;
            rep(i, 0, m){
                int p1 = freq[pairs[i].first]%2;
                int p2 = freq[pairs[i].second]%2;
                if(p1==p2){
                    mn2 = min(mn2, a[pairs[i].first]+a[pairs[i].second]);
                }
            }
            int ans = min(mn2, mn);
            cout << ans << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}
