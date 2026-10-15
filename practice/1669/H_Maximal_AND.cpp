/*
 * Problem   : 1669H - Maximal AND
 * Link      : https://codeforces.com/contest/1669/problem/H
 * Submission: https://codeforces.com/contest/1669/submission/162978068
 * Rating    : 1300   Tags: bitmasks, greedy, math
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-06 (Practice)
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
#define CheckBit(x, k) (((x & (1LL << k)) > 0) ? 1 : 0)
#define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)


int main()
{
    fios
    TestCases{
        int n, k;
        cin >> n >> k;
        int bits[31] = {0};
        int x;
        rep(i, 0, n){
            cin >> x;
            rep(j, 0, 31){
                bits[j] += CheckBit(x, j);
            }
        }
        int ans = 0;
        // rep(j, 0, 31){
        //     cout << bits[j] << " ";
        // }
        // cout << endl;
        pre(j, 30, 0){
            // cout << bits[j] << " ";
            int dif = n-bits[j];
            // cout <<dif << endl;
            if(dif==0){
                SetBit(ans, j);
                continue;
            }
            if(dif>k) continue;;
            k-=dif;
            SetBit(ans, j);
        }
        // cout << endl;
        cout << ans << endl;
    }
    return 0;
}
