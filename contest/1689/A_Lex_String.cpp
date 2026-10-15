/*
 * Problem   : 1689A - Lex String
 * Link      : https://codeforces.com/contest/1689/problem/A
 * Submission: https://codeforces.com/contest/1689/submission/160096556
 * Rating    : 800   Tags: brute force, greedy, implementation, sortings, two pointers
 * Verdict   : Accepted (15 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-06-10 (Contest)
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
        int n, m , k;
        cin >> n >> m >> k;
        string a, b , c;
        cin >> a; 
        cin >> b;
        sort(all(a));
        sort(all(b));
        int ka = 0, kb = 0;
        int i=0, j=0;
        while(i<n || j<m){
            if(i>=n){
                break;
                // c.push_back(b[j]);
                // j++;
            }
            else if(j>=m){
                break;
                // c.push_back(a[i]);
                // i++;
            }
            else if((a[i]<b[j] && ka<k) || kb>=k){
                ka++;
                kb = 0;
                c.push_back(a[i]);
                i++;
            }
            else {
                kb++;
                ka = 0;
                c.push_back(b[j]);
                j++;
            }
            // cout << c.size() << endl;
        }
        cout << c << endl;

    }
    return 0;
}
