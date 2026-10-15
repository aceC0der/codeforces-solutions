/*
 * Problem   : 1492B - Card Deck
 * Link      : https://codeforces.com/contest/1492/problem/B
 * Submission: https://codeforces.com/contest/1492/submission/108273318
 * Rating    : 1100   Tags: data structures, greedy, math
 * Verdict   : Accepted (62 ms, 1500 KB)
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

int main()
{
    I
    T{
        int n;
        cin >> n;
        vi a(n), pos;
        int c  = 0;
        rep(i, 0, n){
            cin >> a[i];
            if(a[i]>c){
                pos.pb(i);
                c = a[i];
            }
        }
        int sz = pos.size();
        pos.pb(n);
        pre(i, sz-1, 0){
            for(int j=pos[i]; j< pos[i+1]; j++){
                cout << a[j] << " ";
            }
        }
        
        cout << endl;
    }

    return 0;
}
