/*
 * Problem   : 1627B - Not Sitting
 * Link      : https://codeforces.com/contest/1627/problem/B
 * Submission: https://codeforces.com/contest/1627/submission/164928594
 * Rating    : 1300   Tags: games, greedy, sortings
 * Verdict   : Accepted (31 ms, 400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-19 (Practice)
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

int n, m;

int dis(int x, int y){
    int xc[] = {0, 0, n-1, n-1};
    int yc[] = {0, m-1, 0, m-1};
    int mx = -1;
    rep(i, 0, 4){
        int m = abs(x-xc[i])+abs(y-yc[i]);
        mx = max(m, mx);
    }
    return mx;
}

int main()
{
    fios
    TestCases{
        cin >> n >> m;
        vi ans(n*m);
        int p = 0;
        rep(i, 0, n){
            rep(j, 0, m){
                ans[p] = dis(i, j);
                p++;
            }
        }
        sort(all(ans));
        rep(i, 0, p){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
