/*
 * Problem   : 1660C - Get an Even String
 * Link      : https://codeforces.com/contest/1660/problem/C
 * Submission: https://codeforces.com/contest/1660/submission/152759498
 * Rating    : 1300   Tags: dp, greedy, strings
 * Verdict   : Accepted (15 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-05 (Practice)
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
        vector<bool> prev(27, false);
        int n = s.size(), m = 0;
        for(auto i:s){
            if(prev[i-'a']){
                m+=2;
                for(int j=0; j<26; j++) prev[j] = false;
            }
            else{
                prev[i-'a'] = true;
            }
        }
        cout << n-m << endl;
    }
    return 0;
}
