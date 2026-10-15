/*
 * Problem   : 1487B - Cat Cycle
 * Link      : https://codeforces.com/contest/1487/problem/B
 * Submission: https://codeforces.com/contest/1487/submission/107434064
 * Rating    : 1200   Tags: math, number theory
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-02-15 (Contest)
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
        ll n, k;
        cin >> n >> k;
        ll ans = k%n;
        if(k%n==0){
            ans = n;
        }
        if(n%2){
            int xtra_moves = k/(n/2); 
            if(k%(n/2)){
                xtra_moves++;
            }
            xtra_moves--;
            ans += xtra_moves%n;
            if(ans>n){
                ans%=n;
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}
