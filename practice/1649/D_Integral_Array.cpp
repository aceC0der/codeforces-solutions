/*
 * Problem   : 1649D - Integral Array
 * Link      : https://codeforces.com/contest/1649/problem/D
 * Submission: https://codeforces.com/contest/1649/submission/148775500
 * Rating    : 1800   Tags: brute force, constructive algorithms, math, sortings
 * Verdict   : Accepted (373 ms, 11700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-03-08 (Practice)
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
        int n, c;
        cin >> n >> c;
        int arr[n+1];
        vi fr(c+1, 0);
        int x;
        int cnt = 0;
        for(int i=0; i<n; i++){
            cin >> x;
            if(fr[x]==0){
                fr[x] = 1;
                arr[cnt] = x;
                cnt++;
            }   
        }
        sort(arr, arr+cnt);
        // for(int i=1; i<=c; i++){
        //     cout << fr[i] << " ";
        // }
        // cout << endl;
        vi psum(c+1);
        psum[0] = 0;
        for(int i=1; i<=c; i++){
            psum[i] =  psum[i-1]+fr[i];
            // cout << psum[i] << " ";
        }
        // cout << endl;
        bool f = true;
        for(int r = 1; r<=c; r++){
            if(!fr[r]){
                // cout << "r : " <<  r << endl;
                for(int y=0; y<cnt; y++){
                    ll lim1 = (ll)arr[y]*(ll)r-1LL;
                    ll lim2 = min(((ll)(ll)arr[y]*(ll)(r+1))-1, (ll)c);
                    if(lim1>(ll)c){
                        break;
                    }
                    if(psum[lim2]-psum[lim1]){
                        f = false;
                        break;
                    }
                }
            }
            if(!f) break;
        }
        if(f) cout << "Yes" <<endl;
        else cout << "No" << endl;
    }


    return 0;
}
