/*
 * Problem   : 1729C - Jumping on Tiles
 * Link      : https://codeforces.com/contest/1729/problem/C
 * Submission: https://codeforces.com/contest/1729/submission/171898302
 * Rating    : 1100   Tags: constructive algorithms, strings
 * Verdict   : Accepted (61 ms, 4000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-12 (Contest)
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

bool cmp(pi a, pi b){
    if(a.ff==b.ff){
        return a.ss<b.ss;
    }
    return a.ff<b.ff;
}

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int cost = abs(s[0]-s[n-1]);
    vpi ans;
    // int cint = s[0]-'a';
    // ans.pb({cint, 1});
    cout << cost << " ";
    int cint;
    int dir = 1;
    char l = s[0], r = s[n-1];
    if(s[0]>s[n-1]){
        dir = -1;
        swap(l, r);
    }
    rep(i, 1, n-1){
        cint = s[i]-'a';
        if(s[i]>=l && s[i]<=r){
            ans.pb({cint, i+1});
        }
    }
    if(dir==-1){
        sort(all(ans), greater<pi>());
    }
    else{
        sort(all(ans));
    }
    cout << ans.size()+2<<endl;
    cout << 1 << " ";
    rep(i, 0, ans.size()){
        cout << ans[i].ss << " ";
    }
    cout << n << endl;
    // cout << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
