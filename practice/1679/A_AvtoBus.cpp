/*
 * Problem   : 1679A - AvtoBus
 * Link      : https://codeforces.com/contest/1679/problem/A
 * Submission: https://codeforces.com/contest/1679/submission/157449540
 * Rating    : 900   Tags: brute force, greedy, math, number theory
 * Verdict   : Accepted (15 ms, 1000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-17 (Practice)
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
        ll n;
        cin >> n;
        ll mn = n/6;
        ll mx;
        if(n<4){
            cout << -1 << endl;
            continue;
        }
        if(n%6==4 || n%6==2){
            mn++;
        }
        else if(n%6!=0){
            cout << -1 << endl;
            continue;
        }
        mx = n/4;
        cout << mn << " " << mx << endl;
    }
    return 0;
}
