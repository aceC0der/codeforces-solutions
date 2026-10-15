/*
 * Problem   : 1805B - The String Has a Target
 * Link      : https://codeforces.com/contest/1805/problem/B
 * Submission: https://codeforces.com/contest/1805/submission/209296270
 * Rating    : 800   Tags: greedy, strings
 * Verdict   : Accepted (15 ms, 300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-11 (Practice)
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
    string s; cin >> s;
    char mn = 'z';
    pre(i, n-1, 0) mn = min(mn, s[i]);
    // cout << mn << endl;
    int pos = -1;
    pre(i, n-1, 0){
        if(s[i]==mn){
            // cout << i+1 << endl;
            pos = i;
            break;
        }
    }
    cout << s[pos];
    rep(i, 0, n){
        if(i==pos) continue;
        cout << s[i];
    }
    cout << endl;
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
