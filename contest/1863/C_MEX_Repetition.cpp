/*
 * Problem   : 1863C - MEX Repetition
 * Link      : https://codeforces.com/contest/1863/problem/C
 * Submission: https://codeforces.com/contest/1863/submission/221142857
 * Rating    : 1100   Tags: implementation, math
 * Verdict   : Accepted (78 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-08-30 (Contest)
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

/*
    Analysis:
    -> Read the problem statement very carefully
    -> Find out what is given and what is wanted
    -> Try die hard to solve
    -> Prove your idea: why should it work?
    -> Eliminate your wrong ideas as soon as possible
    -> Have you missed any corner case?
    -> never miss post solving Analysis
 
    Remember:  You know what your capability is. Just believe in yourself and work very hard. GOD will never let you down.
*/

void solve(){
    ll n, k;
    cin >> n >> k;
    vi a(n);
    vector<bool> isFound(n+2);
    // rep(i, -1, n) st.insert(i+1);
    rep(i, 0, n){
        cin >> a[i];
        isFound[a[i]] = true;
    }
    if(n==1){
        if(k%2==0){
            cout << a[0] << endl;
        }
        else cout << (!a[0]) << endl;
        return;
    }
    int val = -1;
    rep(i, 0, n+1){
        if(!isFound[i]) {val=i; break;}
    }
    int shift = ((k%(n+1))-1)%n;
    int i=shift+1;
    vi ans(n+3);
    ans[shift] = val;
    int j = 0;
    while(j<n){
        if(i>=n) i=0, j++;
        ans[i] = a[j];
        j++;
        i++;
        // i%=n;
    }
    ans[shift] = val;
    rep(i, 0, n) cout << ans[i] << " "; cout << endl;
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
