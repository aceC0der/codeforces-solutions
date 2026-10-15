/*
 * Problem   : 1650D - Twist the Permutation
 * Link      : https://codeforces.com/contest/1650/problem/D
 * Submission: https://codeforces.com/contest/1650/submission/149054410
 * Rating    : 1300   Tags: brute force, constructive algorithms, implementation, math
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-03-10 (Practice)
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
        int arr[n+1];
        for(int i=1; i<=n; i++){
            cin >> arr[i];
        }
        int ans[n+1];
        ans[1] = 0;
        int a = 1;
        for(int i=n; i>1; i--){
            int cnt = 1;
            int s = a;
            while(arr[a]!=i){
                if(arr[a]==-1) {
                    a = a%n + 1;
                    continue;
                }
                cnt++;
                a = a%n + 1;
            }
            arr[a] = -1;
            a = a%n + 1;
            ans[i] = cnt%i;
        }

        for(int i=1; i<=n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
