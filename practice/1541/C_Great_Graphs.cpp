/*
 * Problem   : 1541C - Great Graphs
 * Link      : https://codeforces.com/contest/1541/problem/C
 * Submission: https://codeforces.com/contest/1541/submission/222723814
 * Rating    : 1400   Tags: constructive algorithms, graphs, greedy, shortest paths, sortings
 * Verdict   : Accepted (62 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-10 (Practice)
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
    ll n,cnt=0,sum=0,ans=0;
    cin>>n;
    vl a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(all(a));
    // rep(i, 0, n){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    for(ll i=1;i<n;i++){
        ll dif=a[i]-a[i-1];
        sum=sum-dif-(dif*cnt);
        ans+=sum;
        // cout << sum << " #### " << ans << " ** " << dif << endl;
        cnt++;
    }
    cout<<ans+a[n-1]<<endl;
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
