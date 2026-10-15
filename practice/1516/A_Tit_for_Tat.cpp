/*
 * Problem   : 1516A - Tit for Tat
 * Link      : https://codeforces.com/contest/1516/problem/A
 * Submission: https://codeforces.com/contest/1516/submission/116209954
 * Rating    : 800   Tags: greedy
 * Verdict   : Accepted (15 ms, 100 KB)
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
        int n, k;
        cin >> n >> k;
        vi a(n);
        rep(i, 0, n){
            cin >> a[i];

        }
        int f_pos = n-1, s_pos = 0;
        rep(i, 0, n-1){
            while(a[i]>0 && k){
                a[i]--;
                a[f_pos]++;
                k--;
            }
            if(k == 0)
                break;
        }

        rep(i, 0, n){
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
