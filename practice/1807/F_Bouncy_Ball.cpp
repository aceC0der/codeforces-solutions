/*
 * Problem   : 1807F - Bouncy Ball
 * Link      : https://codeforces.com/contest/1807/problem/F
 * Submission: https://codeforces.com/contest/1807/submission/198320566
 * Rating    : 1700   Tags: brute force, dfs and similar, implementation
 * Verdict   : Accepted (46 ms, 6500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-03-20 (Practice)
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

int n, m, x, y, a, b;
int cnt = 0;
pair<pi, string> next_pos(int cx, int cy, string dr){
    if(dr[0]=='D') cx++;
    else cx--;
    if(dr[1]=='L') cy--;
    else cy++;
    if(cx<0 && cy<0){
        cx = cy = 0;
        dr = "DR";
        cnt++;
    }
    else if(cx<0 && cy>=m){
        cx = 0;
        cy = m-1;
        dr = "DL";
        cnt++;
    }
    else if(cx>=n && cy>=m){
        cx = n-1;
        cy = m-1;
        dr = "UL";
        cnt++;
    }
    else if(cx>=n && cy<0){
        cx = n-1;
        cy = 0;
        dr = "UR";
        cnt++;
    }
    else if(cx<0){
        cx = 0;
        if(dr == "UR"){
            dr = "DR";
            cy--;
        }
        else if(dr=="UL"){
            dr = "DL";
            cy++;
        }
        cnt++;
    }
    else if(cx>=n){
        cx = n-1;
        if(dr == "DR"){
            dr = "UR";
            cy--;
        }
        else if(dr=="DL"){
            dr = "UL";
            cy++;
        }
        cnt++;
    }
    else if(cy<0){
        cy = 0;
        if(dr == "DL"){
            dr = "DR";
            cx--;
        }
        else if(dr == "UL"){
            dr = "UR";
            cx++;
        }
        cnt++;
    }
    else if(cy>=m){
        cy = m-1;
        if(dr == "DR"){
            dr = "DL";
            cx--;
        }
        else if(dr == "UR"){
            dr = "UL";
            cx++;
        }
        cnt++;
    }
    return {{cx, cy}, dr};
}

void solve(){
    cnt = 0;
    cin >> n >> m >> x >> y >> a >> b;
    // swap(n, m);
    string dr;
    cin >> dr;
    map<pair<pi, string>, bool> dp;
    bool f = true;
    x--;
    y--;
    a--;
    b--;
    pair<pi, string> current = {{x, y}, dr};
    while(f){
        if(current.first.first==a && current.first.second==b){
            break;
        }
        current = next_pos(current.first.first, current.first.second, current.second);
        // cout << current.first.first << " " << current.first.second << " " << current.second << endl;
        if(current.first.first==a && current.first.second==b){
            break;
        }
        if(dp[current]){
            f = false;
            break;
        }
        dp[current] = true;
    }
    // cout << endl;
    if(f){
        cout << cnt << endl;
    }
    else cout << -1 << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
