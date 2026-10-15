/*
 * Problem   : 2004B - Game with Doors
 * Link      : https://codeforces.com/contest/2004/problem/B
 * Submission: https://codeforces.com/contest/2004/submission/277529974
 * Rating    : 1000   Tags: brute force, greedy
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-08-21 (Practice)
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
    pi left, right;
    cin >> left.ff >> left.ss;
    cin >> right.ff >> right.ss;
    if(left.ff>right.ff) swap(left, right);
    if(left.ff<=right.ff && right.ff<=left.ss){
        int l = right.ff-(left.ff<right.ff);
        int r = min(right.ss, left.ss)+(right.ss!=left.ss);
        cout << r-l << endl;
    }
    else{
        // cout << "**" <<endl;
        cout << 1 << endl;
    }
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
