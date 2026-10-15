/*
 * Problem   : 1474A - Puzzle From the Future
 * Link      : https://codeforces.com/contest/1474/problem/A
 * Submission: https://codeforces.com/contest/1474/submission/104779918
 * Rating    : 800   Tags: greedy
 * Verdict   : Accepted (31 ms, 300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-19 (Contest)
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
        string s;
        cin >> s;
        cout << 1 ;
        int st = 1+(s[0]-'0');
        rep(i, 1, n){
            if(st==1+(s[i]-'0')){
                cout << 0;
                st=0+s[i]-'0';
            }
            else{
                cout << 1 ;
                st=1+s[i]-'0';
            }
            //cout << "st:" << st<< endl;
        }
        cout << endl;

        
    }

    return 0;
}
