/*
 * Problem   : 1775B - Gardener and the Array
 * Link      : https://codeforces.com/contest/1775/problem/B
 * Submission: https://codeforces.com/contest/1775/submission/189744213
 * Rating    : 1300   Tags: bitmasks, constructive algorithms
 * Verdict   : Accepted (124 ms, 6100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-19 (Practice)
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
// const int N = 2e5+9;
// int freq[N];

void solve(){
    int n;
    cin >> n;
    vector<vi> a(n);
    map<int, int> freq;
    rep(i, 0, n){
        int x; 
        cin >> x;
        bool ff = true;
        a[i].resize(x);
        rep(j, 0, x){
            int y;
            cin >> y;
            freq[y]++;
            a[i][j] = y;
        }
    }
    bool f = true;
    rep(i, 0, n){
        f = true;
        rep(j, 0, a[i].size()){
            f &= (freq[a[i][j]]>1);
            if(!f) break;
        }
        if(f){
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
