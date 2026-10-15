/*
 * Problem   : 1984A - Strange Splitting
 * Link      : https://codeforces.com/contest/1984/problem/A
 * Submission: https://codeforces.com/contest/1984/submission/264869202
 * Rating    : 800   Tags: constructive algorithms
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-09 (Contest)
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
    if(a[0]==a[n-1]) {
        cout << "NO" << endl;
        return;
    }
    string s="";
    rep(i, 0, n) s+='R';
    bool f=false;
    cout << "YES" << endl;
    rep(i, 1, n){
        if(a[i]==a[i-1]){
            s[i]='B';
            cout << s << endl;
            return;
        }
    }
    s[0] = 'B';
    cout << s << endl;
    return;
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
