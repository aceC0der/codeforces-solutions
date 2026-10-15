/*
 * Problem   : 1712C - Sort Zero
 * Link      : https://codeforces.com/contest/1712/problem/C
 * Submission: https://codeforces.com/contest/1712/submission/168137460
 * Rating    : 1100   Tags: greedy, sortings
 * Verdict   : Accepted (46 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-13 (Contest)
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
    cin >>n;
    vi a(n);
    vi freq(n+1, 0);
    rep(i, 0, n){
        cin >> a[i];
        freq[a[i]]++;
    }
    pre(i, n-1, 0){
        bool f=false;
        int x = a[i];
        if(i<n-1 && a[i]>a[i+1]){
            break;
        }
        while(--freq[x] && --i>=0){
            if(a[i]!=x){
                f = true;
                break;
            }
        }
        if(f){
            break;
        }
    }
    int cnt = 0;
    rep(i, 0, n+1){
        if(freq[i]>0) cnt++;
    }
    cout << cnt << endl;


}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
