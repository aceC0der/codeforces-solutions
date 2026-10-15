/*
 * Problem   : 2126B - No Casino in the Mountains
 * Link      : https://codeforces.com/contest/2126/problem/B
 * Submission: https://codeforces.com/contest/2126/submission/329385538
 * Rating    : 800   Tags: dp, greedy
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2025-07-17 (Contest)
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
#define vvi vector<vector<int>>
#define vb vector<bool>
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
    int n, k;
    cin >> n >> k;
    bool arr[n];
    rep(i, 0, n) {
        cin >> arr[i];
    }
    int i=0, j=0;
    int ans = 0;
    int on = 0;
    while(j<k){
        on += arr[j];
        j++;
    }

    while(j<=n){
        // cout << i << " " << j << " " << on << endl;
        if(!on){
            ans++;
            i = j+1;
            j= i;
            on = 0;
            while(j<k+i){
                on += arr[j];
                j++;
            }

        }
        else{
            on-=arr[i];
            i++;
            if(j<n) on+=arr[j];
            j++;
        }
    }

    cout << ans << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
