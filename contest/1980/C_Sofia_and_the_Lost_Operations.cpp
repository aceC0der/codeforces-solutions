/*
 * Problem   : 1980C - Sofia and the Lost Operations
 * Link      : https://codeforces.com/contest/1980/problem/C
 * Submission: https://codeforces.com/contest/1980/submission/263944043
 * Rating    : 1300   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (484 ms, 11100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-03 (Contest)
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
    vi a(n), b(n);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, n) cin >> b[i];
    map<int, int> freq;
    int cnt = 0;
    rep(i, 0, n){
        if(a[i]!=b[i]){
            cnt++;
            freq[b[i]]++;
        }
    }
    int m;
    cin >> m;
    // vi d(m);
    int x;
    map<int, int> freqD;
    rep(i, 0, m){
        cin >> x;
        freqD[x]++;
    }
    // if(cnt==0){
    //     rep(i, 0, n){
    //         if(freqD[b[i]]>0){
    //             cout << "YES" << endl;
    //             return;
    //         }
    //     }
    //     cout << "NO" << endl;
    //     return;
    // }
    // for(auto it: freq){
    //     cout << it.ff << " " << it.ss << endl;
    // }
    for(auto it: freq){
        int v = it.ff;
        int f = it.ss;
        // cout << v << " " << f << " " << freqD[v] << endl;
        if(freqD[v]<f){
            cout << "NO" << endl;
            return;
        }
    }
    rep(i, 0, n){
        if(b[i]==x){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
