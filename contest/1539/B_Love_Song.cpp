/*
 * Problem   : 1539B - Love Song
 * Link      : https://codeforces.com/contest/1539/problem/B
 * Submission: https://codeforces.com/contest/1539/submission/120098905
 * Rating    : 800   Tags: dp, implementation, strings
 * Verdict   : Accepted (358 ms, 1000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-06-20 (Contest)
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
        ll n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        ll a[n] = {0};
        //cout << s << n <<  q << endl;
        //int a[27] = {0};
        a[0] = ((int)s[0])-96;
        //cout << a[0] << " ";
        rep(i, 1, n){
            int j = ((int)s[i])-96;
            a[i] = a[i-1] + j;
            //cout << a[i] << " ";
        }
        //cout << endl;
        while(q--){
            ll l, r, len;
            cin >> l >> r;
            
            if(l == 1) len = a[r-1];
            else len = a[r-1] - a[l-2];
            //cout << endl;
            cout << len << endl;
        }

    return 0;
}
