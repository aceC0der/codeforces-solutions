/*
 * Problem   : 1737C - Ela and Crickets
 * Link      : https://codeforces.com/contest/1737/problem/C
 * Submission: https://codeforces.com/contest/1737/submission/202786849
 * Rating    : 1500   Tags: constructive algorithms, games, implementation, math
 * Verdict   : Accepted (31 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-04-20 (Practice)
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
    vpi pc(3);
    map<int, int> r, c;
    bool isBorder = true;
    rep(i, 0, 3) {
        cin >> pc[i].ff >> pc[i].ss;
        isBorder &= ((pc[i].ff==1 || pc[i].ff==n) || (pc[i].ss==1 || pc[i].ss == n));
        r[pc[i].ff]++;
        c[pc[i].ss]++;
    }
    int blankX, blankY;
    pi border;
    for(auto it : r){
        if(it.ss==1) blankX = it.ff;
    }
    for(auto it : c){
        if(it.ss==1) blankY = it.ff;
    }
    int x, y;
    cin >> x >> y;
    if(isBorder){
        vpi br;
        br.pb({1, 1});
        br.pb({n, n});
        br.pb({1, n});
        br.pb({n, 1});
        bool ff = false;
        rep(i, 0, 3){
            rep(j, 0, 4) if(pc[i]==br[j]){
                border = pc[i];
                ff = true;
                break;
            }
            if(ff) break;
        }
        if(x==border.ff || y==border.ss) cout << "YES" << endl;
        else cout << "NO" << endl;
        return ;
    }
    // cout << blankX << " " << blankY << endl;
    // cout << x << " " << y << endl;
    if(((blankX+blankY)%2 == (x+y)%2) && ((x%2)==(blankX%2) || (y%2==(blankY%2)))){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
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
