/*
 * Problem   : 1719C - Fighting Tournament
 * Link      : https://codeforces.com/contest/1719/problem/C
 * Submission: https://codeforces.com/contest/1719/submission/168665813
 * Rating    : 1400   Tags: binary search, data structures, implementation, two pointers
 * Verdict   : Accepted (108 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-17 (Practice)
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
    int n, q;
    cin >> n >> q;
    vi a(n);
    int mx = -1, mxpos=0;
    rep(i, 0, n) {
        cin >> a[i];
        if(a[i]>mx){
            mx = a[i];
            mxpos = i;
        }
    }
    vi freq(n+1, -1);
    int p = 0;
    rep(i, 1, n){
        if(a[i]>a[p]){
            freq[a[p]] = i;
            p = i;
        }
        if(a[i]==n){
            break;
        }
    }
    while(q--){
        int x, y;
        cin >> x >> y;
        x--;
        if(x==mxpos){
            if(mxpos>=2){
                y -= (x-1);
            }
            y = max(y, 0);
            cout << y << endl;
        }
        else if(x>mxpos || freq[a[x]]==-1){
            cout << 0 << endl;
        }
        else{
            int ans = freq[a[x]]-x-1;
            if(x<2){
                ans += (a[x]>a[(x+1)%2]);
                if(x==0 && a[x]>a[x+1]){
                    ans--;
                }
            }
            else{
                y-=(x-1);
                ans++;
            }
            // cout << y << " " << ans << endl;
            ans = min(y, ans);
            ans = max(ans, 0);
            cout << ans << endl;
        }
    }

}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
