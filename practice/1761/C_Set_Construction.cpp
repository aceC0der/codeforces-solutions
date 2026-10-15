/*
 * Problem   : 1761C - Set Construction
 * Link      : https://codeforces.com/contest/1761/problem/C
 * Submission: https://codeforces.com/contest/1761/submission/181818274
 * Rating    : 1400   Tags: constructive algorithms, dfs and similar, graphs, greedy
 * Verdict   : Accepted (46 ms, 300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-11-21 (Practice)
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
    vector<string> s(n);
    rep(i, 0, n){
        cin >> s[i];
    }
    vi a(n);
    vector<set<int> > ans(n);
    rep(i, 0, n){
        ans[i].insert(i+1);
    }
    rep(i, 0, n){
        rep(j, 0, n){
            if(s[i][j]=='1'){
                for(auto it: ans[i]){
                    ans[j].insert(it);
                }
            }
        }
    }
    // rep(i, 0, n) cout << ans[i].size() << " "; cout << endl;
    rep(i, 0, n){
        cout << ans[i].size() << " ";
        for(auto it: ans[i]){
            cout << it << " ";
        }
        cout << endl;
    }
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
