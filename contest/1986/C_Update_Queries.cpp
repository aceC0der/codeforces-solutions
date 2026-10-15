/*
 * Problem   : 1986C - Update Queries
 * Link      : https://codeforces.com/contest/1986/problem/C
 * Submission: https://codeforces.com/contest/1986/submission/267011027
 * Rating    : 1100   Tags: data structures, greedy, sortings
 * Verdict   : Accepted (139 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-23 (Contest)
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
    string s, c;
    cin >> s;
    vi idx(m);
    rep(i, 0, m) cin >> idx[i];
    rep(i, 0, m) idx[i]--;
    cin >> c;
    // priority_queue <char, vector<char>, greater<char>> pq;
    sort(all(c));
    sort(all(idx));
    int ptr = 1;
    s[idx[0]] = c[0];
    rep(i, 1, m){
        if(idx[i]!=idx[i-1]){
            s[idx[i]] = c[ptr];
            ptr++;
        }
    }
    cout << s << endl;
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
