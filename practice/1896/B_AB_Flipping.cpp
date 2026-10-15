/*
 * Problem   : 1896B - AB Flipping
 * Link      : https://codeforces.com/contest/1896/problem/B
 * Submission: https://codeforces.com/contest/1896/submission/267941675
 * Rating    : 900   Tags: greedy, strings, two pointers
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-29 (Practice)
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
    string s;
    cin >> s;
    int i=0;
    while(i<n && s[i]!='A') i++;
    int ans = 0;
    int cnt = 0;
    rep(it, i, n){
        int cntA = 0, cntB = 0;
        while(it<n && s[it]=='A') it++, cntA++;
        while(it<n && s[it]=='B') it++, cntB++;
        if(!cntA || !cntB) break;
        // cout << cntA << " " << cntB << endl;
        ans += cntA + cntB-1;
        it--;
        s[it]='A';
        it--;
    }
    cout << ans << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios
    TestCases{
        solve();
    }
    return 0;
}
