/*
 * Problem   : 2032D - Genokraken
 * Link      : https://codeforces.com/contest/2032/problem/D
 * Submission: https://codeforces.com/contest/2032/submission/291339528
 * Rating    : 1800   Tags: constructive algorithms, data structures, graphs, greedy, implementation, interactive, trees, two pointers
 * Verdict   : Accepted (296 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-11-13 (Practice)
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
#define vvi vector<vector<int>>
#define vb vector<bool>
#define pl pair<ll, ll>
#define vpi vector<pi >
#define vpl vector<pl >
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
#define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

bool query(int a, int b){
    cout << "? " << a << " " << b << endl;
    bool ans; 
    cin >> ans;
    return ans;
}

void answer(vi& par){
    cout << "! ";
    for(int i=1; i<par.size(); i++) cout << par[i] << " "; cout << endl;
}

void solve(){
    int n;
    cin >> n;
    vi zr;
    zr.pb(1);
    vi par(n);
    vi lvl(n);
    par[1] = 0;
    int i=2;
    queue<int> nxt;
    while(i<n && query(1, i)){
        par[i] = 0;
        nxt.push(i);
        i++;
    }
    nxt.push(i);
    par[i] = 1;
    i++;
    while(i<n && !nxt.empty()){
        int t = nxt.front();
        nxt.pop();
        if(!query(t, i)){
            par[i] = t;
            nxt.push(i);
            i++;
        }
    }
    answer(par);
}

int main()
{
    TestCases{
        solve();
    }
    return 0;
}
