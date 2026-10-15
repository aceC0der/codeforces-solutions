/*
 * Problem   : 1708C - Doremy's IQ
 * Link      : https://codeforces.com/contest/1708/problem/C
 * Submission: https://codeforces.com/contest/1708/submission/164705117
 * Rating    : 1600   Tags: binary search, greedy
 * Verdict   : Accepted (46 ms, 500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-18 (Practice)
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
        int n, q;
        cin >> n >> q;
        int arr[n];
        rep(i, 0, n){
            cin >> arr[i];
        }
        int Q = 0;
        string s(n, '0');
        pre(i, n-1, 0){
            if(Q<q){
                if(arr[i]>Q) Q++;
                s[i]++;
            }
            else if(Q==q && arr[i]<=q) s[i]++;
        }
        cout << s << endl;
    }
    return 0;
}
