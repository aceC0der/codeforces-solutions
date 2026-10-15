/*
 * Problem   : 1791F - Range Update Point Query
 * Link      : https://codeforces.com/contest/1791/problem/F
 * Submission: https://codeforces.com/contest/1791/submission/201795744
 * Rating    : 1500   Tags: binary search, brute force, data structures
 * Verdict   : Accepted (280 ms, 11100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-04-12 (Practice)
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
    int n, q;
    cin >> n >> q;
    int arr[n+1][4];
    rep(i, 0, n){
        cin >> arr[i][0];
    }
    rep(j, 1, 4){
        rep(i, 0, n){
            int p = arr[i][j-1];
            int sum = 0;
            while(p){
                int d = p%10;
                p/=10;
                sum+=d;
            }
            arr[i][j] = sum;
        }
    }
    vi freq(n+1);
    vi pfreq(n+1);
    set<int> active;
    rep(i, 0, n) active.insert(i);
    while(q--){
        int qr;
        cin >> qr;
        if(qr==1){
            int l, r;
            cin >> l >> r;
            l--;
            if(active.lower_bound(l)==active.end()) continue;
            int min_ac = *active.lower_bound(l);
            // cout << "L : " << l << " r : " << r << endl;
            // cout << "MIN_AC : ";
            while(min_ac<r){
                // cout << min_ac << " ";
                freq[min_ac]++;
                if(freq[min_ac]>=3) active.erase(min_ac);
                min_ac++;
                if(active.lower_bound(min_ac)==active.end()) break;
                min_ac = *active.lower_bound(min_ac);
            }
            // cout << endl;
        }
        else{
            int ask;
            cin >> ask;
            ask--;
            int s = freq[ask];
            if(freq[ask]>=4){
                s = 3;
            }
            // cout << "ask :" << ask << " " << s << endl;
            cout << arr[ask][s] << endl;
        }
    }
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
