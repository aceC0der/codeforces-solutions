/*
 * Problem   : 1820A - Yura's New Name
 * Link      : https://codeforces.com/contest/1820/problem/A
 * Submission: https://codeforces.com/contest/1820/submission/206999782
 * Rating    : 800   Tags: implementation, strings
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-05-24 (Practice)
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
    int n;
    n = s.size();
    vector<bool> f(n);
    int cnt = 0;
    rep(i, 0, n){
        int x = 0;
        while(i<n && s[i]=='_'){
            x++;
            i++;
        }
        if(x) cnt += x-1;
    }
    cnt += (s[0]!='^') + (s[n-1]!='^');
    if(n==1 && s[0]=='^') {
        cout << 1 << endl;
    }
    else{
        cout << cnt << endl;
    }
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
