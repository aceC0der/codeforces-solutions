/*
 * Problem   : 1501A - Alexey and Train
 * Link      : https://codeforces.com/contest/1501/problem/A
 * Submission: https://codeforces.com/contest/1501/submission/109851791
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-03-13 (Contest)
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
        int n;
        cin >> n;
        vi tm(n);
        vpi ab(n);
        rep(i, 0 , n){
            cin >> ab[i].ff >> ab[i].ss;
        }
        rep(i, 0, n){
            cin >> tm[i];
        }
        ll ans = tm[0] + ab[0].ff;
        rep(i, 0, n-1){
            ans += (ab[i].ss-ab[i].ff)/2;
            if((ab[i].ss-ab[i].ff)%2){
                ans++;
            }
            if(ans < ab[i].ss){
                ans = ab[i].ss;
            }
            ans += (ab[i+1].ff-ab[i].ss) + tm[i+1];
            //cout << tm[i] << endl;
        }
        cout << ans << endl;
    }

    return 0;
}
