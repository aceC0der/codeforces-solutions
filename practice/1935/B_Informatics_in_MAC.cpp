/*
 * Problem   : 1935B - Informatics in MAC
 * Link      : https://codeforces.com/contest/1935/problem/B
 * Submission: https://codeforces.com/contest/1935/submission/262357680
 * Rating    : 1200   Tags: constructive algorithms
 * Verdict   : Accepted (124 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-24 (Practice)
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
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    int mex = 0;
    vector<bool> freq(n+2);
    rep(i, 0, n){
        freq[a[i]] =  (freq[a[i]]|1);
        while(freq[mex]){
            mex++;
        }
    }
    int MEX = mex;
    // cout << MEX << " *** "  << endl;
    vpi ans;
    rep(i, 0, MEX) freq[i] = false;
    mex = 0;
    rep(i, 0, n){
        freq[a[i]] = (freq[a[i]]|1);
        while(freq[mex]){
            mex++;
        }
        if(mex==MEX){
            // cout << "********************" << " " << i+1 << endl;
            ans.pb({1, i+1});
            break;
        }
    }
    rep(i, 0, MEX) freq[i] = false;
    mex= 0;
    rep(i, ans[0].ss, n){
        freq[a[i]] =  (freq[a[i]]|1);
        if(freq[mex]){
            while(freq[mex]){
                mex++;
            }
        }
        if(mex==MEX){
            ans.pb({ans[0].ss+1, n});
            break;
        }
    }
    if(ans.size()!=2){
        cout << -1 << endl;
        return;
    }
    cout << 2 << endl;
    cout << ans[0].ff << " " << ans[0].ss << endl;
    cout << ans[1].ff << " " << ans[1].ss << endl;
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
