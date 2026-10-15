/*
 * Problem   : 1647B - Madoka and the Elegant Gift
 * Link      : https://codeforces.com/contest/1647/problem/B
 * Submission: https://codeforces.com/contest/1647/submission/149377984
 * Rating    : 1200   Tags: brute force, constructive algorithms, graphs, implementation
 * Verdict   : Accepted (15 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-03-12 (Practice)
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
    TestCases{
        int n, m;
        cin >> n >> m;
        string str[n];
        for(int i=0; i<n; i++){
            cin >> str[i];
        }
        bool flag = true;
        for(int i=0; i<n-1; i++){
            for(int j=0; j<m-1; j++){
                int cnt = 0;
                if(str[i][j]=='1') cnt++;
                if(str[i][j+1]=='1') cnt++;
                if(str[i+1][j]=='1') cnt++;
                if(str[i+1][j+1]=='1') cnt++;
                if(cnt == 3) {
                    // cout << i  << " " << j << endl;
                    flag = false;
                    break;
                }
            }
            if(!flag) break; 
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
