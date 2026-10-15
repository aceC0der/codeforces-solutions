/*
 * Problem   : 1837C - Best Binary String
 * Link      : https://codeforces.com/contest/1837/problem/C
 * Submission: https://codeforces.com/contest/1837/submission/209090633
 * Rating    : 1000   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (15 ms, 1000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-09 (Practice)
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
    string s;
    cin >> s;
    int n = s.size();
    rep(i, 0, n){
        if(s[i]=='0'){
            int j = i-1;
            while(j>=0 && s[j]=='?') s[j--] = '0';
            j = i+1;
            while(j<n && s[j]=='?') s[j++] = '0';
        }
    }
    rep(i, 0, n){
        if(s[i]=='?') s[i] = '1';
    }
    cout << s << endl;
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
