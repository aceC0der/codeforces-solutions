/*
 * Problem   : 1831B - Array merging
 * Link      : https://codeforces.com/contest/1831/problem/B
 * Submission: https://codeforces.com/contest/1831/submission/207917680
 * Rating    : 1000   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (265 ms, 17500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-31 (Practice)
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

int ma[(int)1e6];
int mb[(int)1e6];

void solve(){
    int n;
    cin >> n;
    vi a(n);
    vi b(n);
    // map<int, int> ma;
    // map<int, int> mb;
    set<int> s;
    rep(i, 0, n){
        cin >> a[i];
        s.insert(a[i]);
        ma[a[i]] = 0;
        mb[a[i]] = 0;
    }
    rep(i, 0, n){
        cin >> b[i];
        s.insert(b[i]);
        mb[b[i]] = 0;
        ma[b[i]] = 0;
    }

    int i=0;
    while(i<n){
        int cnt = 1;
        int crnt = a[i];
        i++;
        while(i<n && a[i]==crnt){
            cnt++;
            i++;
        }
        ma[crnt] = max(ma[crnt], cnt);
        // cout << crnt << " " << ma[crnt] << endl;
    }
    i = 0;
    while(i<n){
        int cnt = 1;
        int crnt = b[i];
        i++;
        while(i<n && b[i]==crnt){
            cnt++;
            i++;
        }
        mb[crnt] = max(mb[crnt], cnt);
        // cout << crnt << " " << mb[crnt] << " ** " << endl;
    }
    int ans = 0;
    for(auto it: s){
        // cout << it << " " << ma[it] << " " << mb[it] << endl;
        ans = max(ans, ma[it]+mb[it]);
    }
    cout << ans << endl;
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
