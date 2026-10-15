/*
 * Problem   : 1566D2 - Seating Arrangements (hard version) 
 * Link      : https://codeforces.com/contest/1566/problem/D2
 * Submission: https://codeforces.com/contest/1566/submission/264776101
 * Rating    : 1600   Tags: data structures, greedy, implementation, sortings, two pointers
 * Verdict   : Accepted (78 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-09 (Practice)
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

bool cmp1(pi& a, pi& b){
    if(a.ff==b.ff){
        return a.ss>b.ss;
    }
    return a.ff<b.ff;
}

bool cmp2(pi& a, pi& b){
    return a.ss<b.ss;
}

void solve(){
    int n, m;
    cin >> n >> m;
    int ttl = n*m;
    vpi a(n*m);
    rep(i, 0, ttl) {
        cin >> a[i].ff;
        a[i].ss = i;
    }
    // rep(i, 0, ttl){
    //     cout << a[i].ff << " " << a[i].ss << endl;
    // }
    // cout << endl;
    sort(all(a));
    pair<int, int> seats[n][m];
    int idx = 0;
    rep(i, 0, n){
        rep(j, 0, m){
            seats[i][j] = a[idx++];
        }
    }
    // rep(i, 0, n){
    //     rep(j, 0, m){
    //         cout << seats[i][j].ss+1 << " ";
    //     }
    //     cout << endl;
    // }
    int ans = 0;
    rep(i, 0, n){
        vector<int> st;
        vector<pi> crrRow(m);
        rep(j, 0, m){
            crrRow[j] = seats[i][j];
        }
        sort(all(crrRow), cmp2);
        // rep(j, 0, m) cout << crrRow[j].ff << " "; cout << endl;
        rep(j, 0, m){ 
            int cnt = 0;
            for(auto it: st){
                if(it<crrRow[j].ff) cnt++;
            }
            // cout << cnt << " ";
            ans+=cnt;
            st.pb(crrRow[j].ff);
        }
    }
    // cout << endl;
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
