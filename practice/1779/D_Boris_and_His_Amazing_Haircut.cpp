/*
 * Problem   : 1779D - Boris and His Amazing Haircut
 * Link      : https://codeforces.com/contest/1779/problem/D
 * Submission: https://codeforces.com/contest/1779/submission/187876804
 * Rating    : 1700   Tags: constructive algorithms, data structures, dp, dsu, greedy, sortings
 * Verdict   : Accepted (390 ms, 35400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-04 (Practice)
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

const int MAX_N = 2e5+7;
const int LOG = 18;
int table[LOG][MAX_N];

void build(vi a){
    int n = a.size();
    rep(i, 0, n){
        table[0][i] = a[i];
    }
    rep(j, 1, LOG){
        for(int i=0; i+(1<<j)-1<n; i++){
            table[j][i] = max(table[j-1][i], table[j-1][i+(1<<(j-1))]); 
        }
    }
}

int query(int l, int r){
    int h = 31-__builtin_clz(r-l+1);
    return max(table[h][l], table[h][r-(1<<h)+1]);
}

void solve(){
    int n;
    cin >> n;
    vi a(n);
    vi b(n);
    bool f=true;
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    int m;
    cin >> m;
    vi r(m);
    rep(i, 0, m) cin >> r[i];
    map<int, int> freq;
    rep(i, 0, m) freq[r[i]]++;
    rep(i, 0, n) f&=(a[i]>=b[i]);
    if(!f){
        cout << "NO" << endl;
        return;
    }
    map<int, int> prev;
    map<int, int> cnt;
    build(b);
    rep(i, 0, n){
        if(prev.count(b[i])){
            int q = query(prev[b[i]]-1, i);
            // if(b[i]==5) cout <<prev[b[i]] << " " << i+1 << " " << q << endl;
            if(q>b[i]){
                cnt[b[i]]++;
            }
            prev[b[i]]=i+1;
        }
        else if(a[i]>b[i]){
            prev[b[i]]=i+1;
            cnt[b[i]]++;
        }
        // if(b[i]==5) cout << prev[b[i]] << endl;
    }
    for(auto p : cnt){
        // cout << p.ff << " " << p.ss << " " << freq[p.ff] << endl;
        f &= (p.ss<=freq[p.ff]);
    }
    cout << (f ? "YES" : "NO") << endl;

}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
