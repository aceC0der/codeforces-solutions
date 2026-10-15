/*
 * Problem   : 1702D - Not a Cheap String
 * Link      : https://codeforces.com/contest/1702/problem/D
 * Submission: https://codeforces.com/contest/1702/submission/163524726
 * Rating    : 1000   Tags: greedy
 * Verdict   : Accepted (15 ms, 500 KB)
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
        int k;
        cin >> k;
        vi freq(27, 0);
        ll w = 0;
        int n = s.size();
        rep(i, 0, n){
            int x = s[i]-'a'+1;
            freq[x]++;
            w+=x;
        }
        vi f = freq;
        int i = 26;
        while(w>k){
            while(w>k&&f[i]>0){
                w-=i;
                f[i]--;
            }
            i--;
        }
        rep(i, 0, n){
            int x = s[i]-'a'+1;
            if(f[x]<freq[x]){
                f[x]++;
                s[i]='.';
            }
        }
        rep(i, 0, n){
            if(s[i]=='.') continue;
            cout << s[i];
        }
        cout << endl;

    }
    return 0;
}
