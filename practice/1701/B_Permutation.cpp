/*
 * Problem   : 1701B - Permutation
 * Link      : https://codeforces.com/contest/1701/problem/B
 * Submission: https://codeforces.com/contest/1701/submission/163428718
 * Rating    : 800   Tags: greedy
 * Verdict   : Accepted (46 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-10 (Practice)
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
        vector<bool> flag(n+1, false);
        int i=1;
        int k = 2;
        vector<int> ans(n+1);
        int j =0;
        cout << 2 << endl;
        while(j<n){
            while(i<=n && j<n){
                flag[i] = true;
                cout << i << " ";
                i*=2;
                j++;
            }
            while(flag[k]){
                k++;
            }
            i = k;
            k++;
        }
        cout << endl;
    }
    return 0;
}
