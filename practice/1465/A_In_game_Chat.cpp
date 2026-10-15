/*
 * Problem   : 1465A - In-game Chat
 * Link      : https://codeforces.com/contest/1465/problem/A
 * Submission: https://codeforces.com/contest/1465/submission/102406646
 * Rating    : 800   Tags: implementation, strings
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-26 (Practice)
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
        int n;
        string s;
        cin >> n >> s;
        int cnt=0;
        pre(i, n-1, 0){
            if(s[i]==')'){
                cnt++;
            }
            else
            {
                break;
            }
            
        }
        //cout << cnt << endl;
        if(cnt>n-cnt)
            cout << "Yes" << endl;
        else
        {
            cout << "No" << endl;
        }
        
    }

    return 0;
}
