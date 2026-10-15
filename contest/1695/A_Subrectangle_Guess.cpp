/*
 * Problem   : 1695A - Subrectangle Guess
 * Link      : https://codeforces.com/contest/1695/problem/A
 * Submission: https://codeforces.com/contest/1695/submission/161055012
 * Rating    : 800   Tags: games
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-18 (Contest)
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
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        int mini = INT_MIN;
        rep(i, 0, n){
            rep(j, 0, m){
                cin >> arr[i][j];
                mini = max(arr[i][j], mini);
            }
        }
        int min_area = INT_MAX;
        int h, w;
        rep(i, 0, n){
            rep(j, 0, m){
                if(arr[i][j]==mini){
                    h = max(i+1, n-i);
                    w = max(j+1, m-j);
                    min_area = min(min_area, h*w);
                }
            }
        }
        cout << min_area << endl;

    }
    return 0;
}
