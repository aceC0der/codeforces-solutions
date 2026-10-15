/*
 * Problem   : 1676G - White-Black Balanced Subtrees
 * Link      : https://codeforces.com/contest/1676/problem/G
 * Submission: https://codeforces.com/contest/1676/submission/162740466
 * Rating    : 1300   Tags: dfs and similar, dp, graphs, trees
 * Verdict   : Accepted (483 ms, 18000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-04 (Practice)
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

int ans = 0;
pi dfs(vi a[], string s, int i){

    int w = (s[i-1]=='W'), b = 1-w;
    pi ret = mp(w, b);
    if(a[i].size()==0){
        return mp(w, b);
    }
    rep(j, 0, a[i].size()){
        pi l = dfs(a, s, a[i][j]);
        ret.first += l.first;
        ret.second += l.second;
    }
    if(ret.first == ret.second){
        ans++;
    }
    // cout << i << " " << ret.first << " " << ret.second << endl;
    return ret;
}

int main()
{
    fios
    TestCases{
        int n;
        cin >> n;
        vi a[n+1];
        rep(i, 2, n+1){
            int x;
            cin >> x;
            a[x].pb(i);
        }
        // cout << a[]
        // rep(i, 1, n+1){
        //     rep(j, 0, a[i].size()){
        //         cout << a[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        string s;
        cin >> s;
        auto ret = dfs(a, s, 1);
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}
