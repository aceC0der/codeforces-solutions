/*
 * Problem   : 1759B - Lost Permutation
 * Link      : https://codeforces.com/contest/1759/problem/B
 * Submission: https://codeforces.com/contest/1759/submission/189970143
 * Rating    : 800   Tags: math
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-21 (Practice)
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

void solve(){
    int m, sum;
    cin >> m >> sum;
    vector<int> arr(m);
    vector<bool> flag(1000, false);
    bool f = true;
    int mx = -1;
    for(int i=0; i<m; i++){
        cin >> arr[i];
        flag[arr[i]] = true;
        mx = max(mx, arr[i]);
    }
    int i=1;
    while(sum>0){
        if(flag[i]==false){
            sum-=i;
            flag[i] = true;
        }
        i++;
    }
    if(sum==0){
        for(i=1; i<=mx; i++){
            if(flag[i]==false){
                f = false;
                break;
            }
        }
        if(f==true) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }
    

}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
