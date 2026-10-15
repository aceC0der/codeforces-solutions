/*
 * Problem   : 1867B - XOR Palindromes
 * Link      : https://codeforces.com/contest/1867/problem/B
 * Submission: https://codeforces.com/contest/1867/submission/223028534
 * Rating    : 1100   Tags: bitmasks, constructive algorithms, strings
 * Verdict   : Accepted (31 ms, 300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-12 (Practice)
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = n-1, cnt = 0;
    while(l<r){
        if(s[l]!=s[r]) cnt++;
        l++, r--;
    }
    string ans = "";
    rep(i, 0, cnt){
        // cout << 0 << " ";
        ans+='0';
    }
    int h = (n+1)/2;
    if(n&1){
        rep(i, cnt, h){
            ans += '1';
        }
        cout << ans;
    }
    else{
        bool f = true;
        rep(i, cnt, h){
            if(f) ans+='1';
            else ans+='0';
            f = !f;
        }
        cout << ans << f;
 
    }
    reverse(all(ans));
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
