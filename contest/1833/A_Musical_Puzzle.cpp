/*
 * Problem   : 1833A - Musical Puzzle
 * Link      : https://codeforces.com/contest/1833/problem/A
 * Submission: https://codeforces.com/contest/1833/submission/206463133
 * Rating    : 800   Tags: implementation, strings
 * Verdict   : Accepted (62 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-19 (Contest)
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
    set<string> sss;
    rep(i, 0, n-1){
        string sk;
        sk.push_back(s[i]);
        sk.push_back(s[i+1]);
        // cout << sk << endl;
        sss.insert(sk);
    }

    cout << sss.size() << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
