/*
 * Problem   : 1703D - Double Strings
 * Link      : https://codeforces.com/contest/1703/problem/D
 * Submission: https://codeforces.com/contest/1703/submission/163878087
 * Rating    : 1100   Tags: brute force, data structures, strings
 * Verdict   : Accepted (295 ms, 7500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-12 (Contest)
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
        cin >>n;
        set<string> s;
        string ss;
        vector<string> v(n);
        rep(i, 0, n){
            cin >> v[i];
            s.insert(v[i]);
        }
        // int i = 0;
        string ans="";
        for(auto it : v){
            string curr = it;
            string s1, s2;
            int i =0;
            bool f = false;
            while(i<curr.size()){
                s1 = s2 ="";
                rep(j, 0, i+1){
                    s1.push_back(curr[j]);
                }
                rep(j, i+1, curr.size()){
                    s2.push_back(curr[j]);
                }
                if(s.count(s1) && s.count(s2)){
                    // cout << s1 << " " << s2 << endl;
                    ans.push_back('1');
                    f = true;
                    break;
                }
                i++;
            }
            if(!f) ans.push_back('0');
        }
        cout << ans << endl;
    }
    return 0;
}
