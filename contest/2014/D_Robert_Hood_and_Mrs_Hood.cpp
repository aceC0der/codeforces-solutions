/*
 * Problem   : 2014D - Robert Hood and Mrs Hood
 * Link      : https://codeforces.com/contest/2014/problem/D
 * Submission: https://codeforces.com/contest/2014/submission/282306454
 * Rating    : 1400   Tags: brute force, data structures, greedy, sortings
 * Verdict   : Accepted (139 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-21 (Contest)
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
    int n, d, k;
    cin >> n >> d >> k;
    // cout << n << " " << d << " " << k << endl;
    vi str(n+1), ed(n+1);
    rep(i, 0, k){
        int l, r;
        cin >> l >> r;
        // cout << l << " " << r << endl;
        l--;r--;
        str[l]++;
        ed[r]++;
    }
    // return;
    rep(i, 1, n+1){
        str[i]+=str[i-1];
        ed[i]+=ed[i-1];
    }
    int mx = 0, mn = INT_MAX;
    int mxIdx = -1, mnIdx = -1;
    int i = n-d, j = n-1;
    while(i>=0){
        int v = str[j];
        if(i) v-=ed[i-1];
        if(v>=mx){
            mxIdx = i;
            mx = v;
        }
        if(v<=mn){
            mnIdx = i;
            mn = v;
        }
        i--;
        j--;
    }

    cout << mxIdx+1 << " " << mnIdx+1 << endl;
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
