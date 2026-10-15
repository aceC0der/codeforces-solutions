/*
 * Problem   : 1672D - Cyclic Rotation
 * Link      : https://codeforces.com/contest/1672/problem/D
 * Submission: https://codeforces.com/contest/1672/submission/222130441
 * Rating    : 1700   Tags: constructive algorithms, greedy, implementation, two pointers
 * Verdict   : Accepted (93 ms, 4700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-07 (Practice)
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
    int n;
    cin >> n;
    vi a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    vpi unq;
    vector<bool> flag(n+1);
    int sz = 0;
    rep(i, 0, n){
        int j = i;
        int cnt = 0;
        while(i<n && b[i]==b[j]){
            cnt++;
            i++;
        }
        i--;
        unq.pb({b[j], cnt});
    }
    vi freq(n+1);
    // rep(i, 0, unq.size()){
    //     cout << unq[i].ff << " " << unq[i].ss << endl;
    // }
    // cout << endl;
    int j = 0;
    rep(i, 0, n){
        // int k = i;
        // int cnt = 0;
        // while(i<n && a[i]==a[k]){
            freq[a[i]]++;
        //     i++;
        // }
        // i--;
        if(j<unq.size() && a[i]==unq[j].ff){
            if(freq[a[i]]<unq[j].ss){
                continue;
            }
            freq[a[i]]-=unq[j].ss;
            j++;
        }
    }
    if(j==unq.size()) cout << "YES" << endl;
    else cout << "NO" << endl;
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
