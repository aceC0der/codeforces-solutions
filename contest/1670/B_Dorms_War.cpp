/*
 * Problem   : 1670B - Dorms War
 * Link      : https://codeforces.com/contest/1670/problem/B
 * Submission: https://codeforces.com/contest/1670/submission/156107609
 * Rating    : 1100   Tags: brute force, implementation, strings
 * Verdict   : Accepted (124 ms, 400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-06 (Contest)
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
        string s; 
        cin >> s;
        int k;
        cin >> k;
        vector<bool> vp(30, false);
        char c;
        rep(i, 0, k){
            cin >> c;
            vp[(int)(c-'a')] = true;
        }
        bool f = true;
        int sc = 0;
        int ans = 0;
        rep(i, 0, n){
            if(vp[s[i]-'a']){
                ans = max(ans, i-sc);
                sc = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
