/*
 * Problem   : 1826D - Running Miles
 * Link      : https://codeforces.com/contest/1826/problem/D
 * Submission: https://codeforces.com/contest/1826/submission/209620537
 * Rating    : 1700   Tags: brute force, dp, greedy
 * Verdict   : Accepted (156 ms, 3700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-14 (Practice)
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
    multiset<int> pref, suf;
    rep(i, 1, n){
        suf.insert(a[i]-i);
    }
    pref.insert(a[0]);
    // pref.insert(a[1]-1);
    int ans = 0;

    rep(i, 1, n-1){

        
        suf.erase(suf.find(a[i]-i));
        // cout << "**" << endl;
        // if(i==n-2) return;/
        // for(auto it: suf) cout << it << " "; cout << endl;
        // cout << *pref.rbegin() << " " << *suf.rbegin() << " " << a[i] << " " << ans << "**" << endl;
        // if(i==n-2) return;
        ans = max(ans, (*pref.rbegin()+*suf.rbegin()+a[i]));
        
        pref.insert(a[i]+i);
        // cout << suf.count(a[i]-i) << endl;
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
