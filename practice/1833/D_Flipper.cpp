/*
 * Problem   : 1833D - Flipper
 * Link      : https://codeforces.com/contest/1833/problem/D
 * Submission: https://codeforces.com/contest/1833/submission/206578534
 * Rating    : 1400   Tags: brute force, constructive algorithms, greedy
 * Verdict   : Accepted (31 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-20 (Practice)
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
    int r = n-1;
    rep(i, 0, n){
        if(a[i]==n){
            r = i;
            break;
        }
    }
    if(r==0){
        rep(i, 0, n){
            if(a[i]==n-1){
                r = i;
                break;
            }
        }
        if(r<n-1){
            r--;
        }
    }
    else if(r<n-1){
        r--;
    }
    int mx_l = r;
    int mx = -1;
    int mpos = -1;
    vi best;
    pre(i, r, 0){
        vi arr;
        rep(j, r+1, n) arr.pb(a[j]);
        pre(j, r, i) arr.pb(a[j]);
        rep(j, 0, i) arr.pb(a[j]);
        // rep(p, 0, n) cout << arr[p] << " "; cout << endl;
        int idx = -1;
        if(best.size()==0) best=arr;
        else{
            rep(j, 0, n){
                if(arr[j]<best[j]) break;
                else if(arr[j]>best[j]){
                    idx = j;
                    break;
                }
            }
            if(idx!=-1){
                rep(j, idx, n){
                    best[j] = arr[j];
                }
            }
            arr.clear();
        }
        // best.clear();
            
    }
    rep(i, 0, n) cout << best[i] << " ";
    cout << endl;
    best.clear();
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
