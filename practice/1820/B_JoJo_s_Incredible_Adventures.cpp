/*
 * Problem   : 1820B - JoJo's Incredible Adventures
 * Link      : https://codeforces.com/contest/1820/problem/B
 * Submission: https://codeforces.com/contest/1820/submission/210351578
 * Rating    : 1100   Tags: math, strings, two pointers
 * Verdict   : Accepted (15 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-20 (Practice)
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
    ll n;
    string s;
    cin >> s;
    n = s.size();
    ll cnt = 0;
    ll mx = 0;
    rep(i, 0, n){
        if(s[i]=='1'){
            cnt++;
        }
        else{
            mx = max(cnt, mx);
            cnt = 0;
        }
    }
    mx = max(mx, cnt);
    int i=0;
    cnt = 0;
    while(i<n && s[i]=='1'){
        cnt++;
        i++;
    }
    i =  n-1;
    if(cnt!=n){
        while(i>=0 && s[i]=='1'){
            cnt++;
            i--;
        }
    }
    mx = max(cnt, mx);
    if(mx==n) cout << n*n << endl;
    else if(mx==0) cout << 0 << endl;
    else{
        // cout << mx << "**" << endl;
        mx++;
        ll a = mx/2;
        ll b = mx/2 + (mx%2);
        cout << max(1LL, a * b) << endl;
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
