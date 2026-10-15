/*
 * Problem   : 1633C - Kill the Monster
 * Link      : https://codeforces.com/contest/1633/problem/C
 * Submission: https://codeforces.com/contest/1633/submission/149495457
 * Rating    : 1100   Tags: brute force, math
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-03-13 (Practice)
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
#define TestCases int tt,qq; cin>>tt; for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)


int main()
{
    fios
    TestCases{
        ll hc, dc, hm, dm, k, w, a;
        cin >> hc >> dc;
        cin >> hm >> dm;
        cin >> k >> w >> a;
        ll cntc = hm/dc;
        if(hm%dc) cntc++;
        ll cntm = hc/dm;
        if(hc%dm) cntm++;
        ll i=0;
        dc += k*w;
        while(cntm<cntc && i<=k){
            // cout << "*" << endl;
            cntc = hm/dc;
            if(hm%dc) cntc++;
            cntm = hc/dm;
            if(hc%dm) cntm++;
            hc+=a;
            dc-=w;
            i++;
        }
        if(cntm<cntc)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
