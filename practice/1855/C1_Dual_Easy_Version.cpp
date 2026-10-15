/*
 * Problem   : 1855C1 - Dual (Easy Version)
 * Link      : https://codeforces.com/contest/1855/problem/C1
 * Submission: https://codeforces.com/contest/1855/submission/218834365
 * Rating    : 1400   Tags: constructive algorithms
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-08-14 (Practice)
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
    int n;
    cin >> n;
    vi a(n);
    int pos = 0, neg = 0, mx = -31, mn = 31, mn_pos, mx_pos;
    rep(i, 0, n){
        cin >> a[i];
        if(a[i]>0) pos++;
        else if(a[i]<0) neg++;
        if(a[i]>=mx){
            mx_pos = i;
            mx = a[i];
        }
        if(a[i]<mn) {
            mn_pos = i;
            mn = a[i];
        }
    }
    int extra=0;
    bool f = true;
    if(mn<0 && mx>0){
        if(abs(mn)<mx){
            f = false;
            int nn = mn;
            while(abs(nn)<mx){
                nn += nn;
                extra++;
            }
        }
        else if(abs(mn)>mx){
            int x = mx;
            while(x<abs(mn)){
                x += x;
                extra++;
            }
        }
    }
    int using_pos = n-1 + neg + (f ? extra : 0);
    int using_neg = n-1 + pos + (f ? 0 : extra);
    // cout << using_pos << " " << using_neg << endl;
    vpi ans;
    // using_pos = 32;
    if(using_pos<=31 && pos>0){
        // cout << using_pos << endl;
        if(f){
            while(extra--){
                a[mx_pos] += a[mx_pos];
                ans.pb({mx_pos+1, mx_pos+1});
            }
        }
        rep(i, 0, n){
            if(a[i]<0){
                a[i] += a[mx_pos];
                ans.pb({i+1, mx_pos+1});
            }
        }
        rep(i, 1, n){
            a[i]+=a[i-1];
            ans.pb({i+1, i});
        }
        cout << ans.size() << endl;
        rep(i, 0, ans.size()) cout << ans[i].ff << " " << ans[i].ss << endl;
        // rep(i, 0, n) cout << a[i] << " "; cout << endl;
    }
    else{
        // cout << using_neg << endl;
        if(!f){
            while(extra--){
                a[mn_pos] += a[mn_pos];
                ans.pb({mn_pos+1, mn_pos+1});
            }
        }
        rep(i, 0, n){
            if(a[i]>0){
                a[i] += a[mn_pos];
                ans.pb({i+1, mn_pos+1});
            }
        }
        pre(i, n-2, 0){
            a[i]+=a[i+1];
            ans.pb({i+1, i+2});
        }
        cout << ans.size() << endl;
        rep(i, 0, ans.size()) cout << ans[i].ff << " " << ans[i].ss << endl;
        // rep(i, 0, n) cout << a[i] << " "; cout << endl;
    }
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
