/*
 * Problem   : 1529B - Sifid and Strange Subsequences
 * Link      : https://codeforces.com/contest/1529/problem/B
 * Submission: https://codeforces.com/contest/1529/submission/117905522
 * Rating    : 1100   Tags: greedy, math, sortings
 * Verdict   : Accepted (62 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-05-30 (Practice)
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
        ll n;
        cin >> n;
        ll x, ans = 0, zero = 0, mini = LONG_LONG_MAX, mina = LONG_LONG_MAX;
        vl a(n);
        rep(i, 0, n){
            cin >> a[i];
            if(a[i] < 1){
                ans++;
            }
        }
        sort(all(a));
        for(int i = 1; i<n && a[i]<=0; i++){
            mina = min(abs(a[i]-a[i-1]), mina);
        }
        //cout << mini << " " << mina << endl;
        if(ans != n && a[ans] <= mina){
            ans++;
        }
        
        cout << ans << endl;
    }

    return 0;
}
