/*
 * Problem   : 1673B - A Perfectly Balanced String?
 * Link      : https://codeforces.com/contest/1673/problem/B
 * Submission: https://codeforces.com/contest/1673/submission/155491127
 * Rating    : 1100   Tags: brute force, greedy, strings
 * Verdict   : Accepted (15 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-01 (Practice)
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
        ll n = s.size();
        vl freq(26, -1);
        int cnt = 0;
        rep(i, 0, n){
            ll m = s[i]-'a';
            if(freq[m]==-1) {
                freq[m]=0;
                cnt++;
            }
        }
        bool f = true;
        rep(i, 0, n){
            if(s[i]!=s[i%cnt]){
                f = false;
                break;
            }
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
