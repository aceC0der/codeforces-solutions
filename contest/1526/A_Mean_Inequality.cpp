/*
 * Problem   : 1526A - Mean Inequality
 * Link      : https://codeforces.com/contest/1526/problem/A
 * Submission: https://codeforces.com/contest/1526/submission/117608522
 * Rating    : 800   Tags: constructive algorithms, sortings
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-05-28 (Contest)
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
        n *= 2;
        vl a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        sort(all(a));
        ll l = 0, r = n-1, i = 0;
        while(i<n){
            if(i%2){
                cout << a[r] << " ";
                r--;
            }
            else{
                cout << a[l] << " ";
                l++;
            }
            i++;
        }
        cout << endl;
    }

    return 0;
}
