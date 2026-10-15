/*
 * Problem   : 1648A - Weird Sum
 * Link      : https://codeforces.com/contest/1648/problem/A
 * Submission: https://codeforces.com/contest/1648/submission/152774454
 * Rating    : 1400   Tags: combinatorics, data structures, geometry, math, matrices, sortings
 * Verdict   : Accepted (93 ms, 6500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-05 (Practice)
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

bool comp(pi a, pi b){
    return a.second < b.second;
}

int main()
{
    fios
    int n, m;
    cin >> n >> m;
    map<int, vector<pair<ll, ll> > > d;
    ll x;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> x;
            d[x].push_back(mp(i, j));
        }
    }
    ll ans = 0;
    for(auto i:d){
        // cout << i.first << ": " << endl;
        sort(all(i.second));
        ll sz = i.second.size();
        // for(int j=0; j<sz; j++){
        //     cout << i.second[j].first << " ";
        // }
        // cout << endl;
        ll sum = 0;
        for(int j=0; j<sz; j++){
            sum += i.second[j].first;
        }
        for(int j=0; j<sz-1; j++){
            sum -= i.second[j].first;
            ans += (sum-(sz-j-1)*i.second[j].first);
            // cout << (sum-(sz-j-1)*i.second[j].first) << " ";
        }
        // cout<< endl;
        sum = 0;
        sort(all(i.second), comp);

        // for(int j=0; j<sz; j++){
        //     cout << i.second[j].second << " ";
        // }
        // cout << endl;
        for(int j=0; j<sz; j++){
            sum += i.second[j].second;
        }
        for(int j=0; j<sz-1; j++){
            sum -= i.second[j].second;
            ans += (sum-(sz-j-1)*i.second[j].second);
            // cout << (sum-(sz-j-1)*i.second[j].second) << " ";
        }
        // cout << endl;
    }

    cout << ans << endl;

    return 0;
}
