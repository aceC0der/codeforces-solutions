/*
 * Problem   : 1795A - Two Towers
 * Link      : https://codeforces.com/contest/1795/problem/A
 * Submission: https://codeforces.com/contest/1795/submission/194331915
 * Rating    : 800   Tags: brute force, implementation, strings
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-02-20 (Practice)
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
    int n1, n2;
    cin >> n1 >> n2;
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0;
    rep(i, 1, n1) cnt+=(s1[i]==s1[i-1]);
    rep(i, 1, n2) cnt+=(s2[i]==s2[i-1]);
    if(cnt==0) cout << "YES" << endl;
    else if(s1[n1-1]==s2[n2-1] || cnt>1) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
