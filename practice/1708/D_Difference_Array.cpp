/*
 * Problem   : 1708D - Difference Array
 * Link      : https://codeforces.com/contest/1708/problem/D
 * Submission: https://codeforces.com/contest/1708/submission/164732011
 * Rating    : 1900   Tags: brute force, sortings
 * Verdict   : Accepted (93 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-18 (Practice)
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
    TestCases{
        int n;
        cin >> n;
        vi a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        int cnt = 0;
        while(a.size()>1){
            vi b;
            rep(i, 1, a.size()){
                int diff = a[i]-a[i-1];
                if(diff){
                    b.pb(diff);
                }
                else cnt++;
            }
            if(cnt) {
                b.pb(0);
                cnt--;
            }
            sort(all(b));
            a = b;
        }
        cout << a[0] << endl;
        
    }
    return 0;
}
