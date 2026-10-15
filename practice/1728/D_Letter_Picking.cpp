/*
 * Problem   : 1728D - Letter Picking
 * Link      : https://codeforces.com/contest/1728/problem/D
 * Submission: https://codeforces.com/contest/1728/submission/171450478
 * Rating    : 1800   Tags: constructive algorithms, dp, games, two pointers
 * Verdict   : Accepted (30 ms, 15800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-09 (Practice)
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
int dp[2002][2002];

int ok(string& s, int i, int j){

    if(j-i==1){
        if(s[i]==s[j]) return 0;
        return 1;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    int a, b, c;
    a = ok(s, i, j-2);
    b = ok(s, i+1, j-1);
    c = ok(s, i+2, j);
    int ra=a, rb=b, rc=c, rd=b;
    if(a==0){
        if(s[j]>s[j-1]) ra=-1;
        else if(s[j]<s[j-1]) ra = 1;
        else ra = 0;
    }
    if(b==0){
        if(s[j]>s[i]) rb = -1;
        else if(s[j]<s[i]) rb = 1;
        else rb = 0;

        if(rb==-1) rd = 1;
        else if(rb==1) rd = -1;
        else rd = 0;
    }
    if(c==0){
        if(s[i]>s[i+1]) rc = -1;
        else if(s[i]<s[i+1]) rc = 1;
        else rc = 0;
    }
    // cout << i << " " << j << endl;
    // cout << ra << " " << 
    dp[i][j] = max(min(ra, rb), min(rc,rd));
    // cout << i << " " << j << " " << dp[i][j] << endl;
    return dp[i][j];
}

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    rep(i, 0, n){
        rep(j, 0, n){
            dp[i][j] = -1;
        }
    }
    int o = ok(s, 0, n-1);
    if(o==1) cout << "Alice" << endl;
    else if(o==0) cout << "Draw" << endl;
    else cout << "Bob" << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
