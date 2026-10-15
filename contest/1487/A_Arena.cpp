/*
 * Problem   : 1487A - Arena
 * Link      : https://codeforces.com/contest/1487/problem/A
 * Submission: https://codeforces.com/contest/1487/submission/107417546
 * Rating    : 800   Tags: implementation, sortings
 * Verdict   : Accepted (46 ms, 100 KB)
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
        int n, mini, b;
        cin >> n;
        vi a(n);
        bool chk = true;
        
        rep(i, 0, n){
            cin >> a[i];
        }
        sort(all(a));
        rep(i, 0, n){
            b = i;
            if(a[i]!=a[i+1]){
                chk = true;
                break;
            }
        }
        b++;
        cout << n-b << endl;
    }

    return 0;
}
