/*
 * Problem   : 1624D - Palindromes Coloring
 * Link      : https://codeforces.com/contest/1624/problem/D
 * Submission: https://codeforces.com/contest/1624/submission/164998901
 * Rating    : 1400   Tags: binary search, greedy, sortings, strings
 * Verdict   : Accepted (15 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-20 (Practice)
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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vl freq(26, 0);
        rep(i, 0, n){
            freq[s[i]-'a']++;
        }
        ll sum, odd;
        sum = odd = 0;
        rep(i, 0, 26){
            if(freq[i]&1){
                odd++;
                sum+=(freq[i]-1);
            }
            else sum+=freq[i];
        }
        ll sm = sum/k;
        odd+=sum%k;
        ll ans = sm + (((odd/k)>0) && (sm%2==0));
        cout << ans << endl;
    }
    return 0;
}
