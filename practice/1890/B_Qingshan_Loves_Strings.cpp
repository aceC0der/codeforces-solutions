/*
 * Problem   : 1890B - Qingshan Loves Strings
 * Link      : https://codeforces.com/contest/1890/problem/B
 * Submission: https://codeforces.com/contest/1890/submission/283814985
 * Rating    : 800   Tags: constructive algorithms, implementation
 * Verdict   : Accepted (77 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-01 (Practice)
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

bool isGood(string& s){
    int n = s.size();
    rep(i, 1, n){
        if(s[i]==s[i-1]) return false;
    }
    return true;
}

void solve(){
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    rep(i, 1, n){
        cnt += (s[i]==s[i-1]);
    }
    if(!cnt) {
        cout << "YES" << endl;
        return;
    }
    if(!isGood(t)){
        cout << "NO" << endl;
        return;
    }
    rep(i, 1, n){
        if(s[i]==s[i-1]){
            bool f = (s[i-1]!=t[0] && s[i]!=t[m-1]);
            if(!f){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;


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
