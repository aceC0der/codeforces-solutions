/*
 * Problem   : 1701C - Schedule Management
 * Link      : https://codeforces.com/contest/1701/problem/C
 * Submission: https://codeforces.com/contest/1701/submission/163432732
 * Rating    : 1400   Tags: binary search, greedy, implementation, two pointers
 * Verdict   : Accepted (62 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-10 (Practice)
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

bool yo(vi a, int maxi, int n, int m){
    int i = 1;
    int cnt = 0;
    // cout << maxi << endl;
    while(m){
        cnt++;
        int t = 0;
        // cout << cnt << " " << a[cnt] << "   " << m << endl;
        if(cnt>n) return false;
        while(t<=maxi && m){
            if(a[cnt]){
                t++;
                a[cnt]--;
            }
            else{
                t+=2;
            }
            if(t<=maxi) m--;
        }
    }
    // cout << maxi <<  " " << cnt << " " << i << endl;
    return (cnt<=n);
}

int main()
{
    fios
    TestCases{
        int n, m;
        cin >> n >> m;
        vi arr(n+1, 0);
        int maxi = -1;
        rep(i, 0, m){
            int x;
            cin >> x;
            arr[x]++;
            maxi = max(arr[x], maxi);
        }
        // rep(i, 1, n+1){
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
        int ans = 1;
        // cout << maxi <<" Kd" <<endl;
        int l=1, r=maxi+5;
        while(l<=r){
            int mid = (l+r)/2;
            // cout << mid <<"+++" << endl;
            if(yo(arr, mid, n, m)){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
