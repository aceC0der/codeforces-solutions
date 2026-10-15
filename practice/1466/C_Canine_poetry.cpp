/*
 * Problem   : 1466C - Canine poetry
 * Link      : https://codeforces.com/contest/1466/problem/C
 * Submission: https://codeforces.com/contest/1466/submission/102903071
 * Rating    : 1300   Tags: dp, greedy, strings
 * Verdict   : Accepted (311 ms, 300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-31 (Practice)
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
#define T int tt,qq; cin>>tt; for(qq=1;qq<=tt;qq++)
#define I ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

int main()
{
    I
    T{
        string s;
        cin >> s;
        int n = s.size();
        int j = n-1;
        int ans = 0;
        if(s[0]==s[1]){
            ans++;
            s[1]='.';
        }
        rep(i, 2, n){
            if(s[i]==s[i-1] || s[i]==s[i-2]){
                ans++;
                s[i]='.';
            }
        }
        cout << ans << endl;
    }

    return 0;
}
