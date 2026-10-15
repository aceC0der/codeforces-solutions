/*
 * Problem   : 1682A - Palindromic Indices
 * Link      : https://codeforces.com/contest/1682/problem/A
 * Submission: https://codeforces.com/contest/1682/submission/158011184
 * Rating    : 800   Tags: greedy, strings
 * Verdict   : Accepted (15 ms, 400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-22 (Contest)
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
        string s;
        cin >> s;
        int mid;
        int ans = 0;
        if(n%2){
            mid = n/2;
            char ch = s[mid];
            while(mid>=0 && ch == s[mid]){
                mid--;
                ans++;
            }
            ans = 2*ans -1;
        }
        else{
            mid = n/2-1;
            char ch = s[mid];
            while(mid>=0 && ch == s[mid]){
                mid--;
                ans++;
            }
            ans = 2*ans;
        }
        cout << ans << endl;

    }
    return 0;
}
