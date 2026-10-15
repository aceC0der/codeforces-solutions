/*
 * Problem   : 1748B - Diverse Substrings
 * Link      : https://codeforces.com/contest/1748/problem/B
 * Submission: https://codeforces.com/contest/1748/submission/180885126
 * Rating    : 1400   Tags: brute force, implementation, strings
 * Verdict   : Accepted (93 ms, 300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-11-13 (Practice)
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l, r;
    ll ans = n;
    int len = min(101, n+1);
    rep(i, 2, len){
        l = 0, r=l+i;
        vi freq(10);
        int dist = 0;
        int mxfreq = INT_MIN;
        rep(j, l, r){
            int x = s[j]-'0';
            if(!freq[x]) dist++;
            freq[x]++;
            mxfreq = max(mxfreq, freq[x]);
        }
        // cout << "* * " << i << endl;
        while(r<=n){
            if(mxfreq<=dist) ans++;
            // cout << l << " " << r << " " << mxfreq << " " << dist << " " << ans << endl;
            int x = s[l]-'0';
            if(freq[x]==1) dist--;
            freq[x]--;
            // mxfreq = max(mxfreq, freq[x]);
            if(r<n) {
                x = s[r]-'0';
                if(!freq[x]) dist++;
                freq[x]++;
            }
            mxfreq = *max_element(all(freq));
            l++;
            r++;
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
