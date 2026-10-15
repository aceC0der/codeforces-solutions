/*
 * Problem   : 2051C - Preparing for the Exam
 * Link      : https://codeforces.com/contest/2051/problem/C
 * Submission: https://codeforces.com/contest/2051/submission/298020695
 * Rating    : 1000   Tags: constructive algorithms, implementation
 * Verdict   : Accepted (155 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-23 (Practice)
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

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vb isAvl(n);
    vi a(n);
    rep(i, 0, m){
        cin >> a[i];
        a[i]--;
    }
    rep(i, 0, k){
        int x;
        cin >> x;
        x--;
        isAvl[x] = true;
    }
    int target = false;
    rep(i, 0, n){
        if(!isAvl[i]){
            target = i;
            break;
        }
    }
    if(k<n-1){
        rep(i, 0, m) cout << "0"; cout << endl;
        return;
    }
    if(k==n){
        rep(i, 0, m) cout << "1"; cout << endl;
        return;
    }

    rep(i, 0, m){
        if(a[i]==target){
            cout << "1";
        }
        else cout << "0";
    }
    cout << endl;
    
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
