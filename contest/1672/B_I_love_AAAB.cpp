/*
 * Problem   : 1672B - I love AAAB
 * Link      : https://codeforces.com/contest/1672/problem/B
 * Submission: https://codeforces.com/contest/1672/submission/154720267
 * Rating    : 800   Tags: constructive algorithms, implementation
 * Verdict   : Accepted (15 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-23 (Contest)
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
        // cout << s << endl;
        ll sz = s.size();
        bool fb = false;
        stack<int> st;
        bool f = true;
        for(int i = sz-1; i>=0; i--){
            // cout << fb << endl;
            if(s[i]!='A' && s[i]!='B'){
                f = false;
                break;
            }
            if(s[i]=='B'){
                st.push(1);
                fb = true;
            }
            if(s[i]=='A'){
                if(!st.empty()){
                    st.pop();
                }
                else if(fb){
                    continue;
                }
                else{
                    f = false;
                    break;
                }
            }
        }
        if(!st.empty()){
            f = false;
        }
        if(f){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
