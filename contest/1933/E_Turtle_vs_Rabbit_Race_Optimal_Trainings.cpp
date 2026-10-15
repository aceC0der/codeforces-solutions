/*
 * Problem   : 1933E - Turtle vs. Rabbit Race: Optimal Trainings
 * Link      : https://codeforces.com/contest/1933/problem/E
 * Submission: https://codeforces.com/contest/1933/submission/248631775
 * Rating    : 1500   Tags: binary search, implementation, math, ternary search
 * Verdict   : Accepted (233 ms, 3500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-02-27 (Contest)
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

ll validate(int l, int r, vl&prefa){
    ll a = prefa[r]-prefa[l-1];
    return a;
}

void solve(){
    int n;
    cin >> n;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    vl b(n);
    rep(i, 0, n){
        b[i] = (a[i]*(a[i]-1))/2;
    }
    vl prefa(n+1), prefb(n+1);
    rep(i, 1, n+1){
        prefa[i] = prefa[i-1]+a[i-1];
        prefb[i] = prefb[i-1]+b[i-1];
    }
    int q;
    cin >> q;
    vi ret(q);
    while(q--){
        int l, r;
        ll u;
        cin >> l >> u;
        // ll mx = validate(l, l, prefa, prefb, u)-1;
        r = n;
        int ml = l;
        int ans = l;
        // cout << mx  << "***" << endl;
        // rep(i, l, n+1){
        //     cout << validate(l, i, prefa) << " ";
        // }
        // cout << endl;
        while(l<=r){
            int mid = (l+r)/2;
            ll val = validate(ml, mid, prefa);
            if(val<=u){
                // mx = val;
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        if(ans<n){
            u -= validate(ml, ans, prefa);
            // cout << u << "DDD" << validate(l, ans, prefa) << endl;
            ll sum = u*a[ans] - (a[ans]*(a[ans]-1))/2;
            if(sum>0){
                ans++;
            }
        }
        cout << ans << " ";
        // ret[] = ans;
    }
    cout << endl;
    // rep(i, 0, q) cout << ret[i] << " "; cout << endl;

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
