/*
 * Problem   : 1741C - Minimize the Thickness
 * Link      : https://codeforces.com/contest/1741/problem/C
 * Submission: https://codeforces.com/contest/1741/submission/189586784
 * Rating    : 1100   Tags: brute force, greedy, math, two pointers
 * Verdict   : Accepted (15 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-18 (Practice)
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


void solve(){
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    ll sum = 0;
    rep(i, 0, n) sum+=a[i];
    ll mn = n+1;
    ll crnt = 0;
    ll cnt = 0;
    rep(j, 1, n+1){
        if(sum%j) continue;
        cnt = 0;
        crnt = 0;
        ll x = sum/j;
        ll mnn = 1;
        rep(i, 0, n){
            crnt+=a[i];
            cnt++;
            if(crnt==x){
                // cout << cnt << "*" << endl;
                mnn = max(mnn, cnt);
                crnt = 0;
                cnt = 0;
            }
            else if(crnt>x){
                break;
            }
        }
        if(crnt==0) mn = min(mnn, mn);
    }
    cout << mn << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
