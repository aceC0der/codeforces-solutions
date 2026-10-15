/*
 * Problem   : 1804C - Pull Your Luck
 * Link      : https://codeforces.com/contest/1804/problem/C
 * Submission: https://codeforces.com/contest/1804/submission/197562150
 * Rating    : 1500   Tags: brute force, greedy, math, number theory
 * Verdict   : Accepted (30 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-03-16 (Practice)
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
    ll n, x, p;
    cin >> n >> x >> p;
    ll mn = min(2*n, p);
    ll sum = 0;
    ll val = (n-x)%n;
    // cout << val << endl;
    rep(i, 1, mn+1){
        sum += i;
        // cout << sum << " ";
        if(sum%n==val){
            cout << "Yes" << endl;
            return;
        }
    }
    // cout << endl;
    cout << "No" <<endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
