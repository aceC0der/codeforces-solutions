/*
 * Problem   : 1920D - Array Repetition
 * Link      : https://codeforces.com/contest/1920/problem/D
 * Submission: https://codeforces.com/contest/1920/submission/242639186
 * Rating    : 1900   Tags: binary search, brute force, dsu, implementation, math
 * Verdict   : Accepted (326 ms, 4700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-01-21 (Practice)
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

void querySolve(ll k, vl& dp, vl& lst){
    while (true){
        int pos = lower_bound(all(dp), k) - dp.begin();
        
        if (dp[pos] == k){
            cout<<lst[pos]<<" ";
            return;
        }
        if (k % dp[pos - 1] == 0){
            cout<<lst[pos - 1]<<" ";
            return;
        }
        k %= dp[pos - 1];
    }

}

void solve(){
    int n, q;
    cin >> n >> q;
    vl qrr(q);
    vpl arr(n+1);
    vl size;
    rep(i, 1, n+1){
        int op, x;
        cin >> op >> x;
        arr[i] = {op, x};
    }
    ll inf = 2000000000000000000;
    vl lst(n+1);
    size.pb(0);
    rep(i, 1, n+1){
        int op = arr[i].ff;
        ll x = arr[i].ss;
        ll inc = 0;
        if(op==1 && size[i-1]!=inf){
            inc = 1;
            lst[i] = x;
            size.pb(size[i-1]+1);
        }
        else{
            lst[i] = lst[i-1];
            size.pb(((x + 1) > 2e18 / size[i - 1]) ? (ll)2e18 : size[i - 1] * (x + 1));
            // ll tmp = (inf/size[i-1]);
            // if(tmp<=x){
            //     size.pb(inf);
            //     break;
            // }
            // inc = (size[i-1]*x);
        }
        // ll dif = (inf-size[i-1]);
        // if(inc<0 || inc>=dif){
        //     size.pb(inf);
        //     break;
        // }
        // size.pb(inc+size[i-1]);
    }

    // for(auto s: size) cout << s << " "; cout << endl;
    rep(i, 0, q){
        cin >> qrr[i];
        querySolve(qrr[i], size, lst);
    }
    cout << endl;
    
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
