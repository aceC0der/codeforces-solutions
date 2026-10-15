/*
 * Problem   : 676C - Vasya and String
 * Link      : https://codeforces.com/contest/676/problem/C
 * Submission: https://codeforces.com/contest/676/submission/221773347
 * Rating    : 1500   Tags: binary search, dp, strings, two pointers
 * Verdict   : Accepted (15 ms, 300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-04 (Practice)
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
    int a =0, b= 0;
    int mx = 0;
    int l , r; l = r = 0;
    a += (s[0]=='a');
    b += (s[0]=='b');
    while(r<n){
        int mn = min(a, b);
        if(mn>k){
            if(s[l]=='a') a--;
            else b--;
            l++;
        }
        else{
            mx = max(mx, r-l+1);
            r++;
            if(r<n && s[r]=='a') a++;
            else b++;
        }
    }
    cout << mx << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fios
    // TestCases{
        solve();
    // }
    return 0;
}
