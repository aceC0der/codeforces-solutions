/*
 * Problem   : 1858D - Trees and Segments
 * Link      : https://codeforces.com/contest/1858/problem/D
 * Submission: https://codeforces.com/contest/1858/submission/261421033
 * Rating    : 2200   Tags: brute force, data structures, dp, greedy, two pointers
 * Verdict   : Accepted (203 ms, 66900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-18 (Practice)
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
    string s;
    cin >> s;
    int pref[n+1][k+1], suf[n+1][k+1];

    // prefix calculations
    // base case
    pref[0][0] = (s[0]=='0');
    rep(i, 1, k+1) pref[0][i] = 1;
    // dp table
    rep(i, 1, n){
        rep(j, 0, k+1){
            if(s[i]=='0'){
                pref[i][j] = pref[i-1][j]+1;
            }
            else if(s[i]=='1' && j>0) pref[i][j] = pref[i-1][j-1]+1;
            else pref[i][j] = 0;
        }
    }
    // update 
    rep(i, 1, n){
        rep(j, 0, k+1){
            if(j==0){
                pref[i][j] = max(pref[i][j], pref[i-1][j]);
                continue;
            }
            pref[i][j] = max({pref[i][j], pref[i-1][j], pref[i][j-1]});
        }
    }

    // suffix calculations
    // base case
    suf[n-1][0] = (s[n-1]=='0');
    rep(i, 1, k+1) suf[n-1][i] = 1;
    // dp table
    pre(i, n-2, 0){
        rep(j, 0, k+1){
            if(s[i]=='0'){
                suf[i][j] = suf[i+1][j]+1;
            }
            else if(s[i]=='1' && j>0) suf[i][j] = suf[i+1][j-1]+1;
            else suf[i][j] = 0;
        }
    }

    // cout << "###" << endl;
    // rep(j, 0, k+1){
    //     rep(i, 0, n){
    //         cout << suf[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "########" << endl;

    // update 
    pre(i, n-2, 0){
        rep(j, 0, k+1) {
            if(j==0) {suf[i][j] = max(suf[i][j], suf[i+1][j]); continue;}
            suf[i][j] = max({suf[i][j], suf[i+1][j], suf[i][j-1]});
        }
    }
    
    // cout << "***" << endl;
    // rep(j, 0, k+1){
    //     rep(i, 0, n){
    //         cout << suf[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "*****" << endl;

    // int dp[n+1] = {0};
    vi dp(n+2, -1);
    rep(l, 0, n){
        int zr = 0;
        rep(r, l, n){
            zr += (s[r]=='0');
            int len = r-l+1;
            if(zr>k) break;
            if(l==0 && r==n-1) continue;
            if(l==0){
                dp[len] = max({dp[len], suf[r+1][k-zr]});
            }
            else if(r==n-1){
                dp[len] = max(dp[len], pref[l-1][k-zr]);
            }
            else dp[len] = max({dp[len], pref[l-1][k-zr], suf[r+1][k-zr]});
        }
    }
    // rep(i, 1, n+1) cout << dp[i] << " "; cout << "EEE" << endl;
    dp[0] = pref[n-1][k];
    int zr = 0;
    rep(i, 0, n) zr+=(s[i]=='0');
    rep(a, 1, n+1){
        ll calc = 0;
        rep(len, 0, n+1){
            if(len==n && zr<=k) calc = max(calc, 1LL*len);
            else if(dp[len]!=-1) calc = max(calc, a*dp[len]*1LL+len);
        }
        cout << calc << " ";
    }
    cout << endl;
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
