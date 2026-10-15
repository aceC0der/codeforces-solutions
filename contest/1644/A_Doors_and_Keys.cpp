/*
 * Problem   : 1644A - Doors and Keys
 * Link      : https://codeforces.com/contest/1644/problem/A
 * Submission: https://codeforces.com/contest/1644/submission/147287198
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (0 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-02-22 (Contest)
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
#define pl pair<ll, ll>
#define vpi vector<pi >
#define vpl vector<pl >
#define endl '\n'
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
#define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)


int main()
{
    fios
    TestCases{
        string s;
        cin >> s;
        vector<bool> keys(4, false);
        bool ans = true;
        for(int i=0; i<6; i++){
            if(s[i]=='r'){
                keys[0]=true;
            }
            else if(s[i]=='g'){
                keys[1]=true;
            }
            else if(s[i]=='b'){
                keys[2]=true;
            }
            else if((s[i]=='R' && keys[0]==false) || (s[i]=='G' && keys[1]==false) || (s[i]=='B' && keys[2]==false)){
                ans = false;
                break;
            }
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
