/*
 * Problem   : 1708B - Difference of GCDs
 * Link      : https://codeforces.com/contest/1708/problem/B
 * Submission: https://codeforces.com/contest/1708/submission/164547500
 * Rating    : 1100   Tags: constructive algorithms, math
 * Verdict   : Accepted (46 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-17 (Practice)
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
        ll n, l, r;
        cin >> n >> l >> r;
        vl a(n);
        bool f = true;
        map<ll, bool> m;
        vector<pi> v;
        rep(i, 0, n){
            ll g = i+1;
            ll dl = l/g;
            ll curr = dl*g;
            f = false;
            while(curr<l){
                curr+=g;
            }
            // cout << curr << endl;
            if(curr>=l && curr<=r && curr%g==0){
                f = true;
                a[i] = curr;
                // curr += g;
            }
            if(!f) break;
        }
        if(f) {
            cout << "YES" << endl;
            rep(i, 0, n){
                cout << a[i] << " " ;
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
