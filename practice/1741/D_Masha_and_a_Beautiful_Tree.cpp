/*
 * Problem   : 1741D - Masha and a Beautiful Tree
 * Link      : https://codeforces.com/contest/1741/problem/D
 * Submission: https://codeforces.com/contest/1741/submission/189588249
 * Rating    : 1300   Tags: dfs and similar, divide and conquer, graphs, sortings, trees
 * Verdict   : Accepted (62 ms, 1200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-01-18 (Practice)
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

int cnt = 0;
int breakk(int l, int r, vi& a){
    int mid = (l+r)/2;
    int c1=-1, c2=-1;
    if(r>l){
         c1 = breakk(l, mid, a);
         c2 = breakk(mid+1, r, a);
    }

    int n = r-l+1;
    // cout << l << " " << r << " " << a[l] << " " << n << endl;
    if(n==1) return a[l];
    if(cnt!=-1 && c1!=-1 && c2 !=-1){
        if(c1+n/2==c2 || c1-n/2==c2){
            if(c1-n/2==c2){
              cnt++; 
              return c2;
            }
            else return c1;
        }
        else{
            cnt = -1;
            return -1;
        }
    }
    return -1;
}

void solve(){
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n){
        cin >> a[i];
    }
    cnt = 0;
    int x = breakk(0, n-1, a);
    cout << cnt << endl;

}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
