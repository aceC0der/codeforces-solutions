/*
 * Problem   : 1728B - Best Permutation
 * Link      : https://codeforces.com/contest/1728/problem/B
 * Submission: https://codeforces.com/contest/1728/submission/171381882
 * Rating    : 800   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (15 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-08 (Contest)
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
    int n;
    cin >> n;
    if(n%2==0){
        int x = 2;
        while(x<n-1){
            cout << x << " " << x-1 << " ";
            x+=2;
        }
        cout << n-1 << " " << n;
    }
    else{
        rep(i, 0, 3){
            cout << i+1 << " ";
        }
        int x = 5;
        while(x<n-1){
            cout << x << " " << x-1 << " ";
            x+=2;
        }
        cout << n-1 << " " << n;
    }
    cout << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
