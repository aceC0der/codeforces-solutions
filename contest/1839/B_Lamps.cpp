/*
 * Problem   : 1839B - Lamps
 * Link      : https://codeforces.com/contest/1839/problem/B
 * Submission: https://codeforces.com/contest/1839/submission/208331393
 * Rating    : 1100   Tags: greedy, sortings
 * Verdict   : Accepted (264 ms, 9000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-03 (Contest)
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
    int n;
    cin >> n;
    map<int, priority_queue<int>> m;
    rep(i, 0, n){
        int x, y;
        cin >> x >> y;
        m[x].push(y);
    }
    int lamp_on = 0;
    ll ans = 0;
    int broken = 0;
    queue<pi> q;
    for(auto it: m){
        // cout << it.ff << "->>" << endl;
        priority_queue<int> pq = it.ss;
        int sz = 0;
        int active = 0;
        while(!pq.empty()){

            // cout << pq.top() << " ";
            ans += pq.top()*1LL;
            pq.pop();
            sz++;
            lamp_on++;
            active = lamp_on-broken;
            while(!q.empty() && active>=q.front().ff){
                broken+=q.front().ss;
                q.pop();
                // cout << "*XXX"<< endl;
                active= lamp_on-broken;
            }
            if(active>=it.ff){
                break;
            }
            // cout << lamp_on << " /// " << broken << endl;
        }
        q.push({it.ff, sz});
        // cout << endl;
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
