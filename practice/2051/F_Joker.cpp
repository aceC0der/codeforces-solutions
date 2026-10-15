/*
 * Problem   : 2051F - Joker
 * Link      : https://codeforces.com/contest/2051/problem/F
 * Submission: https://codeforces.com/contest/2051/submission/298044161
 * Rating    : 2000   Tags: brute force, greedy, implementation, math
 * Verdict   : Accepted (125 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-23 (Practice)
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
    int n, m,q;
    cin >> n >> m >> q;
    int l=m, r=m;
    vpi ranges;
    ranges.pb({m, m});
    bool f = false;
    rep(j, 0, q){
        int x;
        cin >> x;
        rep(i, 0, ranges.size()){
            if(ranges[i].ff<=x && x<=ranges[i].ss){
                if(!f){
                    if(j==0) ranges.pop_back();
                    f = true;
                    ranges.pb({1, 1});
                    ranges.pb({n, n});
                    sort(all(ranges));
                    break;
                    // cout << ranges.back().ff << " " << ranges.back().ss << endl;
                }
            }
            else{
                if(x<ranges[i].ff) ranges[i].ff--;
                else ranges[i].ss++;
                ranges[i].ff = max(0, ranges[i].ff);
                ranges[i].ss = min(n, ranges[i].ss);
            }
        }
        // rep(i, 0, ranges.size()){
        //     cout << ranges[i].ff << " " << ranges[i].ss << endl;
        // }
        rep(i, 0, ranges.size()-1){
            if(ranges[i].ff<=ranges[i+1].ff && ranges[i+1].ff<=ranges[i].ss){
                ranges[i].ss = max(ranges[i].ss, ranges[i+1].ss);
                // i--;
                if(i+2<ranges.size()){
                    swap(ranges[i+1], ranges[i+2]);
                }
                i--;
                ranges.pop_back();
            }
        }
        int ans = 0;

        rep(i, 0, ranges.size()){
            ans += (ranges[i].ss-ranges[i].ff+1);
        }
        // cout << ans << " ****** " << m << endl;
        // rep(i, 0, ranges.size()){
        //     cout << ranges[i].ff << " " << ranges[i].ss << endl;
        // }
        cout << ans << " ";
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
