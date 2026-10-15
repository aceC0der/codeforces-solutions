/*
 * Problem   : 1895C - Torn Lucky Ticket
 * Link      : https://codeforces.com/contest/1895/problem/C
 * Submission: https://codeforces.com/contest/1895/submission/263090200
 * Rating    : 1400   Tags: brute force, dp, hashing, implementation, math
 * Verdict   : Accepted (217 ms, 1100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-29 (Practice)
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

bool cmp(string& a, string& b){
    if(a.size()==b.size()){
        return a<b;
    }
    return a.size()<b.size();
}

void solve(){
    int n;
    cin >> n;
    string arr[n];
    map<pi, ll> freq;
    rep(i, 0, n) cin >> arr[i];
    sort(arr, arr+n, cmp);
    rep(i, 0, n){
        int sum = 0;
        for(auto ch: arr[i]){
            int c = (ch-'0');
            sum+=c;
        }
        freq[{arr[i].size(), sum}]++;
    }
    // for(auto it: freq){
    //     cout << it.ff.ff << "/" << it.ff.ss << "-->" << it.ss << endl;
    // }
    ll ans = 0;
    rep(i, 0, n){
        int j = arr[i].size();
        int sum = 0;
        for(auto ch: arr[i]){
            int c = ch-'0';
            sum+=c;
        }
        int tsum = sum;
        int len = j;
        vpi sms;
        sms.pb({sum, 0});
        int c = 0;
        int cnt = 0;
        if(len&1){
            cnt = (len-1)/2;
        }
        else cnt = (len/2)-1;
        while(cnt--){
            j--;
            int t = (arr[i][j]-'0');
            c+= t;
            sum-=t;
            sms.pb({sum, c});
        }
        reverse(all(sms));
        // cout << arr[i] << " : " ;
        // for(auto it: sms) cout << it.ff << "/" << it.ss << " "; cout << endl;
        if(len&1) j=1;
        else j=2;
        for(auto it: sms){
            int req = it.ff-it.ss;
            ans+=freq[{j, req}];
            j+=2;
        }
        // cout << ans << " *************" << endl;
        c = 0;
        cnt = 0;
        if(len&1){
            cnt = (len-1)/2;
        }
        else cnt = (len/2)-1;
        sum = tsum;
        j = 0;
        vpi smc;
        while(cnt--){
            int t = (arr[i][j]-'0');
            c+= t;
            sum-=t;
            smc.pb({c, sum});
            j++;
        }
        reverse(all(smc));
        // cout << arr[i] << " : " ;
        // for(auto it: smc) cout << it.ff << "/" << it.ss << " "; cout << endl;
        if(len&1) j=1;
        else j=2;
        for(auto it: smc){
            int req = it.ss-it.ff;
            ans += freq[{j, req}];
            j+=2;
        }
        // cout << ans << " ###############" << endl;

    }
    cout << ans << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios
    // TestCases{
        solve();
    // }
    return 0;
}
