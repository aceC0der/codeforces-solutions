/*
 * Problem   : 1467B - Hills And Valleys
 * Link      : https://codeforces.com/contest/1467/problem/B
 * Submission: https://codeforces.com/contest/1467/submission/222053385
 * Rating    : 1700   Tags: brute force, implementation
 * Verdict   : Accepted (93 ms, 1200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-06 (Practice)
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

bool isHill_Valley(int i, vi& a){
    int n = a.size();
    if(i==n-1) return false;
    if(!i) return false;
    if((a[i]<a[i+1] && a[i]<a[i-1]) || (a[i]>a[i+1] && a[i]>a[i-1])) return true;
    return false;
}

void solve(){
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    int cnt = 0;
    int mx = 0;
    vector<bool> isValid(n);
    rep(i, 1, n-1){
        if(a[i]<a[i+1] && a[i]<a[i-1]){
            isValid[i] = true;
            cnt++;
        }
        if(a[i]>a[i+1] && a[i]>a[i-1]){
            isValid[i] = true;
            cnt++;
        }
    }
    int ans = cnt;
    rep(i, 1, n-1){
        int tmp = a[i];
        a[i] = a[i-1];
        ans = min(ans, cnt-isValid[i]-isValid[i-1]-isValid[i+1]+isHill_Valley(i, a)+isHill_Valley(i-1, a)+isHill_Valley(i+1, a));
        a[i] = a[i+1];
        ans = min(ans, cnt-isValid[i]-isValid[i-1]-isValid[i+1]+isHill_Valley(i, a)+isHill_Valley(i-1, a)+isHill_Valley(i+1, a));
        a[i] = tmp;
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
