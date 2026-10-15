/*
 * Problem   : 1934D2 - XOR Break --- Game Version
 * Link      : https://codeforces.com/contest/1934/problem/D2
 * Submission: https://codeforces.com/contest/1934/submission/249273817
 * Rating    : 2400   Tags: bitmasks, games, greedy, interactive
 * Verdict   : Accepted (420 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-03-02 (Practice)
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
*/

void query(ll x, ll y, ll &a, ll &b){
    cout << x << " " << y << endl;
    cout.flush();
    cin >> a >> b;
}

int mxBit(ll x){
    pre(i, 63, 0){
        if(CheckBit(x,i)) return i;
    }
    return 0;
}

int popcount(ll n){
    int cnt = 0;
    rep(i, 0, 63) cnt+=CheckBit(n, i);
    return cnt;
}

void solve(){
    ll n;
    cin >> n;
    int bcnt = popcount(n);
    ll a, b;
    if(bcnt&1){
        cout << "second" << endl;
        cin >> a >> b ;
    }
    else{
        cout << "first" << endl;
        int mxB = mxBit(n);
        a = 0;
        SetBit(a, mxB);
        b = n;
        ClearBit(b, mxB);
        query(a, b, a, b);
    }
    while(a && b){
        n = a;
        bcnt = popcount(n);

        if(bcnt%2){
            n = b;
            bcnt = popcount(n);
        }
        // if(bcnt&1){
        //     cout << "ERRROOOOOORRRRRRRRRRRRRRRRRROOOOOOOOO" << endl;
        // }
        // cout << n << "***" << endl;
        int mxB = mxBit(n);
        a = 0;
        SetBit(a, mxB);
        b = n;
        ClearBit(b, mxB);
        // cout << (a^b) << endl;
        query(a, b, a, b);
    }

}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    // fios
    TestCases{
        solve();
    }
    return 0;
}
