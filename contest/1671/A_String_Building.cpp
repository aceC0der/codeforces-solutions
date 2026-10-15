/*
 * Problem   : 1671A - String Building
 * Link      : https://codeforces.com/contest/1671/problem/A
 * Submission: https://codeforces.com/contest/1671/submission/154515905
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-04-22 (Contest)
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
        int sz = s.size();
        bool flag = true;
        int c = 0;
        char ch = s[0];
        rep(i, 0, sz){
            if(s[i]!='a' && s[i]!='b'){
                flag = false;
                break;
            }
            if(s[i]==ch){
                c++;
            }
            else{
                ch = s[i];
                if(c==1){
                    flag = false;
                    break;
                }
                c=1;
            }
        }
        // cout << c << endl;
        if(c==1){
            flag = false;
        }
        if(flag ){
            cout <<"YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
