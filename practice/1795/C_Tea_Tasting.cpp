/*
 * Problem   : 1795C - Tea Tasting
 * Link      : https://codeforces.com/contest/1795/problem/C
 * Submission: https://codeforces.com/contest/1795/submission/194340750
 * Rating    : 1500   Tags: binary search, data structures, implementation
 * Verdict   : Accepted (202 ms, 7800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-02-20 (Practice)
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

ll binSearch(ll l, ll r, ll idx, vl& pref, ll val){
    // cout << l << " " << r << "*****" << endl;
    while(l<r){
        ll m = (l+r)/2;
        if(pref[m]-pref[idx]==val){
            return m;
        }
        // cout << pref[m]-pref[idx] << " " << val << endl;
        if(pref[m]-pref[idx]<val){
            l = m+1;
        }
        else{
            r = m;
        }
    }
    return l;
}

void solve(){
    int n;
    cin >> n;
    vl a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(j, 0, n) cin >> b[j];
    vl freq(n+3);
    vl extra(n+3);
    vl pref(n+3);
    rep(i, 1, n+1){
        pref[i] += pref[i-1]+b[i-1];
    }
    pre(i, n-1, 0){
        int l = i+1, r = n, idx = i;
        // cout << pref[l]-pref[idx] << " " << pref[r]-pref[idx] << "**" << endl;
        ll bs = binSearch(l, r, idx, pref, a[i]);
        if(bs==l){
            if(pref[bs]-pref[idx]>a[i]){
                extra[bs]+=a[i]-(pref[bs-1]-pref[idx]);
            }
            else{
                freq[bs]++;
                freq[bs+1]--;
            }
        }
        else{
            freq[l]++;
            if(pref[bs]-pref[idx]>a[i]){
                extra[bs]+=a[i]-(pref[bs-1]-pref[idx]);
                freq[bs]--;
            }
            else{
                freq[bs+1]--;
            }
        }
    }
    rep(i, 1, n+1){
        freq[i] += freq[i-1];
    }
    rep(i, 1, n+1) cout << freq[i]*b[i-1]+extra[i] << " "; cout << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
