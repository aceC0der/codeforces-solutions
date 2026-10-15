/*
 * Problem   : 1989B - Substring and Subsequence
 * Link      : https://codeforces.com/contest/1989/problem/B
 * Submission: https://codeforces.com/contest/1989/submission/267729660
 * Rating    : 1200   Tags: brute force, greedy, strings
 * Verdict   : Accepted (171 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-27 (Contest)
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
    string a, b;
    cin >> a >> b;
    string tmp = a;
    int ans = a.size()+b.size();
    int n = b.size();
    string t = "";
    rep(i, 0, n+1){
        tmp = "";
        tmp = t+a;
        if(i<n) t+=b[i];
        int idx = 0;
        rep(j, 0, tmp.size()){
            if(idx>=n) break;
            if(tmp[j]==b[idx]){
                idx++;
            }
        }
        while(idx<n){
            tmp+=b[idx];
            idx++;
        }
        int x=tmp.size();
        ans=min(x, ans);
        // cout << tmp << endl;
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
