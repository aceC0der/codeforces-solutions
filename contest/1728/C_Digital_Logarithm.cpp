/*
 * Problem   : 1728C - Digital Logarithm
 * Link      : https://codeforces.com/contest/1728/problem/C
 * Submission: https://codeforces.com/contest/1728/submission/171420373
 * Rating    : 1400   Tags: data structures, greedy, sortings
 * Verdict   : Accepted (1871 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-09-08 (Contest)
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

int count_dig(int x){
    int cnt = 0;
    while(x){
        x/=10;
        cnt++;
    }
    return cnt;
}

void solve(){
    int n;
    cin >> n;
    vector<int> a;
    vi b;
    vi ca(11, 0);
    vi cb(11, 0);
    rep(i, 0, n){
        int x;
        cin >> x;
        a.pb(x);
    }
    sort(all(a));
    int ans = 0;
    rep(i, 0, n){
        int x;
        cin >> x;
        if(binary_search(all(a), x)){
            a.erase(lower_bound(all(a), x));
        }
        else{
            if(x>10){
                // cout <<"*" << endl;
                x = count_dig(x);
                ans++;
            }
            cb[x]++;
        }
    }
    for(auto x: a){
        if(x>10)
        {
            x = count_dig(x);
            ans++;
        }
        ca[x]++;
    }
    rep(i, 3, 10){
        // cout << ans << endl;
        ans += abs(ca[i]-cb[i]);
    }
    int d10 = abs(ca[10]-cb[10]);
    if(ca[10]>cb[10]){
        ca[2]+=d10;
    }
    else{
        cb[2]+=d10;
    }
    ans+=d10;
    ans+=abs(cb[2]-ca[2]);
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
