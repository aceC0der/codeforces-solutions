/*
 * Problem   : 1807E - Interview
 * Link      : https://codeforces.com/contest/1807/problem/E
 * Submission: https://codeforces.com/contest/1807/submission/198232279
 * Rating    : 1300   Tags: binary search, implementation, interactive
 * Verdict   : Accepted (732 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-03-19 (Contest)
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

int query(int l, int r){
    int k = (r-l)+1;
    cout << "? " << k << " " ;
     cout.flush();
    rep(i, 0, k){
        cout << l+i << " ";
         cout.flush();
    }
    cout << endl;
     cout.flush();
    int qr;
    cin >> qr;
    return qr;
}


void solve(){
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    vi pref(n+1);
    rep(i, 1, n+1){
        pref[i] = pref[i-1] + a[i-1];
    }
    int l = 1, r = n;
    while(l<r){
        int mid = (l+r)/2;
        int qr = query(l, mid);
        // cout << qr << " " << pref[mid]-pref[l-1] << " " << mid << endl;
        if(qr==pref[mid]-pref[l-1]){
            l = mid+1;
        }
        else{
            r = mid;
        }
        // cout << l << " " << r << "**" << endl;
    }
    cout << "! " <<  l << endl;
     cout.flush();
}

int main()
{
    // fios
    TestCases{
        solve();
    }
    return 0;
}
