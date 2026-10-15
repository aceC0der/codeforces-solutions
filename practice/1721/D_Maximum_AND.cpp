/*
 * Problem   : 1721D - Maximum AND
 * Link      : https://codeforces.com/contest/1721/problem/D
 * Submission: https://codeforces.com/contest/1721/submission/172108091
 * Rating    : 1800   Tags: bitmasks, dfs and similar, divide and conquer, greedy, sortings
 * Verdict   : Accepted (498 ms, 11800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-14 (Practice)
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
    vi a(n), b(n);
    rep(i, 0, n) {cin >> a[i];}
    rep(i, 0, n) cin >> b[i];
    vector<vector<pi>> mf;
    int ans = 0;
    int p=0;
    vector<pi> f(n);
    // cout << "**" << endl;
    rep(i, 0, n){
        f[i] = {a[i], b[i]};
    }
    mf.pb(f);
    // vi invalid;
    pre(k, 30, 0){
        int bit = 1;
        vector<vector<pi>> nnew;
        vi in;
        rep(j, 0, mf.size()){
            // if(binary_search(all(invalid), j)) continue;
            int on=0, zr=0;
            vpi crr = mf[j];
            rep(i, 0, crr.size()){
                int abit = CheckBit(crr[i].ff, k);
                int bbit = CheckBit(crr[i].ss, k);
                on += (abit==1);
                zr += (bbit==0);
            }
            if(on==zr) {
                if(on==0 || crr.size()-on==0) {
                    nnew.pb(crr);
                    continue;
                }
                in.pb(j);
                vi onea, zeroa, oneb, zerob;
                rep(i, 0, crr.size()){
                    int abit = CheckBit(crr[i].ff, k);
                    int bbit = CheckBit(crr[i].ss, k);
                    if(abit) onea.pb(crr[i].ff);
                    else zeroa.pb(crr[i].ff);
                    if(bbit) oneb.pb(crr[i].ss);
                    else zerob.pb(crr[i].ss);
                }
                vpi g1, g2;
                rep(i, 0, onea.size()){
                    g1.pb({onea[i], zerob[i]});
                }
                rep(i, 0, oneb.size()){
                    g2.pb({zeroa[i], oneb[i]});
                }
                nnew.pb(g1);
                nnew.pb(g2);
                bit&=1;
            }
            else {
                nnew.pb(crr);
                bit&=0;
            }
        }
        if(bit==1){
            mf = nnew;
            SetBit(ans, k);
        }
    }
    cout << ans << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
