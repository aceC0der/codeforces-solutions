/*
 * Problem   : 2126C - I Will Definitely Make It
 * Link      : https://codeforces.com/contest/2126/problem/C
 * Submission: https://codeforces.com/contest/2126/submission/329427920
 * Rating    : 1100   Tags: greedy, sortings
 * Verdict   : Accepted (124 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2025-07-17 (Contest)
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
    int n, k;
    cin >> n >> k;
    vi arr(n);
    rep(i, 0, n) cin >> arr[i];
    int crr = arr[k-1];
    int mx = INT_MIN;
    set<int> st;
    rep(i, 0, n) {
        st.insert(arr[i]);
        mx = max(mx, arr[i]); 
    }
    int lvl = 1;
    if(mx<=crr){
        cout << "YES" << endl;
        return;
    }


    for(auto nxt: st){
        if(nxt<=crr) continue;
        int dif = nxt-crr;
        int lvlGap = crr-lvl+1;
        if(lvlGap<dif){
            cout << "NO" << endl;
            return;
        }
        crr = nxt;
        lvl += dif;
    }

    cout << "YES" << endl;
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
