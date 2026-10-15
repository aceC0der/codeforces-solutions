/*
 * Problem   : 1825C - LuoTianyi and the Show
 * Link      : https://codeforces.com/contest/1825/problem/C
 * Submission: https://codeforces.com/contest/1825/submission/205106442
 * Rating    : 1400   Tags: greedy, sortings
 * Verdict   : Accepted (46 ms, 600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-08 (Contest)
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
    int n, m;
    cin >> n >> m;
    vi a;
    int left, right;
    left = right = 0;
    vector<bool> flag(m+2);
    rep(i, 0, n){
        int x; cin >> x;
        if(x==-1) left++;
        else if(x==-2) right++;
        else if(!flag[x]) a.pb(x), flag[x]=true;
    }
    sort(all(a));
    int mx = 0;
    int sz = a.size();
    // if(sz==0){
    //     mx = max(left, right);
    //     cout << mx << endl;
    //     return;
    // }
    // if(left==0){
    //     mx = min(m, sz+right);
    //     cout << mx << endl;
    //     return;
    // }
    // if(right==0){
    //     mx = min(m, sz+left);
    //     cout << mx << endl;
    //     return;
    // }
    rep(i, 0, sz){
        int l_space = a[i]-1;
        int r_space = m-a[i];
        int l_mn = i;
        int r_mn = sz-i-1;
        int sum = min(l_space, l_mn+left)+1+min(r_space, r_mn+right);
        mx = max(sum, mx);
    }
    mx = max(min(m, left+sz), mx);
    mx = max(min(m, right+sz), mx);
    cout << mx << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
