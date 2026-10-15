/*
 * Problem   : 1845C - Strong Password
 * Link      : https://codeforces.com/contest/1845/problem/C
 * Submission: https://codeforces.com/contest/1845/submission/211514719
 * Rating    : 1400   Tags: binary search, dp, greedy, strings
 * Verdict   : Accepted (46 ms, 24500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-29 (Contest)
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

int min_pos[(int)(3*1e5+10)][10];

// bool isSubString(string& s, string& c){
//     int m = c.size();
//     int pos = 0;
//     rep(i, 0, m){
//         int d = c[i]-'0';
//         int mnp = min_pos[pos][d];
//         if(mnp==INT_MAX) return false;
//         pos = mnp+1;
//     }
//     return true;
// }
int dp[10][(int)(3*1e5+10)];
int do_dp(string& l, string& r, int i, int jj){
    int m = l.size();
    if(jj==INT_MAX) return 2;
    if(i>=m){
        return 1;
    }
    int mx = r[i]-'0';
    int mn = l[i]-'0';
    if(dp[i][jj]!=0) return dp[i][jj];
    int mxx = 1;
    rep(j, mn, mx+1){
        int mnp = min_pos[jj+1][j];
        mxx = max(mxx, do_dp(l, r, i+1, mnp));
    }
    return dp[i][jj]=mxx;
}

void solve(){
    string s;
    cin >> s;
    string l, r;
    int m;
    cin >> m;
    cin >> l ;
    cin >> r;
    int n = s.size();
    pre(i, n+1, 0){
        rep(j, 0, 10){
            min_pos[i][j] = INT_MAX;
            dp[j][i] = 0;
        }
    }
    pre(i, n-1, 0){
        int d = s[i]-'0';
        min_pos[i][d] = i;
        rep(j, 0, 10){
            min_pos[i][j] = min(min_pos[i+1][j], min_pos[i][j]);
        }
    }
    rep(i, 0, 10){
        rep(j, 0, 10){
            dp[i][j] = 0;
        }
    }
    int mx = r[0]-'0';
    int mn = l[0]-'0';
    int mxx = 1;
    rep(i, mn, mx+1){
        int jj = min_pos[0][i];
        mxx = max(mxx, do_dp(l, r, 1, jj));
        if(mxx==2) break;
    }
    cout << (mxx==2 ? "YES" : "NO" ) << endl;

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
