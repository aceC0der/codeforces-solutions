/*
 * Problem   : 1509A - Average Height
 * Link      : https://codeforces.com/contest/1509/problem/A
 * Submission: https://codeforces.com/contest/1509/submission/116230700
 * Rating    : 800   Tags: constructive algorithms
 * Verdict   : Accepted (31 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-05-15 (Practice)
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
        int n, x;
        cin >> n;
        vi even, odd;
        rep(i, 0, n){
            cin >> x;
            if(x % 2){
                odd.pb(x);
            }
            else{
                even.pb(x);
            }
        }
        int even_len = even.size();
        int odd_len = n - even_len;
        
        rep(i, 0, even_len){
            cout << even[i] << " ";
        }
        rep(i, 0, odd_len){
            cout << odd[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
