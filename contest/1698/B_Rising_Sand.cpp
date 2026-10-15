/*
 * Problem   : 1698B - Rising Sand
 * Link      : https://codeforces.com/contest/1698/problem/B
 * Submission: https://codeforces.com/contest/1698/submission/162080567
 * Rating    : 800   Tags: constructive algorithms, greedy, implementation
 * Verdict   : Accepted (61 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-28 (Contest)
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
        int n, k;
        cin >> n >> k;
        vi arr(n);
        rep(i, 0, n){
            cin >> arr[i];
        }
        int cnt = 0;
        if(k==1){
            cnt = (n-2)/2 + (n-2)%2;
            cout <<cnt  << endl;
            continue;
        }
        rep(i, 1, n-1){
            if(arr[i]>(arr[i-1]+arr[i+1])){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
