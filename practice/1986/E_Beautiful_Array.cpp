/*
 * Problem   : 1986E - Beautiful Array
 * Link      : https://codeforces.com/contest/1986/problem/E
 * Submission: https://codeforces.com/contest/1986/submission/268898351
 * Rating    : 1700   Tags: greedy, math, number theory, sortings
 * Verdict   : Accepted (218 ms, 3000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-07-05 (Practice)
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
    ll n, k;
    cin >> n >> k;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    sort(all(a));
    map<int, vl> freq;
    rep(i, 0, n){
        ll x = a[i];
        int r = x%k;
        freq[r].pb(x);
    }
    ll cnt = n%2;
    for(auto it: freq){
        cnt-=(it.ss.size()%2);
    }
    if(cnt<0){
        cout << -1 << endl;
        return;
    }
    ll ans = 0;
    for(auto it: freq){
        vl tmp = it.ss;
        // sort(all(tmp));
        int i=0;
        n = tmp.size();
        if(n==1) continue;
        if(tmp.size()%2){
            i=1;
            ll c1, c2;
            vl pref(n), suf(n);
            rep(i, 1, n){
                pref[i]=pref[i-1];
                if(i&1){
                    pref[i]+=(tmp[i]-tmp[i-1])/k;
                }
            }
            pre(i, n-2, 0){
                suf[i]=suf[i+1];
                if(i&1){
                    suf[i]+=(tmp[i+1]-tmp[i])/k;
                }
            }
            cnt = min(pref[n-1], suf[0]);
            // for(auto v: tmp) cout << v << " "; cout << endl;
            // rep(i, 0, n) cout << pref[i] << " "; cout << endl;
            // rep(i, 0, n) cout << suf[i] << " "; cout << endl; 
            rep(i, 1, n-1){
                if(!(i&1)){
                    ll ttl = pref[i]+suf[i];
                    cnt = min(ttl, cnt);
                }
            }
            ans += cnt;
            // cnt += min(c1, c2);
            continue;
        }
        while(i<n){
            int dif = (tmp[i+1]-tmp[i]);
            ans += (dif/k);
            i+=2;
        }
        // cout << ans << "****" << endl;
    }
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
