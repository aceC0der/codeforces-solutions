/*
 * Problem   : 1989C - Two Movies
 * Link      : https://codeforces.com/contest/1989/problem/C
 * Submission: https://codeforces.com/contest/1989/submission/267721046
 * Rating    : 1400   Tags: greedy, math
 * Verdict   : Accepted (124 ms, 0 KB)
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
    int n;
    cin >> n;
    int a, b;
    a = b = 0;
    int neg, pos;
    neg=pos=0;
    vpi arr(n);
    rep(i, 0, n) cin >> arr[i].ff;
    rep(i, 0, n) cin >> arr[i].ss;
    // rep(i, 0, n) cout << arr[i].ff << " "; cout << endl;
    // rep(i, 0, n) cout << arr[i].ss << " "; cout << endl;

    rep(i, 0, n){
        int x, y;
        x = arr[i].ff, y=arr[i].ss;
        // cout << x << " " << y << endl;
        if(x==y && y==1) pos++;
        else if(x==y && y==-1) neg++;
        else{
            if(x>0) a++;
            if(y>0) b++;
        }
    }
    while(pos){
        if(a<b) a++;
        else b++;
        pos--;
    }
    while(neg){
        if(a>b) a--;
        else b--;
        neg--;
    }
    // int dif = pos-neg;
    // if(abs(dif)%2==1){
    //     if(dif<0){
    //         if(a>b) a--;
    //         else b--;
    //     }
    //     else{
    //         if(a<b) a++;
    //         else b++;
    //     }
    // }
    // dif/=2;
    // a+=dif;
    // b+=dif;
    int ans = min(a, b);
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
