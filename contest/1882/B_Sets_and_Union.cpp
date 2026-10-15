/*
 * Problem   : 1882B - Sets and Union
 * Link      : https://codeforces.com/contest/1882/problem/B
 * Submission: https://codeforces.com/contest/1882/submission/225112697
 * Rating    : 1300   Tags: bitmasks, brute force, constructive algorithms, greedy
 * Verdict   : Accepted (15 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-25 (Contest)
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
    vector<vi> arr;
    vi freq(100);
    vi pos[100];
    set<int> st;
    rep(i, 0, n){
        int k;
        cin >> k;
        vi a(k);
        rep(j, 0, k) {cin >> a[j]; freq[a[j]]++; pos[a[j]].pb(i);st.insert(a[j]);}
        arr.pb(a);
    }
    int ans = st.size();
    int mn = INT_MAX;
    for(auto it: st){
        int cnt = 0;
        vi frq(100);
        for(auto p: pos[it]){
            for(auto v: arr[p]){
                frq[v]++;
            }
        }
        rep(i, 0, 55){
            if(freq[i]>0 && freq[i]-frq[i]==0){
                cnt++;
            }
        }
        mn = min(mn, cnt);
    }
    cout << ans-mn << endl;

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
