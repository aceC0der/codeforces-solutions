/*
 * Problem   : 1863D - Two-Colored Dominoes
 * Link      : https://codeforces.com/contest/1863/problem/D
 * Submission: https://codeforces.com/contest/1863/submission/221157259
 * Rating    : 1400   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (31 ms, 3000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-08-30 (Contest)
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

/*
    Analysis:
    -> Read the problem statement very carefully
    -> Find out what is given and what is wanted
    -> Try die hard to solve
    -> Prove your idea: why should it work?
    -> Eliminate your wrong ideas as soon as possible
    -> Have you missed any corner case?
    -> never miss post solving Analysis
 
    Remember:  You know what your capability is. Just believe in yourself and work very hard. GOD will never let you down.
*/

void solve(){
    int n, m;
    cin >> n >> m;
    string s[n];
    rep(i, 0, n) cin >> s[i];
    int row[n][m];
    string ans[n];
    int col[n][m];
    rep(i, 0, n){
        ans[i] = "";
        rep(j, 0, m){
            ans[i] += '.';
            row[i][j] = 0;
            col[i][j] = 0;
        }
        // cout << ans[i] << endl;
    }
    rep(i, 0, n){
        int cnt = 0;
        rep(j, 0, m){
            if(s[i][j]=='U' || s[i][j]=='D'){
                // row[i][j] = 1;
                cnt++;
            }
        }
        if(cnt&1){
            cout << -1 << endl;
            return;
        }
    }
    rep(j, 0, m){
        int cnt = 0;
        rep(i, 0, n){
            if(s[i][j]=='L' || s[i][j]=='R'){
                // col[i][j] = 1;
                cnt++;
            }
        }
        if(cnt&1){
            cout << -1 << endl;
            return;
        }
    }
    rep(i, 0, n){
        int wt, blk;
        wt = blk = 0;
        rep(j, 0, m){
            // if(ans[i][j]=='W'){
            //     wt++; continue;
            // }
            // else if(ans[i][j]=='B'){ blk++; continue; }
            if(s[i][j]=='U'){
                // row[i][j] = 1;
                if(wt<blk) {
                    ans[i][j] = 'W';
                    wt++;
                    ans[i+1][j] = 'B';
                }
                else{
                    ans[i][j] = 'B';
                    blk++;
                    ans[i+1][j] = 'W';    
                }
            }
        }
    }
    rep(j, 0, m){
        int wt, blk;
        wt = blk = 0;
        rep(i, 0, n){
            // if(ans[i][j]=='W'){
            //     wt++;
            // }
            // else if(ans[i][j]=='B'){ blk++;}
            if(s[i][j]=='L'){
                // row[i][j] = 1;
                if(wt<blk) {
                    ans[i][j] = 'W';
                    wt++;
                    ans[i][j+1] = 'B';
                }
                else{
                    ans[i][j] = 'B';
                    blk++;
                    ans[i][j+1] = 'W';    
                }
            }
        }
    }
    rep(i, 0, n){
        cout << ans[i] << endl;
    }
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
