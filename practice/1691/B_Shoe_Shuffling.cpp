/*
 * Problem   : 1691B - Shoe Shuffling
 * Link      : https://codeforces.com/contest/1691/problem/B
 * Submission: https://codeforces.com/contest/1691/submission/160002696
 * Rating    : 1000   Tags: constructive algorithms, greedy, implementation, two pointers
 * Verdict   : Accepted (46 ms, 800 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-09 (Practice)
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
        cin >>n;
        vi arr(n);
        rep(i, 0, n){
            cin >> arr[i];
        }
        vi ans(n, -1);
        bool f = true;
        rep(i, 0, n)
        {
            int j = i+1;
            while(j<n && arr[i]==arr[j]){
                j++;
            }
            if((j-i)<2) {
                f = false;
                break;
            }
            j--;
            ans[i] = j+1;
            int k = i;
            while(k<j){
                ans[k+1] = k+1;
                k++;
            }
            // rep(i, 0, n){
            //     cout << ans[i] << " ";
            // }
            // cout << endl;
            i = j;
            // cout << i << endl;
        }
        if(f) {
            rep(i, 0, n){
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}
