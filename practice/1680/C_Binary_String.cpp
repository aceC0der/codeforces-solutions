/*
 * Problem   : 1680C - Binary String
 * Link      : https://codeforces.com/contest/1680/problem/C
 * Submission: https://codeforces.com/contest/1680/submission/164017683
 * Rating    : 1600   Tags: binary search, greedy, strings, two pointers
 * Verdict   : Accepted (31 ms, 2500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-13 (Practice)
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

bool yo(vi& pos, int cost){
    int on = pos.size();
    if(cost>=on) return true;
    int x = on-cost;
    rep(i, 0, cost+1){
        int l = pos[i];
        int r = pos[i+x-1];
        int c = r-l+1-x;
        if(c<=cost) return true;
    }
    return false;
}

int main()
{
    fios
    TestCases{
        string s;
        cin >> s;
        int n = s.size();
        vi pos;
        rep(i, 0, n){
            if(s[i]=='1') pos.pb(i);
        }

        int l = 0, r = n;
        int ans = -1;
        while(l<=r){
            int mid = (l+r)/2;
            if(yo(pos, mid)){
                r = mid-1;
                ans = mid;
            }
            else{
                l = mid+1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
