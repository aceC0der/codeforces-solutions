/*
 * Problem   : 1879C - Make it Alternating
 * Link      : https://codeforces.com/contest/1879/problem/C
 * Submission: https://codeforces.com/contest/1879/submission/225081456
 * Rating    : 1300   Tags: combinatorics, dp, greedy
 * Verdict   : Accepted (31 ms, 2100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-25 (Practice)
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

ll mod = 998244353;

ll N = 2e5 + 10;
vl fact(N);

void solve(){
    string s;
    cin >> s;
    ll n = s.size();
    // ll val_zr = 0, val_one = 0;
    ll mn = 0, ans = 1;
    ll x = 0;
    rep(i, 0, n){
        ll cnt = 0;
        int j = i+1;
        while(j<n && s[j]==s[i]){
            cnt++;
            j++;
        }
         
        mn += cnt;
        
        ans = ((ans%mod)*(cnt+1)%mod)%mod;
        i = j-1;
    }
    ans =( fact[mn]%mod*ans%mod)%mod;
    // ans = fact[mn]%mod;
    cout << mn << " " << ans << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fios
    fact[0] = 1;
    rep(i, 1, N){
        fact[i] = ((fact[i-1]%mod)*(i%mod))%mod;
    }
    TestCases{
        solve();
    }
    return 0;
}
