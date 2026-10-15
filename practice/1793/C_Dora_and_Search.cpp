/*
 * Problem   : 1793C - Dora and Search
 * Link      : https://codeforces.com/contest/1793/problem/C
 * Submission: https://codeforces.com/contest/1793/submission/194543365
 * Rating    : 1200   Tags: constructive algorithms, data structures, two pointers
 * Verdict   : Accepted (46 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-02-22 (Practice)
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
    int mx = n, mn = 1;
    bool f = false;
    int i = 0, j = n-1;
    while(i<j){
        // cout << "*****" << endl;
        // cout << a[i] << " " << a[j] << endl;
        // cout << mx << " " << mn << endl;
        // cout << "*****" << endl;
        if(a[i]==mx){
            i++;
            mx--;
            continue;
        }
        if(a[i]==mn){
            i++;
            mn++;
            continue;
        }
        if(a[j]==mx){
            j--;
            mx--;
            continue;
        }
        if(a[j]==mn){
            j--;
            mn++;
            continue;
        }
        cout << i+1 << " " << j+1 << endl;
        return;
    }
    cout << -1 << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
