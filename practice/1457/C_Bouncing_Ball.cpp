/*
 * Problem   : 1457C - Bouncing Ball
 * Link      : https://codeforces.com/contest/1457/problem/C
 * Submission: https://codeforces.com/contest/1457/submission/221847608
 * Rating    : 1400   Tags: dp, implementation
 * Verdict   : Accepted (30 ms, 300 KB)
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
    int n, p, k;
    cin >> n >> p >> k;
    string s;
    cin >>s ;
    // cout << s <<endl;
    int x, y;
    cin >> x >> y;
    swap(x, y);
    // cout << x << " " << y << "**###*" << endl;
    ll ans = 1e17;
    // ll sum = 0;
    rep(i, p-1, p+k){
        ll crnt = i;
        if(n-(i-p+1)<p) break;
        ll sum = x*(i-p+1);
        ll cnt = 0;
        ll j = 1;
        // cout << crnt << " " <<  sum << "***" << endl;
        while(crnt<n){
            // cout << s[crnt] << " ";
            if(s[crnt]=='0'){
                cnt++;
            }
            crnt += k;
            j++;
        }
        // cout << endl;
        sum += cnt*y;
        crnt = i;
        // cout << i << " :: " << sum << endl;
        ans = min(sum, ans);
        crnt = i;
        ll rcnt = 0;
        while(crnt<n){
            ans = min(ans, (crnt-p+1)*x+(cnt-rcnt)*y);
            if(s[crnt]=='0') rcnt++;
            crnt += k;
        }
    }
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
