/*
 * Problem   : 1617C - Paprika and Permutation
 * Link      : https://codeforces.com/contest/1617/problem/C
 * Submission: https://codeforces.com/contest/1617/submission/165003890
 * Rating    : 1300   Tags: binary search, greedy, math, sortings
 * Verdict   : Accepted (77 ms, 400 KB)
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
        vi a(n+1);
        rep(i, 1, n+1) {cin >> a[i];}
        sort(all(a));
        int cnt = 0;
        vector<bool> vis(n+1, false);
        bool f = true;
        int sm = 1;

        rep(i, 1, n+1){
            if(a[i]<=n && !vis[a[i]]){
                vis[a[i]]=true;
            }
            else {
                while(sm<=n && vis[sm] ){
                    sm++;
                }
                int x = a[i]-sm;
                // cout << a[i] << " " << sm << endl;
                if(a[i]%x==sm) cnt++;
                else f=false;
                vis[sm] = true;
            }
            if(!f) break;
        }
        if(!f) cout << -1 <<endl;
        else cout << cnt << endl;
    }
    return 0;
}
