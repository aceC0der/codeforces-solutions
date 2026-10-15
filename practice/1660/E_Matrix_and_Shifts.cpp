/*
 * Problem   : 1660E - Matrix and Shifts
 * Link      : https://codeforces.com/contest/1660/problem/E
 * Submission: https://codeforces.com/contest/1660/submission/164135772
 * Rating    : 1600   Tags: brute force, constructive algorithms, greedy, implementation
 * Verdict   : Accepted (77 ms, 6800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-14 (Practice)
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
        }
        int mx = -1;
        rep(i, 0, n){
            int cnt = 0;
            int k = i;
            rep(j, 0, n){
                if(s[k%n][j]=='1'){
                    cnt++;
                }
                k++;
            }
            mx = max(mx, cnt);
            if(mx==n) break;
        }
        int on = 0;
        rep(i, 0, n){
            rep(j, 0, n){
                if(s[i][j]=='1') on++;
            }
        }
        cout << on-mx + n-mx << endl;
    }
    return 0;
}
