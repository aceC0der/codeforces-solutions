/*
 * Problem   : 1681D - Required Length
 * Link      : https://codeforces.com/contest/1681/problem/D
 * Submission: https://codeforces.com/contest/1681/submission/183156664
 * Rating    : 1700   Tags: brute force, dfs and similar, dp, hashing, shortest paths
 * Verdict   : Accepted (46 ms, 1800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-11-29 (Practice)
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
    ll n, x;
    cin >> n >> x;
    map<ll, int> dis;
    dis[x] = 0;
    queue<ll> q;
    q.push(x);
    while(!q.empty()){
        ll k = q.front();
        q.pop();
        string s = to_string(k);
        if(s.size()==n) {
            cout << dis[k] << endl;
            return;
        }
        rep(i, 0, s.size()){
            ll d = s[i]-'0';
            if(d<=1) continue;
            ll w = k*d;
            if(!dis.count(w)){
                dis[w] = dis[k]+1;
                q.push(w);
            }
        }
    }
    cout << -1 << endl;
}

int main()
{
    fios
        solve();
    return 0;
}
