/*
 * Problem   : 1674B - Dictionary
 * Link      : https://codeforces.com/contest/1674/problem/B
 * Submission: https://codeforces.com/contest/1674/submission/155607676
 * Rating    : 800   Tags: combinatorics, math
 * Verdict   : Accepted (0 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-02 (Contest)
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
        int ans = 0;
        int x = s[0]-'a', y = (s[1]-'a')+1;
        ans += x*25;
        if(y>x){
            ans+=(y-1);
        }
        else{
            ans+=y;
        }
        cout << ans << endl;
    }
    return 0;
}
