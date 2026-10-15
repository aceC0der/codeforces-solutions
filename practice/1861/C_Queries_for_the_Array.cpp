/*
 * Problem   : 1861C - Queries for the Array
 * Link      : https://codeforces.com/contest/1861/problem/C
 * Submission: https://codeforces.com/contest/1861/submission/221642542
 * Rating    : 1600   Tags: data structures, dfs and similar, implementation, strings, trees
 * Verdict   : Accepted (30 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-03 (Practice)
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
    string s;
    cin >> s;
    int n = s.size();
    int sz=0;
    int minSort = 0, maxUnsort = 1e7;
    // bool flag = true;
    rep(i, 0, n){
        if(s[i]=='+'){
            sz++;
            if(sz==1){
                minSort = 1;
            }
        }
        else if(s[i]=='-'){
            sz--;
            minSort = min(sz, minSort);
            if(sz<maxUnsort){
                maxUnsort = 1e7;
            }
        }
        else if(s[i]=='1'){
            if(sz>=maxUnsort){
                cout << "NO" << endl;
                return;
            }
            minSort = sz;
        }
        else{
            if(sz<=minSort){
                cout << "NO" << endl;
                return;
            }
            maxUnsort = min(maxUnsort, sz);
        }
    }
    cout << "YES" << endl;
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
