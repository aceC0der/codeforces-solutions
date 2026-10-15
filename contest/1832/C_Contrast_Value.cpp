/*
 * Problem   : 1832C - Contrast Value
 * Link      : https://codeforces.com/contest/1832/problem/C
 * Submission: https://codeforces.com/contest/1832/submission/205607984
 * Rating    : 1200   Tags: greedy, implementation
 * Verdict   : Accepted (77 ms, 1200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-12 (Contest)
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
    int s = 0;
    rep(i, 0, n-1) {
        s += abs(a[i]-a[i+1]);
    }
    if(s==0) 
    {
        cout << 1 << endl;
        return;
    }
    // vector<bool> flag(n, true);
    // int i=0, j=2;
    // vi b;
    // int x = a[0];
    // b.pb(x);
    // rep(i, 1, n){
    //     if(a[i]!=x) b.pb(x), x=a[i];
    // }
    // n = b.size();
    int i=0, j=1, k=2;
    int cnt = 0;
    while(k<n){
        if(abs(a[i]-a[j])+abs(a[j]-a[k])==abs(a[i]-a[k])){
            j++;
            k++;
            cnt++;
        }
        else{
            i = j;
            j++;
            k++;
        }
    }
    cout << n-cnt << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
