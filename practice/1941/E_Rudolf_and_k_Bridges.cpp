/*
 * Problem   : 1941E - Rudolf and k Bridges
 * Link      : https://codeforces.com/contest/1941/problem/E
 * Submission: https://codeforces.com/contest/1941/submission/250981156
 * Rating    : 1600   Tags: binary search, data structures, dp, two pointers
 * Verdict   : Accepted (296 ms, 11200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-03-12 (Practice)
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

ll bridgeCost(vl& a, int d){
    map<ll, ll> freq;
    int n = a.size();
    vl dp(n);
    dp[n-1] = 1;
    set<ll> mnEl;
    mnEl.insert(1);
    freq[1
        ]++;
    int j = n-1;
    pre(i, n-2, 0){
        int dist = abs(i-j)-1;
        if(dist>d){
            freq[dp[j]]--;
            if(!freq[dp[j]]){
                // cout 
                mnEl.erase(dp[j]);
            }
            j--;
        }
        ll mn = *mnEl.begin();
        // for(auto x: mnEl) cout <<x << " "; cout << endl;
        // cout << a[i] << " " << mn << " " << endl;
        dp[i] = a[i]+1+mn;
        mnEl.insert(dp[i]);
        freq[dp[i]]++;
    }
    // rep(i, 0, n) cout << dp[i] << " "; cout << endl;
    return dp[0];
}

void solve(){
    int n, m, k, d;
    cin >> n >> m >> k >> d;
    vl bridge(n);
    rep(j, 0, n){
        vl a(m);
        rep(i, 0, m) cin >> a[i];
        // rep(i, 0, m) cout << a[i] << " "; cout << endl;
        bridge[j] = bridgeCost(a, d);
        // cout << bridge[j] << " *****" << endl;
    }
    ll mn = 0;
    int i=0;
    while(i<k) mn+=bridge[i++];
    ll sum = mn;
    int j = 0;
    while(i<n){
        sum-=bridge[j++];
        sum+=bridge[i];
        mn =  min(mn, sum);
        i++;
    }
    // rep(i, 0, n) cout << bridge[i] << " " ; cout << endl;
    cout << mn << endl;
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
