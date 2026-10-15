/*
 * Problem   : 1697C - awoo's Favorite Problem
 * Link      : https://codeforces.com/contest/1697/problem/C
 * Submission: https://codeforces.com/contest/1697/submission/160326497
 * Rating    : 1400   Tags: binary search, constructive algorithms, data structures, greedy, implementation, strings, two pointers
 * Verdict   : Accepted (1450 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-12 (Contest)
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
        int n;
        cin >> n;
        string s, t;
        cin >> s;
        cin >> t;
        // cout << s << " " << t << endl;
        char sr;
        bool f = true;
        rep(i, 0, n){
            if(s[i]!=t[i]){
                if(s[i]=='b' && t[i]=='c'){
                    sr = 'c';
                }
                else if(s[i]=='a' && t[i]=='b'){
                    sr = 'b';
                }
                else{
                    f = false;
                    break;
                }
                int j = i+1;
                bool ff = false;
                while(j<n){
                    if(sr=='c'){
                        if(s[j]=='a'){
                            break;
                        }
                    }
                    else if (sr=='b'){
                        if(s[j]=='c'){
                            break;
                        }
                    }
                    if(s[j]==sr){
                        ff = true;
                        break;
                    }
                    j++;
                }
                if(ff){
                    swap(s[i], s[j]);
                }
                else{
                    f = false;
                    break;
                }
            }
        }
        // cout << s << endl << t << endl;
        if(f ){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
