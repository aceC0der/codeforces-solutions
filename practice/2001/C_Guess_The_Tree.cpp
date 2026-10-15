/*
 * Problem   : 2001C - Guess The Tree
 * Link      : https://codeforces.com/contest/2001/problem/C
 * Submission: https://codeforces.com/contest/2001/submission/277607946
 * Rating    : 1500   Tags: binary search, brute force, dfs and similar, divide and conquer, dsu, greedy, interactive, trees
 * Verdict   : Accepted (93 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-08-22 (Practice)
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

int query(int a, int b){
    cout << "? " << a << " " << b << endl;
    cout.flush();
    int x;
    cin >> x;
    return x;
}

void answer(set<pi>& ans){
    cout << "! ";
    for(auto a: ans){
        cout << a.ff << " " << a.ss << " ";
    }
    cout << endl;
    cout.flush();
}

void getEdge(int a, int b, set<pi>& ans, vector<bool>& visited){
    if(visited[b]) return;
    int x = query(a, b);
    if(x==a){
        if(a>b) swap(a, b);
        ans.insert({a, b});
        visited[a] = visited[b] = true;
        return;
    }
    if(!visited[x]){
        getEdge(a, x, ans, visited);
    }
    getEdge(x, b, ans, visited);
}

void solve(){
    int n;
    cin >> n;
    vector<bool> visited(n+1);
    visited[1] = true;
    set<pi> ans;
    rep(i, 2, n+1){
        getEdge(1, i, ans, visited);
    }
    answer(ans);
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    // fios
    TestCases{
        solve();
    }
    return 0;
}
