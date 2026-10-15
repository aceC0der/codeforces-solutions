/*
 * Problem   : 1997C - Even Positions
 * Link      : https://codeforces.com/contest/1997/problem/C
 * Submission: https://codeforces.com/contest/1997/submission/277762111
 * Rating    : 1100   Tags: constructive algorithms, data structures, greedy
 * Verdict   : Accepted (62 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-08-23 (Practice)
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
    int op=0, cl=0;
    int rop = n/2;
    rep(i, 0, n){
        if(s[i]=='('){
            rop--;
        }
    }
    rep(i, 0, n){
        if(s[i]=='(') op++;
        else if(s[i]==')') op--;
        else{
            if(op) s[i]=')', op--;
            else s[i]='(', op++;
        }
    }

    stack<int> st;
    int cost = 0;
    rep(i, 0, n){
        if(s[i]=='('){
            st.push(i);
        }
        else{
            int t = st.top();
            st.pop();
            cost+=(i-t);
        }
    }
    // cout << s << endl;
    cout << cost << endl;
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
