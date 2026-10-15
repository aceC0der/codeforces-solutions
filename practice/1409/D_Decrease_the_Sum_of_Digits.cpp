/*
 * Problem   : 1409D - Decrease the Sum of Digits
 * Link      : https://codeforces.com/contest/1409/problem/D
 * Submission: https://codeforces.com/contest/1409/submission/104528697
 * Rating    : 1500   Tags: greedy, math
 * Verdict   : Accepted (93 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-16 (Practice)
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
        string n;
        int s;
        cin >> n >> s;
        int curs = 0;
        int sz = n.size();
        rep(i, 0, sz){
            curs += (int)(n[i]-'0');
        }
        ll moves=0, cpos=sz-1, p=1;
        
        while(curs>s){
            //cout << n << endl;
            int dig = (int)(n[cpos]-'0');
            curs-=dig;
            moves+=p*(10-dig);
            n[cpos]='0';
            p*=10;
            cpos--;
            while(cpos>=0 && n[cpos]=='9'){
                n[cpos]='0';
                curs-=9;
                cpos--;
                p*=10;
            }
            if(cpos<0)
                break;
            curs++;
            n[cpos]++;
        }
        cout << moves << endl;
    }

    return 0;
}
