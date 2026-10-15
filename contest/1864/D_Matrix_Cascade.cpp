/*
 * Problem   : 1864D - Matrix Cascade
 * Link      : https://codeforces.com/contest/1864/problem/D
 * Submission: https://codeforces.com/contest/1864/submission/220594008
 * Rating    : 1700   Tags: brute force, constructive algorithms, data structures, dp, greedy, math
 * Verdict   : Accepted (312 ms, 119000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-08-26 (Contest)
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

bool isValid(int x, int y, int n){
    if(x>=0 && x<n && y>=0 && y<n) return true;
    return false;
}

class cell{
public:
    int left=0, mid=0, right=0;
    // cell(int a, int b, int c){
    //     left = a;
    //     right = c;
    //     mid = b;

    // }
    
};

void solve(){
    int n;
    cin >> n;
    string s[n];
    rep(i, 0, n) cin >> s[i];
    cell cnt[n+1][n+1];
    // rep(i, 0, n+1){
    //     rep(j, 0, n+1){
    //         cnt[i][j] = cell(0, 0, 0);
    //     }
    // }
    int ans = 0;
    rep(i, 0, n){
        rep(j, 0, n){
            cell x = cnt[i][j];
            int sum = x.left + x.right + x.mid;
            // cout << sum << " ";
            // if(s[i][j]=='1'){
            //     cout << sum << endl;
            // }
            if(sum&1){
                if(s[i][j]=='0') s[i][j]='1';
                else s[i][j] = '0';
            }
            if(isValid(i+1, j-1, n)) {
                cnt[i+1][j-1].left = x.left;
            }
            if(isValid(i+1, j, n)){
                cnt[i+1][j].mid = x.mid+x.left+x.right;
            }
            if(isValid(i+1, j+1, n)){
                cnt[i+1][j+1].right = x.right;
            }
            if(s[i][j]=='1'){
                ans++;
                s[i][j]='0';
                if(isValid(i+1, j-1, n)) {
                    cnt[i+1][j-1].left++;
                }
                if(isValid(i+1, j, n)){
                    cnt[i+1][j].mid++;
                }
                if(isValid(i+1, j+1, n)){
                    cnt[i+1][j+1].right++;
                }
            }
        }
        // cout << endl;
        // cout << ans << endl;
        // rep(p, 0, n){
        //     cout << s[p] << endl;
        // }
    }
    cout << ans << endl;
    


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
