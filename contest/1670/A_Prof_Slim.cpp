/*
 * Problem   : 1670A - Prof. Slim
 * Link      : https://codeforces.com/contest/1670/problem/A
 * Submission: https://codeforces.com/contest/1670/submission/156083779
 * Rating    : 800   Tags: greedy, implementation, sortings
 * Verdict   : Accepted (61 ms, 400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-06 (Contest)
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
        int m = 0;
        rep(i, 0, n){
            cin >> arr[i];
            if(arr[i]<0){
                m++;
            }
        }
        rep(i, 0, n){
            if(arr[i]==0) continue;
            if(m){
                if(arr[i]>0) arr[i]*=-1;
                m--;
            }
            else{
                if(arr[i]<0) arr[i]*=-1;
            }
            // cout << arr[i] << " ";
        }
        // cout << endl;
        bool f = true;
        rep(i, 0, n-1){
            if(arr[i]>arr[i+1]){
                f = false;
                break;
            }
        }
        if(f){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
