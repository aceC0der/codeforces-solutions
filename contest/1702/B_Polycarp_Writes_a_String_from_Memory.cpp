/*
 * Problem   : 1702B - Polycarp Writes a String from Memory
 * Link      : https://codeforces.com/contest/1702/problem/B
 * Submission: https://codeforces.com/contest/1702/submission/163497972
 * Rating    : 800   Tags: greedy
 * Verdict   : Accepted (31 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-10 (Contest)
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
        int n = s.size();
        bool flag[27] ={false};
        int day = 0;
        rep(i, 0, n){
            map<char, bool> m;  
            vector<char> ch;    
            day++;
            m[s[i]]=true;
            ch.pb(s[i]);
            while(i<n && m[s[i]]){
                i++;
            }
            if(i>=n) break;
            m[s[i]]=true;
            ch.pb(s[i]);
            while(i<n && m[s[i]]){
                i++;
            }
            if(i>=n) break;
            m[s[i]]=true;
            ch.pb(s[i]);
            while(i<n && m[s[i]]){
                i++;
            }
            i--;

            // ch.clear();
        }
        cout << day << endl;
    }
    return 0;
}
