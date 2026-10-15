/*
 * Problem   : 2126A - Only One Digit
 * Link      : https://codeforces.com/contest/2126/problem/A
 * Submission: https://codeforces.com/contest/2126/submission/329354678
 * Rating    : 800   Tags: brute force, implementation, math
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2025-07-17 (Contest)
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
#define vvi vector<vector<int>>
#define vb vector<bool>
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
    string s;
    cin >> s;
    sort(all(s));
    cout << s[0] << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
