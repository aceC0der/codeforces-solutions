/*
 * Problem   : 1628A - Meximum Array
 * Link      : https://codeforces.com/contest/1628/problem/A
 * Submission: https://codeforces.com/contest/1628/submission/163020792
 * Rating    : 1400   Tags: binary search, constructive algorithms, greedy, implementation, math, two pointers
 * Verdict   : Accepted (62 ms, 2700 KB)
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
        vi a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        vi suf(n, 0);
        vector<bool> bs(n+1, false);

        int mex = 0;
        pre(i, n-1, 0){
            bs[a[i]] = true;
            while(bs[mex]){
                mex++;
            }
            suf[i] = mex;
        }
        // rep(i, 0, n){
        //     cout << suf[i] << " ";
        // }
        // cout << endl;
        vector<bool> f(n+1, false);
        mex = 0;
        vi b;
        int p = 0;
        rep(i, 0, n){
            f[a[i]] = true;
            while(f[mex]){
                mex++;
            }
            if(mex==suf[p]){
                p = i+1;
                b.pb(mex);
                rep(j, 0, mex+1){
                    f[j] = false;
                }
                mex = 0;
            }
        }
        cout << b.size() << endl;
        rep(i, 0, b.size()){
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
