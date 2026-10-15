/*
 * Problem   : 1872F - Selling a Menagerie
 * Link      : https://codeforces.com/contest/1872/problem/F
 * Submission: https://codeforces.com/contest/1872/submission/222665169
 * Rating    : 1800   Tags: dfs and similar, dsu, graphs, implementation, math
 * Verdict   : Accepted (93 ms, 1200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-10 (Practice)
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
// */

void solve(){
    ll n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) a[i]--;
    vi c(n);
    rep(i, 0, n) cin >> c[i];
    vi freq(n+1);
    rep(i, 0, n){
        freq[a[i]]++;
    }
    vector<bool> visited_new(n);
    pre(i, n-1, 0){
        int j = i;
        while(freq[j]==0 && visited_new[j]==false){
            cout << j+1 << " ";
            visited_new[j] = true;
            freq[a[j]]--;
            j = a[j];
        }
    }
    rep(i, 0, n){
        if(freq[i]<=0) continue;
        int mn = i;
        int j = i;
        j = a[i];
        if(c[j]<c[mn]){
            mn = j;
        }
        while(j!=i){
            if(c[j]<c[mn]){
                mn = j;
            }
            j = a[j];
        }
        j = a[mn];
        while(freq[a[j]]){
            cout << j+1 << " ";
            freq[a[j]]--;
            j = a[j];
        }
    }
    cout << endl;
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
