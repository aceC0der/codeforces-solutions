/*
 * Problem   : 1391B - Fix You
 * Link      : https://codeforces.com/contest/1391/problem/B
 * Submission: https://codeforces.com/contest/1391/submission/104921573
 * Rating    : 800   Tags: brute force, greedy, implementation
 * Verdict   : Accepted (31 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-20 (Practice)
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
#define vpi vector<pi>
#define T int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define I ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

int main()
{
    I
    T{
        int n, m;
        cin >> n >> m;
        string s[n];
        bool chk = true;
        rep(i, 0, n){
            cin >> s[i];
        }
        int ans=0, a=0;
        rep(i, 0, n-1){
            if(s[i][m-1]=='R'){
                ans++;
            }
        }
        rep(i, 0, m-1){
            if(s[n-1][i]=='D'){
                ans++;
            }
        }
        cout << ans << endl;

    }

    return 0;
}
