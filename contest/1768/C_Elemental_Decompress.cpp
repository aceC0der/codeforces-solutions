/*
 * Problem   : 1768C - Elemental Decompress
 * Link      : https://codeforces.com/contest/1768/problem/C
 * Submission: https://codeforces.com/contest/1768/submission/188095188
 * Rating    : 1300   Tags: constructive algorithms, greedy, implementation, sortings
 * Verdict   : Accepted (280 ms, 13600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-05 (Contest)
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
    vi a(n);
    vi p(n, -1), q(n, -1);
    map<int, vector<int>> m;
    vector<bool> pf(n+2,false), qf(n+2, false);
    bool f = true;
    rep(i, 0, n){
        cin >> a[i];
        m[a[i]].pb(i);
        if(pf[a[i]]==false){
            p[i] = a[i];
            pf[a[i]] = true;
        }
        else if(qf[a[i]]==false){
            q[i] = a[i];
            qf[a[i]] = true;
        }
        else{
            f = false;
        }
    }
    // rep(i, 0, n) cout<< p[i] << " "; cout << endl;
    int px = 1, qx = 1;
    for(auto it : m){
        rep(i, 0, it.second.size()){
            int idx = it.second[i];
            if(q[idx]==-1) {
                while(qf[qx]){
                    qx++;
                }
                if(it.ff<qx){
                    f = false;
                    break;
                }
                q[idx] = qx;
                qf[qx] = true;
                qx++;
            }
            else {
                while(pf[px]){
                    px++;
                }
                if(it.ff<px){
                    f = false;
                    break;
                }
                p[idx] = px;
                pf[px] = true;
                px++;
            }
        }
    }
    if(f){
        cout << "YES" << endl;
        rep(i, 0, n) cout << p[i] << " "; cout << endl;
        rep(i, 0, n) cout << q[i] << " "; cout << endl;
    }
    else{
        cout << "NO" << endl;
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
