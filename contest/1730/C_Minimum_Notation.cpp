/*
 * Problem   : 1730C - Minimum Notation
 * Link      : https://codeforces.com/contest/1730/problem/C
 * Submission: https://codeforces.com/contest/1730/submission/173470188
 * Rating    : 1200   Tags: data structures, greedy, math, sortings
 * Verdict   : Accepted (31 ms, 2100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-25 (Contest)
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
    string s;
    cin >> s;
    int n = s.size();
    stack<int> st;
    vi a(n);
    int j = 0;
    rep(i, 0, n){
        int x = s[i]-'0';
        while(!st.empty() && st.top()>x){
            a[j] = min(st.top()+1, 9);
            st.pop();
            j++;
        }
        st.push(x);
    }
    while(!st.empty()){
        a[j] = st.top();
        st.pop();
        j++;
    }
    sort(all(a));
    rep(i, 0, n){
        cout << a[i];
    }
    cout << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
