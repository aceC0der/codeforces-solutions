/*
 * Problem   : 1809C - Sum on Subarrays
 * Link      : https://codeforces.com/contest/1809/problem/C
 * Submission: https://codeforces.com/contest/1809/submission/198858161
 * Rating    : 1500   Tags: constructive algorithms, greedy, math
 * Verdict   : Accepted (46 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-03-24 (Practice)
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

int pref[100];
int n;
int give_k(vi& a, int ii, int val){
    pref[0] = 0;
    a[ii] = val;
    rep(i, 1, n+1){
        pref[i] = pref[i-1] + a[i-1];
    }
    int k = 0;
    int j = ii+1;
    rep(i, 0, ii+1){
        if(pref[j]-pref[i]>0) k++;
        else if(pref[j]-pref[i]==0) return 545454;
    }
    return k;
}

int bin_search(vi& a, int k, int ii){
    int l = -1000, r = -1;
    int ans = 0;
    // while(l<r){
    //     int mid = (r+l)/2;
    //     int kk = give_k(a, ii, mid);
    //     cout << l << " " << r << " " << mid << " " << kk << endl;
    //     if(kk==k){
    //         return mid;
    //     }
    //     if(kk>k){
    //         r = mid-1;
    //     }
    //     else{
    //         l = mid+1;
    //     }
    // }
    // return ans;
    pre(i, -1, -1000){
        int kk = give_k(a, ii, i);
        // cout << i << " " << kk << endl;
        if(kk==k) return i;
    }
    return ans;
}

void solve(){
    int k;
    cin >> n >> k;
    vi a(n, -1000);
    int sum = 0, i=0;
    int cnt = 1;
    while(k-sum-cnt>=0){
        sum += cnt;
        a[i] = 2;
        i++;cnt++;
    }
    k-=sum;
    sum=0;
    if(k>0){
        a[i] = bin_search(a, k, i);
        if(a[i]==0){
            a[i-1]+=1;
            a[i] = bin_search(a, k, i);
        }
    }
    rep(i, 0, n) cout << a[i] << " "; cout << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
