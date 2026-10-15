/*
 * Problem   : 1721A - Image
 * Link      : https://codeforces.com/contest/1721/problem/A
 * Submission: https://codeforces.com/contest/1721/submission/169969818
 * Rating    : 800   Tags: greedy, implementation
 * Verdict   : Accepted (0 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-28 (Practice)
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
    char a, b, c, d;
    cin >> a >> b >> c >> d;
    vi s(26, 0);
    s[a-'a']++;
    s[b-'a']++;
    s[c-'a']++;
    s[d-'a']++;
    int mx = 0, tw=0;
    rep(i, 0, 26) {
        mx = max(mx, s[i]);
        if(s[i]==2) tw++;
    }
    if(tw==2) cout << 1 << endl;
    else cout << 4-mx << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
