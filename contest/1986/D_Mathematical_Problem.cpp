/*
 * Problem   : 1986D - Mathematical Problem
 * Link      : https://codeforces.com/contest/1986/problem/D
 * Submission: https://codeforces.com/contest/1986/submission/267038486
 * Rating    : 1400   Tags: brute force, dp, greedy, implementation, math, two pointers
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-06-23 (Contest)
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

int num(char a){
    return (a-'0');
}

int toNum(char a, char b){
    return (num(a)*10)+num(b);
}


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n<=2){
        cout << toNum(s[0], s[1]) << endl;
        return;
    }
    if(n==3){
        // cout << s << endl;
        int mn = INT_MAX;
        mn = num(s[0])*toNum(s[1], s[2]);
        mn = min(mn, num(s[0])+toNum(s[1], s[2]));
        // cout << mn << "****" << endl;
        mn = min(mn, num(s[2])*toNum(s[0], s[1]));
        mn = min(mn, num(s[2])+toNum(s[0], s[1]));
        cout << mn << endl;
        return;
    }
    int sum = 0;
    rep(i, 0, n){
        if(s[i]=='0'){
            cout << 0 << endl;
            return;
        }
        if(s[i]!='1') sum+=num(s[i]);
    }
    int mn = INT_MAX;
    rep(i, 0, n-1){
        int a = num(s[i]);
        int b = num(s[i+1]);
        int ab = toNum(s[i], s[i+1]);
        int minus = 0;
        if(a>1) minus+=a;
        if(b>1) minus+=b;
        mn = min(mn, sum-minus+ab);
    }
    cout << mn << endl;
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
