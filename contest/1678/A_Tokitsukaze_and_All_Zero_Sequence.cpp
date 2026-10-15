/*
 * Problem   : 1678A - Tokitsukaze and All Zero Sequence
 * Link      : https://codeforces.com/contest/1678/problem/A
 * Submission: https://codeforces.com/contest/1678/submission/156304237
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (15 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-08 (Contest)
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
        int zr = 0;
        set<int> s;
        bool isdup = 0;
        rep(i, 0, n){
            cin >> arr[i];
            if(isdup==false && zr==0){
                int sz = s.size();
                s.insert(arr[i]);
                if(sz==s.size()){
                    isdup=true;
                }
            }
            if(arr[i]==0) zr++;
        }
        // cout << zr << " " << isdup << endl;
        ll ans;
        if(zr){
            ans = n-zr;
        }
        else{
            if(isdup){
                ans = n;
            }
            else{
                ans = n+1;
            }
        }
        cout << ans << endl;

    }
    return 0;
}
