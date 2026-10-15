/*
 * Problem   : 1805C - Place for a Selfie
 * Link      : https://codeforces.com/contest/1805/problem/C
 * Submission: https://codeforces.com/contest/1805/submission/209308784
 * Rating    : 1400   Tags: binary search, data structures, geometry, math
 * Verdict   : Accepted (155 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-11 (Practice)
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

class para{
public:
    int a, b, c;
};

bool doesIntersect(ll a, ll b, ll c, ll k){
    // double a = bola.a;
    // double b = bola.b;
    // double c = bola.c;
    ll bn = k-b;
    return ((bn*bn)<4*a*c);
}

// int binSearch(para bola, vi& a){
//     int n =  a.size();
//     int l = 0, r = n-1;
//     int ans = -1;
//     while(l<=r){
//         int mid = (l+r)/2;
//         int inter = doesIntersect(bola, a[mid]);
//         if(!inter){
//             return a[mid];
//         }
//         if(inter==1){
//             r = mid-1;
//         }
//         else{
//             l = mid+1;
//         }
//     }
//     return -1;
// }

void solve(){
    int n, m;
    cin >> n >> m;
    vi ar(n);
    vector<para> bolas(m);
    rep(i, 0, n) cin >> ar[i];
    sort(all(ar));
    rep(i, 0, m){
        int a, b, c;
        cin >> a >> b >> c;
        int idx = lower_bound(ar.begin(), ar.end(), b) - ar.begin();
        // cout << n <<  ' ' << idx << endl;
        if(idx<n && doesIntersect(a, b, c, ar[idx])){
            cout << "YES" << endl;
            cout << ar[idx] << endl;
            continue;
        }
        if(idx>0 && doesIntersect(a, b, c, ar[idx-1])){
            cout << "YES" << endl;
            cout << ar[idx-1] << endl;
            continue;
        }
        cout << "NO" << endl;
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
