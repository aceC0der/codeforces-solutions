/*
 * Problem   : 1966B - Rectangle Filling
 * Link      : https://codeforces.com/contest/1966/problem/B
 * Submission: https://codeforces.com/contest/1966/submission/261688019
 * Rating    : 1100   Tags: constructive algorithms, implementation
 * Verdict   : Accepted (61 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-19 (Practice)
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
    int n, m;
    cin >> n >> m;
    string s[n];
    rep(i, 0, n)  cin >> s[i];
    bool f = (s[0][0]==s[n-1][m-1] || s[0][m-1]==s[n-1][0]);
    if(!f){
        char mn = s[0][0], mx = s[n-1][m-1];
        if(s[0][0]==s[0][m-1]){
            rep(i, 1, m-1){
                if(s[n-1][i]==mn) f = true;
                if(s[0][i]==mx) f = true;
            }
        }
        else{
            rep(i, 1, n-1){
                if(s[i][0]==mx) f = true;
                if(s[i][m-1]==mn) f = true;
            }
        }
    }
    cout << (f? "YES" : "NO") << endl;
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
