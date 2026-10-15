/*
 * Problem   : 1586C - Omkar and Determination
 * Link      : https://codeforces.com/contest/1586/problem/C
 * Submission: https://codeforces.com/contest/1586/submission/162283697
 * Rating    : 1700   Tags: constructive algorithms, dp, greedy, implementation, two pointers
 * Verdict   : Accepted (218 ms, 23400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-30 (Practice)
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


int main()
{
    fios
    int n, m;
    cin >> n >> m;
    string s[n];
    rep(i, 0, n){
        cin >> s[i];
    }
    vi a(m+1, 0);
    rep(j, 0, m){
        rep(i, 0, n){
            if(i>0 && j>0 && s[i-1][j] == 'X' && s[i][j-1]=='X'){
                a[j+1]++;
            }
        }
    }
    rep(i, 1, m+1){
        a[i] += a[i-1];
    }
    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        // cout << r-l+1 << " " << a[r]-a[l-1] << endl;
        if((a[r]-a[l])==0) cout << "YES" <<endl;
        else{
            // cout << v[r] << endl;
            cout << "NO" << endl;
        }
    }


    return 0;
}
