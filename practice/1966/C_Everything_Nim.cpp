/*
 * Problem   : 1966C - Everything Nim
 * Link      : https://codeforces.com/contest/1966/problem/C
 * Submission: https://codeforces.com/contest/1966/submission/261694750
 * Rating    : 1400   Tags: games, greedy
 * Verdict   : Accepted (218 ms, 5100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-20 (Practice)
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
    set<int> s;
    rep(i, 0, n){
        int x;
        cin >> x;
        s.insert(x);
    }
    priority_queue<int> pq;
    for(auto it: s) pq.push(-it);
    bool f = true;
    int cnt = 0;
    while(!pq.empty()){
        int t = pq.top()*-1;
        // cout << t << " " << cnt << endl;
        pq.pop();
        int dif = t-cnt;
        if(dif!=1){
            cout << (f ? "Alice" : "Bob") << endl;
            return;
        }
        cnt++;
        f = !f;
    }
    cout << (!f ? "Alice" : "Bob") << endl;
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
