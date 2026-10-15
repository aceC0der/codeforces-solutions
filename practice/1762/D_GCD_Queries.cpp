/*
 * Problem   : 1762D - GCD Queries 
 * Link      : https://codeforces.com/contest/1762/problem/D
 * Submission: https://codeforces.com/contest/1762/submission/185432540
 * Rating    : 2100   Tags: constructive algorithms, interactive, number theory
 * Verdict   : Accepted (233 ms, 600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-12-16 (Practice)
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

int query(int i, int j){
    cout << "? " << i+1 << " " << j+1 << endl;
    cout.flush();
    int x;
    cin >> x;
    return x;
}

void ans(int i, int j){
    cout << "! " << i+1 << " " << j+1 << endl;
    cout.flush();
}

void solve(){
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n){
        a[i] = i;
    }
    int sz = n;
    int i=0;
    int j=i+1;
    while(sz>2){
        i=0;
        j=i+1;
        int q1 = query(a[i], a[j]);
        int q2 = query(a[i], a[j+1]);
        while(q1==q2){
            sz--;
            if(sz==2) break;
            i++;j++;
            q1 = query(a[i], a[j]);
            q2 = query(a[i], a[j+1]);
        }
        vpi b;
        b.pb({q1, a[j]});
        b.pb({q2, a[j+1]});
        int mx = max(q1, q2);
        int q;
        rep(k, j+2, a.size()){
            q = query(a[i], a[k]);
            b.pb({q, a[k]});
            mx = max(q, mx);
        }
        vi c;
        c.pb(a[i]);
        rep(k, 0, b.size()){
            if(b[k].ff==mx){
                c.pb(b[k].ss);
            }
        }
        a.clear();
        sz = c.size();
        if(sz>2){
            a.resize(sz-1);
            rep(i, 1, sz){
                a[i-1] = c[i];
            }
            sz--;
        }
        else a = c;
    }
    ans(a[0], a[1]);
}

int main()
{
    // fios
    TestCases{
        solve();
        int x;
        cin >> x;
        // cout << x << endl;
        if(x==-1) break;
    }
    return 0;
}
