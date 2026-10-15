/*
 * Problem   : 1486A - Shifting Stacks
 * Link      : https://codeforces.com/contest/1486/problem/A
 * Submission: https://codeforces.com/contest/1486/submission/107809677
 * Rating    : 900   Tags: greedy, implementation
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-02-18 (Contest)
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
        ll xtra = 0;
        bool chk = true;
        ll a;
        rep(i, 0, n){
            cin >> a;
            a += xtra;
            xtra = a-i;
            //cout << xtra << endl;
            if(xtra<0){
                chk = false;
            }
        }
        if(chk){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }

    return 0;
}
