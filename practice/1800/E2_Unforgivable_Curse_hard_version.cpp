/*
 * Problem   : 1800E2 - Unforgivable Curse (hard version)
 * Link      : https://codeforces.com/contest/1800/problem/E2
 * Submission: https://codeforces.com/contest/1800/submission/201183739
 * Rating    : 1500   Tags: brute force, constructive algorithms, dfs and similar, dsu, graphs, greedy, strings
 * Verdict   : Accepted (31 ms, 1200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-04-08 (Practice)
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
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;
    string sss, ttt;
    sss = s;
    ttt = t;
    sort(all(sss));
    sort(all(ttt));
    if(sss!=ttt){
        cout << "NO" << endl;
        return;
    }
    if(n<k){
        cout << ((s==t)? "YES" : "NO") << endl;
        return;
    }
    int l = n-k, r = k-1;
    bool f = true;
    while(l<=r){
        if(s[l]!=t[l++]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
