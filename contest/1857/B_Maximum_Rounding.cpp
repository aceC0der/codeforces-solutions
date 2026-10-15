/*
 * Problem   : 1857B - Maximum Rounding
 * Link      : https://codeforces.com/contest/1857/problem/B
 * Submission: https://codeforces.com/contest/1857/submission/217648292
 * Rating    : 1100   Tags: greedy, implementation, math
 * Verdict   : Accepted (31 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-08-07 (Contest)
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
    string num, s;
    num = "0";
    cin >> s;
    num+=s;
    int n = num.size();
    int k = -1;
    pre(i, n-1, 1){
        if(num[i]>='5'){
            k = i;
            while(num[i-1]=='9' && i>=1){
                k = i-1;
                i--;
            }
            if(num[i-1]=='9') {num[i-2]='1'; break;}
            num[i-1]+=1;
        }
    }
    // cout << k << endl;
    if(k==-1){
        cout << s << endl;
        return;
    }
    // num[k-1]+=1;
    rep(i, k, n) num[i] = '0';
    if(num[0]!='0') cout << num[0];
    rep(i, 1, n) cout << num[i];
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
