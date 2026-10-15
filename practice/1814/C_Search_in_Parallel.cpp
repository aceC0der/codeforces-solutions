/*
 * Problem   : 1814C - Search in Parallel
 * Link      : https://codeforces.com/contest/1814/problem/C
 * Submission: https://codeforces.com/contest/1814/submission/201663090
 * Rating    : 1500   Tags: constructive algorithms, greedy, sortings
 * Verdict   : Accepted (109 ms, 3000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-04-10 (Practice)
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

bool cmp(pi a, pi b){
    return a.ff>b.ff;
}

void solve(){
    int n, s1, s2;
    cin >> n >> s1 >> s2;
    vi a, b;
    vpi arr(n);
    rep(i, 0, n) {
        cin >> arr[i].ff;
        arr[i].ss = i+1;
    }
    sort(all(arr), cmp);
    bool isSwaped = false;
    // if(s1>s2){
    //     isSwaped = true;
    //     swap(s1, s2);
    // }
    int ttl1 = 0, ttl2 = 0;
    rep(i, 0, n){
        int cr1 = (a.size()+1)*s1;
        int cr2 = (b.size()+1)*s2;
        // cout << cr1 << " "<< cr2 << endl;
        if(cr1<=cr2){
            // ttl1+=cr1;
            a.pb(arr[i].ss);
        }
        else{
            // ttl2+=cr2;
            b.pb(arr[i].ss);
        }
    }
    // cout << ttl1 << " " << ttl2 << endl;
    // vi one, two;
    // if(isSwaped){
    //     one = b;
    //     two = a;
    // }
    // else{
    //     one = a;
    //     two = b;
    // }
    cout << a.size() << " ";
    rep(i, 0, a.size()) cout << a[i] << " "; cout << endl;
    cout << b.size() << " ";
    rep(i, 0, b.size()) cout << b[i] << " "; cout << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
