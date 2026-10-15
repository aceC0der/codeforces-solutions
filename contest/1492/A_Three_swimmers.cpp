/*
 * Problem   : 1492A - Three swimmers
 * Link      : https://codeforces.com/contest/1492/problem/A
 * Submission: https://codeforces.com/contest/1492/submission/108249091
 * Rating    : 800   Tags: math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-02-23 (Contest)
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

ll getAns(ll p, ll a){
    if(p%a){
        return (ll)p/a + 1;
    }
    return (ll)p/a;
}

int main()
{
    I
    T{
        ll p, a, b, c;
        cin >> p >> a >> b >> c;

        ll ans=1000000000000000000;
        if(p==0) ans=0;
        else{
            ans = min(ans, (getAns(p, a)*a-p));
            ans = min(ans, (getAns(p, b)*b-p));
            ans = min(ans, (getAns(p, c)*c-p));
        }
        cout << ans << endl;
    }

    return 0;
}
