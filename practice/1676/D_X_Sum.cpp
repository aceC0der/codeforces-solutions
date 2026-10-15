/*
 * Problem   : 1676D - X-Sum
 * Link      : https://codeforces.com/contest/1676/problem/D
 * Submission: https://codeforces.com/contest/1676/submission/156997390
 * Rating    : 1000   Tags: brute force, greedy, implementation
 * Verdict   : Accepted (46 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-13 (Practice)
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

ll score(int p, int q, int** arr, int n, int m){
    ll sc = 0;
    int i = 0, j = 0;
    while(i<p && j<q){
        sc += arr[i][j];
        i++;
        j++;
    }
    i = p+1, j = q+1;
    while(i<n && j<m){
        sc += arr[i][j];
        i++;
        j++;
    }
    i = p-1, j = q+1;
    while(i>=0 && j<m){
        sc += arr[i][j];
        i--;
        j++;
    }
    i = p+1, j = q-1;
    while(i<n && j>=0){
        sc += arr[i][j];
        i++;
        j--;
    }
    sc+= arr[p][q];

    return sc;
}

int main()
{
    fios
    TestCases{
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int mx = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int now = 0;
                int ci = i, cj = j;
                while(ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    now+=a[ci][cj];
                    ci--;
                    cj--;
                }
                ci = i, cj = j;
                while(ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    now+=a[ci][cj];
                    ci++;
                    cj--;
                }
                ci = i, cj = j;
                while(ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    now+=a[ci][cj];
                    ci--;
                    cj++;
                }
                ci = i, cj = j;
                while(ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    now+=a[ci][cj];
                    ci++;
                    cj++;
                }
                now-=a[i][j]*3;
                mx = max(mx, now);
            }
        }
        cout << mx << endl;
    }
    return 0;
}
