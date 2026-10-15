/*
 * Problem   : 1998A - Find K Distinct Points with Fixed Center
 * Link      : https://codeforces.com/contest/1998/problem/A
 * Submission: https://codeforces.com/contest/1998/submission/281936244
 * Rating    : 800   Tags: constructive algorithms, implementation, math
 * Verdict   : Accepted (62 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-09-20 (Practice)
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
    int x, y, k;
    cin >> x >> y >> k;
    if(k&1){
        k--;
        cout << x << " " << y << endl;
    }
    int cnt = 1;
    int i=0;
    while(k--){
        cout << x+cnt << " " << y << endl;
        // cout << x - (i & 1 ? 1 : -1) * (i / 2 + 1) << " " << y << "***\n";
        cout << x-cnt << " " << y << endl;
        cnt++;
        i++;
        k--;

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
