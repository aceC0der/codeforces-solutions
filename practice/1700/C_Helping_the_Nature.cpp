/*
 * Problem   : 1700C - Helping the Nature
 * Link      : https://codeforces.com/contest/1700/problem/C
 * Submission: https://codeforces.com/contest/1700/submission/162208431
 * Rating    : 1700   Tags: constructive algorithms, data structures, greedy
 * Verdict   : Accepted (77 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-29 (Practice)
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
        vl a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        ll crnt = a[0], suf = 0, ans = 0;
        rep(i, 1, n){
            a[i] -= suf;
            int dif = a[i]-crnt;
            // cout << crnt << " ";
            // rep(j, i, n){
            //     cout << a[j] << " ";
            // }
            // cout <<endl;
            if(dif>0){
                a[i] = crnt;
                suf += dif;
            }
            else if(dif<0){
                crnt = a[i];
            }
            ans += abs(dif);
        }
        // cout << crnt << " " << a[n-1] << endl;
        ans += abs(crnt);
        cout << ans << endl;
    }
    return 0;
}
