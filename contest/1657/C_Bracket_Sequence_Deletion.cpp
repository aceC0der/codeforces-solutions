/*
 * Problem   : 1657C - Bracket Sequence Deletion
 * Link      : https://codeforces.com/contest/1657/problem/C
 * Submission: https://codeforces.com/contest/1657/submission/150514255
 * Rating    : 1200   Tags: greedy, implementation
 * Verdict   : Accepted (15 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-03-22 (Contest)
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
        string s;
        cin >> s;
        int rem = n;
        int moves = 0;
        char ps;
        int pis;
        rep(i, 0, n){
            if(s[i]=='(' && i+1<n && s[i+1]==')'){
                rem-=2;
                moves++;
                i++;
                continue;
            }
            ps = s[i];
            int cnt = 1;
            i++;
            cnt++;
            while(i<n && s[i]!=ps){
                i++;
                cnt++;
            }
            if(s[i]==ps){
                rem -= cnt;
                moves++;
            }
        }
        cout << moves << " " << rem << endl;
    }
    return 0;
}
