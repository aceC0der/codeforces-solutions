/*
 * Problem   : 1459A - Red-Blue Shuffle
 * Link      : https://codeforces.com/contest/1459/problem/A
 * Submission: https://codeforces.com/contest/1459/submission/102477141
 * Rating    : 800   Tags: math, probabilities
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-27 (Practice)
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
#define fi(n) for(ll i=0;i<n;i++)
#define fj(n) for(ll j=0;j<n;j++)
#define T int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define I ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

int main()
{
    I
    T{
        int r, b, sz, cntr=0, eq=0, cntb=0;
        string red, blue;
        cin >> sz >> red >> blue;
        rep(i, 0, sz){
            if(red[i]>blue[i])
                cntr++;
            else if(red[i]<blue[i])
                cntb++;
        }
        if(cntr>cntb)
            cout << "RED" << endl;
        else if(cntb>cntr)
            cout << "BLUE" << endl;
        else
        {
            cout << "EQUAL" << endl;
        }
        
    }

    return 0;
}
