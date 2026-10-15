/*
 * Problem   : 1673A - Subtle Substring Subtraction
 * Link      : https://codeforces.com/contest/1673/problem/A
 * Submission: https://codeforces.com/contest/1673/submission/155404115
 * Rating    : 800   Tags: games, greedy, strings
 * Verdict   : Accepted (30 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-30 (Contest)
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


int main()
{
    fios
    TestCases{
        string s;
        cin >> s;
        int l = s.size();
        if(l==1){
            cout << "Bob ";
        }
        else{
            cout << "Alice ";
        }
        ll sum = 0;
        rep(i, 0, l){
            sum += (ll)(s[i]-'a')+1;
        }
        ll x = 0;
        
        if(l&1 && l!=1){
            x = min(s[0]-'a', s[l-1]-'a')+1;
            // cout << "x " << x << endl;
            sum-=x;
        }
        ll ans = sum - x;
        cout << ans << endl;
    }
    return 0;
}
