/*
 * Problem   : 1977C - Nikita and LCM
 * Link      : https://codeforces.com/contest/1977/problem/C
 * Submission: https://codeforces.com/contest/1977/submission/262995616
 * Rating    : 1900   Tags: brute force, data structures, dp, greedy, math, number theory, sortings
 * Verdict   : Accepted (77 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-28 (Practice)
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
// #define lcm(a, b) (())

ll lcm(ll a, ll b){
    return ((a*b)/__gcd(a, b));
}

void solve(){
    int n;
    cin >> n;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    sort(all(a));
    map<ll, bool> isPresent;
    if(n==1){
        cout << 0 << endl;
        return;
    }
    ll l = lcm(a[0], a[1]);
    isPresent[a[0]] = true;
    isPresent[a[1]] = true;
    rep(i, 2, n){
        isPresent[a[i]] = true;
        l = lcm(l, a[i]);
        if(l>a[n-1]){
            cout << n << endl;
            return;
        }
    }
    // cout << "**" << endl;
    // return ;
    vl divs;
    ll num = a[n-1];
    ll i = 1;
    while(i*i<=num){
        if(num%i==0){
            divs.pb(i);
            divs.pb(num/i);
        }
        i++;
    }
    sort(all(divs));
    ll mx = 0;
    // divs.pop_back();
    // rep(i, 0, divs.size()) cout << divs[i] << " "; cout << endl;
    pre(i, divs.size()-2, 0){
        ll div = divs[i];
        ll cnt = 0;
        if(isPresent[div]) continue;
        l = -1;
        rep(j, 0, n){
            if(a[j]>div) break;
            if(div%a[j]==0){
                cnt++;
                if(cnt == 1) l = a[j];
                else l = lcm(l, a[j]);
            }
        }
        if(cnt>1 && !isPresent[l]) mx = max(cnt, mx);
    }
    cout << mx << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios
    TestCases{
        solve();
    }
    return 0;
}
