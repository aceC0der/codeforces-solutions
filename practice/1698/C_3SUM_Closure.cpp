/*
 * Problem   : 1698C - 3SUM Closure
 * Link      : https://codeforces.com/contest/1698/problem/C
 * Submission: https://codeforces.com/contest/1698/submission/162174068
 * Rating    : 1300   Tags: brute force, data structures
 * Verdict   : Accepted (77 ms, 2400 KB)
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


bool brute_Force(vi& arr, int cnt, ll sum, map<ll, bool>& m, int n, int i){
    if(i>=n) return false;
    if(cnt==3){
        return m[sum];
    }
    bool ret = true;
    ret |= (arr, cnt+1, sum+arr[i], m, n, i+1);
    if(ret){
        ret |= (arr, cnt, sum, m, n, i+1);
    }
    return ret;
}

int main()
{
    fios
    TestCases{
        int n;
        cin >> n;
        vi arr(n);
        // map<ll, bool> m;
        // set<int> s;
        vi z;
        int pos = 0, neg = 0;
        rep(i, 0,n){
            cin >>arr[i];
            
            // s.insert(arr[i]);
            // m[arr[i]]=true;
        }
        // sort(all(arr));
        rep(i, 0, n){
            if(arr[i]>0){
                pos++;
                z.push_back(arr[i]);
            }
            else if(arr[i]<0){
                neg++;
                z.push_back(arr[i]);
            }
            else if(z.size()<=6){
                z.pb(arr[i]);
            }
        }
        // rep(i, 0, z.size()){
        //     cout << z[i] << " ";
        // }
        // cout << endl;
        bool f = true;
        if(neg<3 && pos<3){
            rep(i, 0, z.size()){
                rep(j, i+1, z.size()){
                    rep(k, j+1, z.size()){
                        ll sum = z[i]+z[j]+z[k];
                        // cout << sum << endl;
                        bool ff = false;
                        rep(l, 0, z.size()){
                            if(sum==z[l]) ff = true;
                        }
                        // cout << ff << " kdjf' " << endl;
                        f &= ff;
                    }
                }
            }
        }
        else{
            f = false;
        }
        cout << (f ? "YES" : "NO" ) <<endl;
        
    }
    return 0;
}
