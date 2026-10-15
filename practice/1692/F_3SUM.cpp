/*
 * Problem   : 1692F - 3SUM
 * Link      : https://codeforces.com/contest/1692/problem/F
 * Submission: https://codeforces.com/contest/1692/submission/162706566
 * Rating    : 1300   Tags: brute force, math
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-07-04 (Practice)
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
        int n;
        cin >> n;
        vi m(10, 0);
        int x;
        rep(i, 0, n){
            cin >> x;
            m[x%10]++;
        }
        int d_sum = 0;
        bool f = false;
        for(int i=0; i<10; i++){
            d_sum = 0;
            if(m[i]<=0) continue;
            m[i]--;
            d_sum+=i;
            for(int j=0; j<10; j++){
                if(m[j]<=0) continue;
                m[j]--;
                d_sum+=j;
                for(int k=0; k<10; k++){
                    if(m[k]<=0) continue;
                    d_sum+=k;
                    f = f | (d_sum == 3 || d_sum == 13 || d_sum == 23);
                    d_sum-=k;
                }
                d_sum-=j;
                m[j]++;
            }
            m[i]++;
        }
        cout << (f? "YES" : "NO" ) << endl;
    }
    return 0;
}
