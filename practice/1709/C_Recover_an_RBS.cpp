/*
 * Problem   : 1709C - Recover an RBS
 * Link      : https://codeforces.com/contest/1709/problem/C
 * Submission: https://codeforces.com/contest/1709/submission/165321715
 * Rating    : 1800   Tags: constructive algorithms, greedy, implementation, strings
 * Verdict   : Accepted (15 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-22 (Practice)
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
    fios
    TestCases{
        string s;
        cin >> s;
        ll n = s.size();
        int op = n/2, cl = op;
        rep(i, 0, n){
            if(s[i]=='(') op--;
            else if(s[i]==')') cl--;
        }
        
        if(!op || !cl){
            cout << "YES" << endl;
            continue;
        }
        rep(i, 0, n){
            if(s[i]=='?'){
                if(op>1) {
                    s[i]='(';op--;
                }
            }
        }
        pre(i, n-1, 0){
            if(s[i]=='?' && cl>1) {
                s[i]=')';
                cl--;
            }
        }
        // cout << s << endl;
        rep(i, 0, n) if(s[i]=='?' && cl>0) {s[i]=')';break;}
        pre(i, n-1, 0) if(s[i]=='?' && op>0) {s[i] = '(';break;}
        int cnt = 0;
        bool f = false;
        // cout << s << endl;
        rep(i, 0, n){
            cnt+=(s[i]=='(');
            cnt-=(s[i]==')');
            if(cnt<0) {f = true; break;}
        }
        cout << (f? "YES" : "NO" ) << endl;
    }
    return 0;
}
