/*
 * Problem   : 1668A - Direction Change
 * Link      : https://codeforces.com/contest/1668/problem/A
 * Submission: https://codeforces.com/contest/1668/submission/154092600
 * Rating    : 800   Tags: implementation, math
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-19 (Contest)
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
        cin >> n >> m;
        if(n==1 && m==1){
            cout << 0 << endl;
            continue;
        }
        if(n==1 && m==2){
            cout << 1 << endl;
            continue;
        }
        if(n==2 && m==1){
            cout << 1 << endl;
            continue;
        }
        if(n==1 || m==1){
            cout << -1 << endl;
            continue;
        }
        int dif = (max(n, m)-min(n, m));

        int ans = min(n, m)*2-2;
        if(dif>0){
         dif--;
         ans++;

        }
        if(dif>0){
            ans += (dif/2)*4;
            if(dif&1){
                ans += 3;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
