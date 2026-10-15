/*
 * Problem   : 2047A - Alyona and a Square Jigsaw Puzzle
 * Link      : https://codeforces.com/contest/2047/problem/A
 * Submission: https://codeforces.com/contest/2047/submission/294536445
 * Rating    : 800   Tags: implementation, math
 * Verdict   : Accepted (46 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-03 (Contest)
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
    int sum = 0;
    int ans = 0;
    int cnt = 1;
    rep(i, 0, n){
        int x;
        cin >> x;
        sum += x;
        while(sum>(cnt*cnt)){
            cnt+=2;
        }
        if(sum==(cnt*cnt)) ans++;
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
