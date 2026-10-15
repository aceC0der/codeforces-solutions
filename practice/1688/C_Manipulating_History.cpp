/*
 * Problem   : 1688C - Manipulating History
 * Link      : https://codeforces.com/contest/1688/problem/C
 * Submission: https://codeforces.com/contest/1688/submission/159939875
 * Rating    : 1700   Tags: constructive algorithms, greedy, strings
 * Verdict   : Accepted (31 ms, 400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-08 (Practice)
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
        int n;
        cin >> n;
        n *= 2;
        vi freq(27, 0);
        rep(i, 0, n){
            string s;
            cin >> s;
            rep(j, 0, s.size()){
                // cout << (s[j]-'a') <<" ";
                freq[(int)(s[j]-'a')]++;
            }
            // cout << endl;
        }
        string s;
        cin >> s;
        rep(i, 0, s.size()){
            freq[(int)(s[i]-'a')]++;
        }
        rep(i, 0, 26){
            // cout << freq[i] << " " ;
            if(freq[i]&1) cout << (char)('a'+i) << endl;
        }
        // cout << endl;
    }
    return 0;
}
