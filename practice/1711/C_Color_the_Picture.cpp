/*
 * Problem   : 1711C - Color the Picture
 * Link      : https://codeforces.com/contest/1711/problem/C
 * Submission: https://codeforces.com/contest/1711/submission/166495006
 * Rating    : 1500   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (46 ms, 400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-01 (Practice)
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
        int n, m, k;
        cin >> n >> m >> k;
        vi a(k);
        rep(i, 0, k) cin >> a[i];
        ll cnt = 0;
        bool f = false;
        rep(i, 0, k){
            int x = a[i]/n;
            if(x>2) f = true;
            if(x>1) cnt+=x;
        }
        if(cnt>=m && (f || m%2==0)){
            cout << "Yes" << endl;
            continue;
        }
        cnt = 0, f = false;
        rep(i, 0, k){
            int x = a[i]/m;
            if(x>2) f = true;
            if(x>=2) cnt+=x;
        }
        if(cnt>=n && (f||n%2==0)){
            cout << "Yes" << endl;
            continue;
        }
        cout << "No" << endl;
    }
    return 0;
}
