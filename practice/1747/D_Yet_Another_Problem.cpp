/*
 * Problem   : 1747D - Yet Another Problem
 * Link      : https://codeforces.com/contest/1747/problem/D
 * Submission: https://codeforces.com/contest/1747/submission/180168029
 * Rating    : 1900   Tags: binary search, bitmasks, constructive algorithms, data structures
 * Verdict   : Accepted (311 ms, 12800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-11-09 (Practice)
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
    rep(i, 0, n){
        cin >> a[i];
    }
    vi pref(n+1);
    vi prefs(n+1);
    map<int, vi > odd, even;
    rep(i, 1, n+1){
        pref[i] = pref[i-1]^a[i-1];
        prefs[i] = prefs[i-1]+a[i-1];
        if(i&1)
            odd[pref[i]].pb(i);
        else 
            even[pref[i]].pb(i);
    }
    // rep(i, 1, n+1) cout << pref[i] << " " ; cout << endl;
    while(q--){
        int l, r;
        cin >> l >> r;
        int qn = r-l+1;
        int xr = pref[l-1]^pref[r];
        int rs = prefs[r]-prefs[l-1];
        // cout << xr << " " << rs << endl;
        if(!rs) cout << 0 << endl;
        else if(xr) cout << -1 << endl;
        else{
            if(qn&1) cout << 1 << endl;
            else if(qn!=2){
                if(!a[l-1] || !a[r-1]){
                    cout << 1 << endl;
                }
                else{
                    bool f = false;
                    if(l&1){
                        int d=0, u=odd[pref[l-1]].size()-1;
                        while(d<=u){
                            int mid = (d+u)/2;
                            if(odd[pref[l-1]][mid]>l && odd[pref[l-1]][mid]<r){
                                f = true;
                                break;
                            }
                            else if(odd[pref[l-1]][mid]>l){
                                u = mid-1;
                            }
                            else d = mid+1;
                        }
                    }
                    else{
                        int d=0, u=even[pref[l-1]].size()-1;
                        while(d<=u){
                            int mid = (d+u)/2;
                            if(even[pref[l-1]][mid]>l && even[pref[l-1]][mid]<r){
                                f = true;
                                break;
                            }
                            else if(even[pref[l-1]][mid]>l){
                                u = mid-1;
                            }
                            else d = mid+1;
                        }
                    }
                    if(f) cout << 2 << endl;
                    else cout << -1 << endl;
                }
            }
            else{
                cout << -1 << endl;
            }
        }

    }
}

int main()
{
    fios
        solve();
    return 0;
}
