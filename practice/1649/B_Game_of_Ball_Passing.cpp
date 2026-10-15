/*
 * Problem   : 1649B - Game of Ball Passing
 * Link      : https://codeforces.com/contest/1649/problem/B
 * Submission: https://codeforces.com/contest/1649/submission/148630605
 * Rating    : 1300   Tags: greedy, implementation
 * Verdict   : Accepted (62 ms, 400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-03-06 (Practice)
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
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        ll sum = 0;
        for(int i=0; i<n-1; i++){
            sum+=arr[i];
        }
        if(arr[0]==0 && arr[n-1]==0){
            cout << 0 << endl;
            continue;
        }
        if(sum>=arr[n-1]){
            cout << 1 << endl;
        }
        else{
            cout <<  arr[n-1]-sum << endl;
        }
        
    }
    return 0;
}
