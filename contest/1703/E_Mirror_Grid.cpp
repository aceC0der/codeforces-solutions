/*
 * Problem   : 1703E - Mirror Grid
 * Link      : https://codeforces.com/contest/1703/problem/E
 * Submission: https://codeforces.com/contest/1703/submission/163922668
 * Rating    : 1200   Tags: implementation
 * Verdict   : Accepted (15 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-12 (Contest)
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
        string s[n];
        rep(i, 0, n){
            cin >> s[i];
            // cout << s[i] << endl;
        }
        int k = 0;
        ll ans = 0;
        rep(i, 0, n){
            // cout << i << endl;
            int k = 0;
            rep(j, i, n-1-i){
                // cout << j << " I" << endl;
                int on, z;
                // on = z = 0;
                // cout << i<<"-" << j << " " << j <<"-" << n-1-i << " " << n-1-i<<"-" << n-1-i-k  << " " << n-1-k-i<<"-" << i << endl; 
                // cout << s[i][j] << " " << s[j][n-1-i] << " " << s[n-1-i][n-1-i-k] << " " << s[n-1-i-k][i] << endl;
                on = (s[i][j]=='1') + (s[j][n-1-i]=='1') + (s[n-1-i][n-1-i-k]=='1')  + (s[n-1-i-k][i]=='1');
                z = 4-on;
                k++;
                // cout << on << " " << z << endl;
                ans += (4-max(on, z));
            }
            // k++;
        }
        cout << ans << endl;
    }
    return 0;
}
