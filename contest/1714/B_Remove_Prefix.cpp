/*
 * Problem   : 1714B - Remove Prefix
 * Link      : https://codeforces.com/contest/1714/problem/B
 * Submission: https://codeforces.com/contest/1714/submission/166536337
 * Rating    : 800   Tags: data structures, greedy, implementation
 * Verdict   : Accepted (62 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-01 (Contest)
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
    vector<bool> flag(n+5, false);
    vi a(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    int cnt = 0;
    pre(i, n-1, 0){
        if(flag[a[i]]) break;
        flag[a[i]] = true;
        cnt++;
    }
    cout << n-cnt << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
