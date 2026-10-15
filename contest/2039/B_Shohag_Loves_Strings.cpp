/*
 * Problem   : 2039B - Shohag Loves Strings
 * Link      : https://codeforces.com/contest/2039/problem/B
 * Submission: https://codeforces.com/contest/2039/submission/292914778
 * Rating    : 1000   Tags: constructive algorithms, greedy, implementation, strings
 * Verdict   : Accepted (124 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-11-23 (Contest)
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
    int n = s.size();
    rep(i, 1, n){
        if(s[i-1]==s[i]){
            cout << s[i] << s[i] << endl;
            return;
        }
    }
    rep(i, 2, n){
        set<char> st;
        st.insert(s[i-2]);
        st.insert(s[i-1]);
        st.insert(s[i]);
        if(st.size()==3){
            cout << s[i-2]<< s[i-1]<<s[i] << endl;
            return;
        }
    }
    cout << -1 << endl;
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
