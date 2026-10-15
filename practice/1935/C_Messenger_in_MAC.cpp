/*
 * Problem   : 1935C - Messenger in MAC
 * Link      : https://codeforces.com/contest/1935/problem/C
 * Submission: https://codeforces.com/contest/1935/submission/262379537
 * Rating    : 1800   Tags: binary search, brute force, constructive algorithms, data structures, dp, greedy, sortings
 * Verdict   : Accepted (390 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-24 (Practice)
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

void solve(){
    ll n, k;
    cin >> n >> k;
    // cout << n << " " << k << endl;
    vpl pr(n);
    rep(i, 0, n) cin >> pr[i].ss >> pr[i].ff;
    sort(all(pr));
    ll mx = 0;
    
    rep(i, 0, n){
        priority_queue<ll> pq;
        ll sum = 0;
        rep(j, i, n){
            pq.push(pr[j].ss);
            sum+=pr[j].ss;
            if(j>i) sum+=pr[j].ff-pr[j-1].ff;
            while(!pq.empty() && sum>k){
                ll t = pq.top();
                pq.pop();
                sum-=t;
            }
            // int sz = 2;
            if(sum<=k) mx = max(mx, (ll)(pq.size()));
        }
    }
    if(!mx){
        rep(i, 0, n){
            if(pr[i].ss<=k){
                mx = 1;
                break;
            }
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
    TestCases{
        solve();
    }
    return 0;
}
