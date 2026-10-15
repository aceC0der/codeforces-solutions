/*
 * Problem   : 1807C - Find and Replace
 * Link      : https://codeforces.com/contest/1807/problem/C
 * Submission: https://codeforces.com/contest/1807/submission/198146645
 * Rating    : 800   Tags: greedy, implementation, strings
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-03-19 (Contest)
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
    bool f = true;
    vector<bool> flag(n);
    vector<int> par(27, -1);
    rep(i, 0, n){
        if(par[s[i]-'a']==-1){
            par[s[i]-'a']=i%2;
        }
        f &= (i%2==par[s[i]-'a']);
        if(!f) break;
    }
    cout << (f ? "YES" : "NO" ) << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
