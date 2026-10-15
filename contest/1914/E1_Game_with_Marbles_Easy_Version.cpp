/*
 * Problem   : 1914E1 - Game with Marbles (Easy Version)
 * Link      : https://codeforces.com/contest/1914/problem/E1
 * Submission: https://codeforces.com/contest/1914/submission/238047115
 * Rating    : 1400   Tags: brute force, games, greedy, sortings
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-12-19 (Contest)
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
    ll n;
    cin >> n;
    vl a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    vector<bool> visited(n);
    priority_queue<pi> pa, pb;
    rep(i, 0, n){
        if(a[i] && b[i]){
            pa.push({(a[i]-1+b[i]), i});
            pb.push({(b[i]-1+a[i]), i});
        }
    }
    bool turn = 0;
    while(turn != -1){
        if(!turn){
            pi api = pa.top();
            pa.pop();
            while(visited[api.ss] && !pa.empty()){
                api = pa.top();
                pa.pop();
            }
            if(visited[api.ss]) break;
            int i = api.ss;
            // cout << api.ff << " " << i << endl;
            a[i]--;
            b[i] = 0;
            visited[i] = true;
        }
        else{
            pi bpi = pb.top();
            pb.pop();
            while(visited[bpi.ss] && !pb.empty()){
                bpi = pb.top();
                pb.pop();
            }
            if(visited[bpi.ss]) break;
            int i = bpi.ss;
            // cout << bpi.ff << " " << i << endl;
            a[i]=0;
            b[i]--;
            visited[i] = true;
        }
        turn = !turn;
    }
    ll suma = 0, sumb = 0;
    rep(i, 0,n){
        suma+=a[i];
        sumb+=b[i];
    }
    cout << suma-sumb << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("INPUT.txt", "r", stdin);
        freopen("OUTPUT.txt", "w", stdout);
    #endif
 
    fios
    TestCases{
        solve();
    }
    return 0;
}
