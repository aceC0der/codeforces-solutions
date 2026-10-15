/*
 * Problem   : 1804B - Vaccination
 * Link      : https://codeforces.com/contest/1804/problem/B
 * Submission: https://codeforces.com/contest/1804/submission/197555498
 * Rating    : 1000   Tags: greedy, implementation
 * Verdict   : Accepted (62 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-03-16 (Practice)
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

void solve(){
    int n,k,d,w;
    cin>>n>>k>>d>>w;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int b_sec=arr[n-1];
    int exp=d;
    int dwai=k;
    int wt=w;
    int cnt=0;
    for(int i=n-1;i>=0;i--)
    {
        if(dwai==0)
        {
            b_sec=arr[i];
            dwai=k;
            cnt++;
        }
        if(arr[i]<b_sec-exp-w)
        {
            b_sec=arr[i];
            dwai=k;
            cnt++;
        }
        dwai--;
    }
    
    cout << cnt+1 << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
