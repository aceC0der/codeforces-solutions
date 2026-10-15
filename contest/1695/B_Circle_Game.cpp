/*
 * Problem   : 1695B - Circle Game
 * Link      : https://codeforces.com/contest/1695/problem/B
 * Submission: https://codeforces.com/contest/1695/submission/161083269
 * Rating    : 1000   Tags: games, greedy
 * Verdict   : Accepted (15 ms, 200 KB)
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
        int n;
        cin >> n;
        vi arr(n);
        rep(i, 0, n){
            cin >> arr[i];
        }
        if(n&1){
            cout << "Mike" << endl;
        }
        else{
            // int mini = -1;
            int minIdx = 0;
            for(int i=0; i<n;i+=2) {
                if(arr[i]<arr[minIdx]){
                    minIdx = i;
                }
            }
            // cout << minIdx << endl;
            int m1 = INT_MAX;
            int m2 = m1;
            int mini = arr[minIdx];
            for(int i=1; i<minIdx; i+=2){
                m1 = min(m1, arr[i]-mini);
            }
            for(int i=minIdx+1; i<n; i+=2){
                m2 = min(m2, arr[i]-mini+1);
            }
            int mm  = min(m1, m2);
            // cout << mm << " " << m1 << " " << m2 << endl;
            if(mm<=0){
                cout << "Mike" << endl;
            }
            else{
                cout << "Joe" << endl;
            }
        }
    }
    return 0;
}
