/*
 * Problem   : 1675E - Replace With the Previous, Minimize
 * Link      : https://codeforces.com/contest/1675/problem/E
 * Submission: https://codeforces.com/contest/1675/submission/163092523
 * Rating    : 1500   Tags: dsu, greedy, strings
 * Verdict   : Accepted (93 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-07 (Practice)
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


int main()
{
    // fios
    TestCases{
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<char> dp(36, 0);
        rep(i, 0, 26){
            dp[i] = 'a'+i;
            // cout << dp[i] << " ";
        }
        // cout << endl;
        // cout << s << endl;
        rep(i, 0, n){
            if(k<=0) break;
            s[i] = dp[(s[i]-'a')];
            if(s[i]=='a') continue;

            
            int moves = (s[i]-'a');
            int prev;
            pre(i, moves, 0){
                if(dp[i]=='a'){
                    prev = i;
                    break;
                }
            }
            moves = s[i]-'a'-prev;
            if(k>=moves){
                rep(i, prev+1, prev+moves+1){
                    dp[i] = 'a';
                }
                s[i] = 'a';
                k-=moves;
            }
            else{
                int m =( s[i]-'a')-k;
                moves = (s[i]-'a');
                rep(i, m, moves+1){
                    dp[i] = dp[m];
                }
                break;
            }
        }
        rep(i, 0, n){
            s[i] = dp[(s[i]-'a')];
        }
        cout << s << endl;
    }
    return 0;
}
