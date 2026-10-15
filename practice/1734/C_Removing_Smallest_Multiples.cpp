/*
 * Problem   : 1734C - Removing Smallest Multiples
 * Link      : https://codeforces.com/contest/1734/problem/C
 * Submission: https://codeforces.com/contest/1734/submission/173267704
 * Rating    : 1200   Tags: greedy, math
 * Verdict   : Accepted (31 ms, 2000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-24 (Practice)
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
    string s;
    cin >> s;
    ll cost = 0;
    vector<bool> visited(n+1, false);
    rep(i, 1, n+1){
        for(int j=i; j<=n; j+=i){
            if(s[j-1]=='1') break;
            if(!visited[j]){
                cost += i;
                visited[j] = true;
            }
        }
    }
    
    cout << cost << endl;
}

int main()
{
    fios
    // sieve();
    TestCases{
        solve();
    }
    return 0;
}
