/*
 * Problem   : 1513A - Array and Peaks
 * Link      : https://codeforces.com/contest/1513/problem/A
 * Submission: https://codeforces.com/contest/1513/submission/116246896
 * Rating    : 800   Tags: constructive algorithms, implementation
 * Verdict   : Accepted (15 ms, 0 KB)
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
        int max_peak = n/2;
        if(n%2 == 0){
            max_peak--;
        }
        if(k> max_peak){
            cout << -1 << endl;
        }
        else{
            int i = 1;
            int cnt = 0;
            cout << 1 << " ";
            while(cnt < n-1){
                if(k){
                    k--;
                    cout << i+2 << " " << i+1 << " ";
                    cnt += 2;
                    i += 2;
                }
                else{
                    i++;
                    cout << i << " ";
                    cnt++;
                }
            }
            cout << endl;
        }
    }

    return 0;
}
