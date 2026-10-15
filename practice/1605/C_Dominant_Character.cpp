/*
 * Problem   : 1605C - Dominant Character
 * Link      : https://codeforces.com/contest/1605/problem/C
 * Submission: https://codeforces.com/contest/1605/submission/225776545
 * Rating    : 1400   Tags: brute force, greedy, implementation, strings
 * Verdict   : Accepted (62 ms, 2000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-29 (Practice)
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
    #ifndef ONLINE_JUDGE
         freopen("input.txt", "r", stdin);
         freopen("output.txt", "w", stdout);
    #endif
    TestCases{
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a =0, b = 0, c = 0;
        int ans = INT_MAX;
        int prev = -1;
        int pb = -1, pc = -1;
        int cnt = 0;
        rep(i, 0, n){
            if(s[i]=='a'){
                cnt++;
                if(prev==-1) prev = i;
                else{
                    if(b<2 && c<2) ans = min(ans, i-prev+1);
                    else if(((pb==2 && c==2 && pc==0 && b==0) || (pc==2 && b==2 && pb==0 && c==0)) && cnt>=3) ans = min(ans, 7);
                    pb = b, pc = c;

                    prev = i;
                }
                b = c = 0;
            }
            if(s[i]=='b') b++;
            else if(s[i]=='c') c++;
        }
        if(ans==INT_MAX) ans = -1;
        cout << ans << endl;
    }
    return 0;
}
