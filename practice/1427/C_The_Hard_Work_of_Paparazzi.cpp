/*
 * Problem   : 1427C - The Hard Work of Paparazzi
 * Link      : https://codeforces.com/contest/1427/problem/C
 * Submission: https://codeforces.com/contest/1427/submission/102939874
 * Rating    : 2000   Tags: dp
 * Verdict   : Accepted (717 ms, 2800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-01 (Practice)
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
    int dp[100005];
    vector<int> t;
    vpi p;
    int r, n;
    cin  >> r >> n;
    t.pb(0);
    p.pb(mp(1,1));
    rep(i, 0, n){
        dp[i]=0;
        int x, y;
        cin >> x;
        t.pb(x);
        cin >>x >> y;
        p.pb(mp(x, y));
    }
    int maxi = 0, ans=0;
    dp[n]=0;
    pre(i, n, 0){
        //ans = max(ans, dp[i]);
        pre(j, i-1, max(0, i-2000)){
            int dif = abs(p[i].ff-p[j].ff)+abs(p[i].ss-p[j].ss);
            if(dif<=abs(t[i]-t[j])){
                dp[j] = max(dp[j], dp[i]+1);
            }
        }
    }
    // rep(i, 0, n+1){
    //     cout << dp[i] << " ";
    // }
    // cout << endl;
    cout << dp[0] << endl;



    return 0;
}
