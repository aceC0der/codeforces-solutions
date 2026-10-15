/*
 * Problem   : 1686C - Circular Local MiniMax
 * Link      : https://codeforces.com/contest/1686/problem/C
 * Submission: https://codeforces.com/contest/1686/submission/162266377
 * Rating    : 1100   Tags: constructive algorithms, greedy, sortings
 * Verdict   : Accepted (93 ms, 900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-29 (Practice)
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
        vi a(n);
        rep(i, 0, n){
            cin >> a[i];
        }
        if(n&1){
            cout << "NO" << endl;
            continue;
        }
        sort(all(a));
        vi b(n);
        int l = 0, r = n/2;
        rep(i, 0, n){
            if(i&1){
                b[i] = a[r];
                r++;
            }
            else{
                b[i] = a[l];
                l++;
            }
        }
        bool f = true;
        rep(i, 0, n){
            int prev = i-1;
            int nxt = i+1;
            if(prev<0) prev = n-1;
            if(nxt>=n) nxt = 0;
            if(i&1){
                if(b[i]<=b[prev] || b[i]<=b[nxt]){
                    f = false;
                    break;
                }
            }
            else{
                if(b[i]>=b[prev] || b[i]>=b[nxt]){
                    f = false;
                    break;
                }
            }
        }
        if(f){
            cout << "YES" << endl;
            rep(i, 0, n){
                cout << b[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}
