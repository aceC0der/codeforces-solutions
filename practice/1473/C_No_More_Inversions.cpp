/*
 * Problem   : 1473C - No More Inversions
 * Link      : https://codeforces.com/contest/1473/problem/C
 * Submission: https://codeforces.com/contest/1473/submission/104384800
 * Rating    : 1500   Tags: constructive algorithms, math
 * Verdict   : Accepted (46 ms, 4900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-15 (Practice)
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
        int n, k;
        cin >> n >> k;
        vi a, p;
        set<int> b;
        rep(i, 0, k){
            a.pb(i+1);
            //cout << i+1 << " ";
        }
        int x = k-1;
        rep(i, 0, n-k){
            //cout << x << " ";
            a.pb(x--);
        }
        x = a.size();
        pre(i, x-1, 0){
            int sz = b.size();
            b.insert(a[i]);
            if(sz<b.size()){
                p.pb(a[i]);
            }
        }
        reverse(all(p));
        rep(i, 0, k){
            cout << p[i] << " ";
        }
        cout << endl;
        
    }

    return 0;
}
