/*
 * Problem   : 2026D - Sums of Segments
 * Link      : https://codeforces.com/contest/2026/problem/D
 * Submission: https://codeforces.com/contest/2026/submission/289740765
 * Rating    : 1900   Tags: binary search, data structures, dp, implementation, math
 * Verdict   : Accepted (577 ms, 15200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-11-03 (Practice)
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
#define int ll

int binSearch(int i, int n, vi& len){
    int l=1, r=n;
    int ans = 0;
    while(l<=r){
        int mid = (l+r)/2;
        int v = len[mid];
        if(v<i){
            ans = mid;
            l = mid+1;
        }else r = mid-1;
    }
    return ans;
}

int sumTill(int i, vi& pref, vi& len, vi& allSum, vi& pr){
    int n = pref.size()-1;
    int j = binSearch(i, pref.size()-1, len);
    // return 0;
    int ans = 0;
    if(j){
        ans = pref[j];
        int v = len[j];
        i-=v;
    }
    // cout << i << " " << j << " " << ans << endl;
    // cout << allSum[i+j] << " " << pr[j] << endl;
    if(!j) ans += (allSum[i]);
    else{
        int dif = i+j;
        ans += allSum[j+i]-allSum[j]-pr[j]*i;
    }
    return ans;
}

void solve(){
    int n;
    cin >> n;
    vi arr(n+1);
    rep(i, 1, n+1) cin >> arr[i];
    vi allSum(n+1);
    int sum = 0;
    vi sumOne(n+1);
    rep(i, 1, n+1){
        sum += arr[i];
        sumOne[i] = sumOne[i-1]+ sum;
        allSum[1] += sum;
    }
    sum = 0;
    int cnt=n;
    vi prefSumOne(n+1);
    rep(i, 1, n+1) prefSumOne[i] = prefSumOne[i-1]+arr[i];
    rep(i, 2, n+1){
        allSum[i] = allSum[i-1]-(arr[i-1]*cnt);
        cnt--;
    }

    vi rAllSum(n+1);
    sum = 0;

    pre(i, n, 1){
        sum+=arr[i];
        rAllSum[n] += sum;
    }
    cnt=n;
    pre(i, n-1, 1){
        rAllSum[i] = rAllSum[i+1]-(arr[i+1]*cnt);
        cnt--;
    }
    vi suf(n+1);
    rep(i, 1, n) suf[i]=suf[i-1]+rAllSum[i];

    vi pref(n+1);
    rep(i, 1, n+1) pref[i] = pref[i-1]+allSum[i];
    // rep(i, 1, n+1) cout << prefSumOne[i] << " "; cout << endl;
    // rep(i, 1, n+1) cout << sumOne[i] << " "; cout << endl;
    // rep(i, 1, n+1) cout << allSum[i] << " "; cout << endl;
    // rep(i, 1, n+1) cout << rAllSum[i] << " "; cout << endl;
    
    vi len(n+1);
    cnt = n;
    rep(i, 1, n+1) len[i] = len[i-1]+cnt, cnt--;

    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        // cout << l << "*** " << r << endl;
        int ans = sumTill(r, pref, len, sumOne, prefSumOne)-sumTill(l-1, pref, len, sumOne, prefSumOne);
        cout << ans << endl;
    }
}

int32_t main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios
        solve();
    return 0;
}
