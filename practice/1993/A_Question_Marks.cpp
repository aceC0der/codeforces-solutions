/*
 * Problem   : 1993A - Question Marks
 * Link      : https://codeforces.com/contest/1993/problem/A
 * Submission: https://codeforces.com/contest/1993/submission/275282738
 * Rating    : 800   Tags: greedy, implementation
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-08-08 (Practice)
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
    vi ans(4, n);
    int cnt = 0;
    rep(i, 0, 4*n){
        if(s[i]=='?') continue;
        int c = s[i]-'A';
        // cout << s[i] << " " << ans[c] << endl;
        if(ans[c]){
            // cout << s[i] << " ";
            ans[c]--;
            cnt++;
        }
    }
    // cout << endl;
    cout << cnt << endl;

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
