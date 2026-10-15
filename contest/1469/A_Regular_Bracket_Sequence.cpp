/*
 * Problem   : 1469A - Regular Bracket Sequence
 * Link      : https://codeforces.com/contest/1469/problem/A
 * Submission: https://codeforces.com/contest/1469/submission/102596151
 * Rating    : 1000   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-28 (Contest)
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
        string s;
        cin >> s;
        bool flag=false;
        int a=0;
        int len = 0;
        len = s.size();
        int chk = len%2;
        if(chk || s[0]==')' || s[len-1]=='(')
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
        }
            
        
    }

    return 0;
}
