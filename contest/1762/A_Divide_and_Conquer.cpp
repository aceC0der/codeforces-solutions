/*
 * Problem   : 1762A - Divide and Conquer
 * Link      : https://codeforces.com/contest/1762/problem/A
 * Submission: https://codeforces.com/contest/1762/submission/185305885
 * Rating    : 800   Tags: greedy, math, number theory
 * Verdict   : Accepted (31 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-15 (Contest)
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
    ll sum = 0;
    rep(i, 0, n){
        cin >> a[i];
        sum+=a[i];
    }
    // cout << sum << endl;
    if(sum%2==0){
        cout << 0 << endl;
    }
    else{
        int mn = INT_MAX;
        rep(i, 0, n){
            int x = 0;
            if(a[i]&1){
                while(a[i]&1){
                    a[i]/=2;
                    x++;
                }
            }
            else{
                while(!(a[i]&1)){
                    a[i]/=2;
                    x++;
                }
            }
            mn = min(mn, x);
        }
        cout << mn << endl;
    }
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
