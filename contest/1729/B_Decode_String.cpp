/*
 * Problem   : 1729B - Decode String
 * Link      : https://codeforces.com/contest/1729/problem/B
 * Submission: https://codeforces.com/contest/1729/submission/171849024
 * Rating    : 800   Tags: greedy, strings
 * Verdict   : Accepted (30 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-12 (Contest)
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
    string s;
    cin >> s;
    string ans="";
    pre(i, n-1, 0){
        int x;
        if(s[i]=='0'){
            i--;
            x = (s[i]-'0');
            i--;
            x += 10*(s[i]-'0');
        }
        else{
            x = (s[i]-'0');
        }
        // cout << x << endl;
        char ch = 'a'+x-1;
        ans+=ch;
    }
    reverse(all(ans));
    cout << ans << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
