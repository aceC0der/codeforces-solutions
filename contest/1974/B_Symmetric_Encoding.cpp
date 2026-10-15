/*
 * Problem   : 1974B - Symmetric Encoding
 * Link      : https://codeforces.com/contest/1974/problem/B
 * Submission: https://codeforces.com/contest/1974/submission/261813751
 * Rating    : 800   Tags: implementation, sortings, strings
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-20 (Contest)
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
    // cout << s << endl;
    // return;
    vector<bool> vis(29, false);
    rep(i, 0, n){
        int ch = s[i]-'a';
        vis[ch] = true;
    }
    vi arr;
    rep(i, 0, 30){
        if(vis[i]){
            arr.pb(i);
        }
    }
    vi code(30, -1);
    int i = 0, j = arr.size()-1;
    while(i<=j){
        int f, s;
        f = arr[i];
        s = arr[j];
        code[f] = s;
        code[s] = f;
        i++;
        j--;
    }
    string ans = "";
    rep(i, 0, n){
        int ch = s[i]-'a';
        ans+= (char)('a'+code[ch]);
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
