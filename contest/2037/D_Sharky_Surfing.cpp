/*
 * Problem   : 2037D - Sharky Surfing
 * Link      : https://codeforces.com/contest/2037/problem/D
 * Submission: https://codeforces.com/contest/2037/submission/292008884
 * Rating    : 1300   Tags: data structures, greedy, two pointers
 * Verdict   : Accepted (249 ms, 7300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-11-17 (Contest)
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

void solve(){
    int n, m, L;
    cin >> n >> m >> L;
    vpi hurdles(n);
    rep(i, 0, n){
        cin >> hurdles[i].ff >> hurdles[i].ss;
    }
    vpi pwr(m);
    rep(i, 0, m) cin >> pwr[i].ff >> pwr[i].ss;
    vi jump(n);
    int j=0;
    int sum=1;
    priority_queue<int> pq;
    // cout << "*****" << endl;
    // return;
    int cnt=0;
    rep(i, 0, n){
        while(j<m && pwr[j].ff<hurdles[i].ff){
            // cout << pwr[j].ff << " *** " << pwr[j].ss << endl;
            pq.push(pwr[j].ss);
            j++;
        }
        int dif=hurdles[i].ss-hurdles[i].ff+1;
        while(!pq.empty() && sum<=dif){
            sum+=pq.top();
            cnt++;
            pq.pop();
        }
        // cout << sum << " " << dif << endl;
        if(sum<=dif){
            cout << -1 << endl;
            return;
        }
    }
    cout << cnt <<endl;
}

int32_t main()
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
