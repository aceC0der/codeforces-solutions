/*
 * Problem   : 1696C - Fishingprince Plays With Array
 * Link      : https://codeforces.com/contest/1696/problem/C
 * Submission: https://codeforces.com/contest/1696/submission/162181043
 * Rating    : 1400   Tags: constructive algorithms, greedy, implementation, math
 * Verdict   : Accepted (62 ms, 3700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-29 (Practice)
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

vector<pair<ll, ll>> process(vector<int> arr, int m){
    vector<pair<ll, ll>> ret;
    rep(i, 0, arr.size()){
        int y = 1;
        while(arr[i]%m==0){
            arr[i]/=m;
            y*=m;
        }
        if(!ret.empty() && ret.back().first==arr[i]){
            ret.back().second+=y;
        }
        else{
            ret.emplace_back(arr[i], y);
        }
    }
    return ret;
}

int main()
{
    fios
    TestCases{
        int n, m;
        cin >> n >> m;
        vi a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        auto pa = process(a, m);
        int k;
        cin >> k;
        vi b(k);
        rep(i, 0, k){
            cin >> b[i];
        }
        auto pb = process(b, m);
        cout << (pa==pb ? "Yes" : "No" ) << endl;
    }
    return 0;
}
