/*
 * Problem   : 1527B1 - Palindrome Game (easy version)
 * Link      : https://codeforces.com/contest/1527/problem/B1
 * Submission: https://codeforces.com/contest/1527/submission/118208415
 * Rating    : 1200   Tags: constructive algorithms, games
 * Verdict   : Accepted (46 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-06-02 (Practice)
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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll cnt_z = 0;
        rep(i, 0, n){
            if(s[i] == '0'){
                cnt_z++;
            }
        }
        if(cnt_z == 1){
            cout << "BOB" << endl;
            continue;
        }
        if(cnt_z%2){
            cout << "ALICE" << endl;
        }
        else{
            cout << "BOB" << endl;
        }

        
    }

    return 0;
}
