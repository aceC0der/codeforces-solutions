/*
 * Problem   : 1890A - Doremy's Paint 3
 * Link      : https://codeforces.com/contest/1890/problem/A
 * Submission: https://codeforces.com/contest/1890/submission/283813897
 * Rating    : 800   Tags: constructive algorithms
 * Verdict   : Accepted (46 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-01 (Practice)
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
#define vvi vector<vector<int>>
#define vb vector<bool>
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
    map<int, int> freq;
    rep(i, 0, n){
        int x;
        cin >> x;
        freq[x]++;
    }
    if(freq.size()==1){
        cout << "YES" << endl;
    }
    else if(freq.size()>2){
        cout << "NO" << endl;
    }else{
        auto it = freq.begin();
        auto it2 = freq.begin();
        it++;
        int diff = abs((*it).ss - it2->ss);
        if(diff==(n%2)){
            cout << "YES" << endl;
        }else cout << "NO" << endl;
    }
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
