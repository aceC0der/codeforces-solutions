/*
 * Problem   : 1691C - Sum of Substrings
 * Link      : https://codeforces.com/contest/1691/problem/C
 * Submission: https://codeforces.com/contest/1691/submission/160010551
 * Rating    : 1400   Tags: brute force, constructive algorithms, greedy, math, strings
 * Verdict   : Accepted (15 ms, 300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-09 (Practice)
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
        int n,  k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = 0;
        rep(i, 0, n){
            if(s[i]=='1') ans++;
        }
        if(ans==0){
            cout << ans << endl;
            continue;
        }
        int r = 0, l = 0;
        pre(i, n-1, 0){
            if(s[i]=='1'){
                r = i;
                break;
            }
        }
        rep(i, 0, n){
            if(s[i]=='1'){
                l = i;
                break;
            }
        }
        bool f = true;
        if(n-1-r <= k){
            k -= (n-1-r);
            rep(i, r, n-1){
                swap(s[i], s[i+1]);
            }
            f = false;
            // ans-=10;
        }
        if((r!=l || f) && l<=k){
            k-=l;
            pre(i, l, 1){
                swap(s[i], s[i-1]);
            }
            // ans--;
        }
        ans = ans*11;
        if(s[0]=='1') ans--;
        if(s[n-1]=='1') ans-=10;
        cout << ans << endl;
    }
    return 0;
}
