/*
 * Problem   : 1858B - The Walkway
 * Link      : https://codeforces.com/contest/1858/problem/B
 * Submission: https://codeforces.com/contest/1858/submission/219133880
 * Rating    : 1500   Tags: brute force, dp, greedy, math, number theory
 * Verdict   : Accepted (46 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-08-16 (Practice)
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

/*
    Analysis:
    -> Read the problem statement very carefully
    -> Find out what is given and what is wanted
    -> Try die hard to solve
    -> Prove your idea: why should it work?
    -> Eliminate your wrong ideas as soon as possible
    -> Have you missed any corner case?
    -> never miss post solving Analysis
 
    Remember:  You know what your capability is. Just believe in yourself and work very hard. GOD will never let you down.
*/

void solve(){
    ll n, m, d;
    cin >> n >> m >> d;
    vl a(m);
    rep(i, 0, m) {
        cin >> a[i];
    }
    sort(all(a));
    ll ttl = 1;
    ll mx = 1;
    vl mnz(m, 0);
    rep(i, 0, m){
        ll dif = a[i]-mx;
        if(dif%d==0) continue;
        if(i==m-1){
            ll dif1 = n - a[i];
            ll difn = n - mx;
            ll old = dif/d- (dif%d==0) + 1 + dif1/d;  
            ll nw = difn/d;
            mnz[i] = nw - old;
            continue;
        }
        ll dif1 = a[i+1]-a[i];
        ll difn = a[i+1]-mx;
        ll old = dif/d - (dif%d==0) + 1 + dif1/d - (dif1%d==0);  
        ll nw = difn/d - (difn%d==0);
        mnz[i] = nw-old;
        mx = a[i];
    }
    sort(all(mnz));
    ll cnt = 0;
    ll mn = mnz[0];
    while(cnt<m && mn == mnz[cnt]) cnt++;
    mx = 1;
    rep(i, 0, m){
        if(a[i]==1) continue;
        if(a[i]-mx<d) ttl++;
        else{
            ttl += ((a[i]-mx)/d) - ((a[i]-mx)%d==0)+1;
        }
        mx = a[i];
    }
    if(a[m-1]<n){
        ttl += ((n-a[m-1])/d);
    }
    // a.pb(n+1);
    // int sum=1;
    // int prev=1;
    // for(int i=0;i<m;i++){
    //     if(a[i]==1) continue;
    //     int x=a[i]-prev-1;
    //     sum+=(x/d);
    //     sum++;
    //     prev=a[i];
    // }
    // sum+=((n-a[m-1])/d);

    cout << ttl + mn << " " << cnt << endl;
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
