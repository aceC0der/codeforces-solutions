/*
 * Problem   : 1698D - Fixed Point Guessing
 * Link      : https://codeforces.com/contest/1698/problem/D
 * Submission: https://codeforces.com/contest/1698/submission/162176916
 * Rating    : 1600   Tags: binary search, constructive algorithms, interactive
 * Verdict   : Accepted (46 ms, 0 KB)
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

bool query(int l, int r){
    cout << "? " << l << " " << r << endl;
    cout.flush();
    int n = r-l+1;
    int x;
    int cnt=0;
    rep(i, 0, n){
        cin >> x;
        if(x<l || x>r){
            cnt++;
        }
    }
    n-=cnt;
    return n%2 ? true : false;
}

int main()
{
    // fios
    TestCases{
        int n;
        cin >> n;
        int l = 1, r = n;
        int ans = -1;
        while(l<=r){
            int mid = (l+r)/2;
            if(query(l, mid)){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        cout << "! " <<  ans << endl;

    }
    return 0;
}
