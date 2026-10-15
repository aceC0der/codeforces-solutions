/*
 * Problem   : 1932E - Final Countdown
 * Link      : https://codeforces.com/contest/1932/problem/E
 * Submission: https://codeforces.com/contest/1932/submission/247090795
 * Rating    : 1600   Tags: implementation, math, number theory
 * Verdict   : Accepted (46 ms, 4400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-02-18 (Contest)
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

int s2i(char ch){
    return ch-'0';
}

char i2s(int i){
    return (char)('0'+i);
}

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll sum = 0;
    rep(i, 0, n){
        sum += s2i(s[i]);
    }
    vi ans;
    ll carry = sum/10;
    ll ttl = sum;
    pre(i, n-1, 0){
        // cout << sum << " " << carry << endl;
        ans.pb(sum%10);
        ttl -= s2i(s[i]);
        sum = ttl+carry;
        if(i) carry = sum/10;
    }
    bool f = false;
    if(carry) {
        cout << carry;
        f = true;
    }
    reverse(all(ans));

    rep(i, 0, ans.size()) {
        if(ans[i]) f = true;
        if(f) cout << ans[i];
    }
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
