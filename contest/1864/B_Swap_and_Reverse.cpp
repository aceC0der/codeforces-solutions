/*
 * Problem   : 1864B - Swap and Reverse
 * Link      : https://codeforces.com/contest/1864/problem/B
 * Submission: https://codeforces.com/contest/1864/submission/220540080
 * Rating    : 1100   Tags: constructive algorithms, greedy, sortings, strings
 * Verdict   : Accepted (31 ms, 400 KB)
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

void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(k&1){
        string s1="", s2="";
        rep(i, 0, n){
            if(i&1) s2+=s[i];
            else s1+=s[i];
        }
        sort(all(s1));
        sort(all(s2));
        int i1 = 0, i2 = 0;
        rep(i, 0, n){
            if(i&1){
                cout << s2[i2++];
            }
            else{
                cout << s1[i1++];
            }
        }
        cout << endl;
    }
    else{
        sort(all(s));
        cout << s << endl;
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
