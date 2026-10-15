/*
 * Problem   : 1838C - No Prime Differences
 * Link      : https://codeforces.com/contest/1838/problem/C
 * Submission: https://codeforces.com/contest/1838/submission/208501905
 * Rating    : 1400   Tags: constructive algorithms, math, number theory
 * Verdict   : Accepted (171 ms, 4200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-04 (Contest)
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
int N = 2000005;
vector<bool> prime(N, true);
int arr[1005][1005];
void swapper(int i, int j, int m){
    rep(k, 0, m){
        swap(arr[i][k], arr[j][k]);
    }
}

void solve(){
    int n, m;
    cin >> n >>m;
    bool f = true;
    if(prime[m]){
        f = false;
    }
    int cnt = 1;
    if(prime[n]&&prime[m]){
        rep(i, 0, n){
            rep(j, 0, m){
                arr[i][j] = cnt++;
            }
        }
        int i=0;
        while(i+2<n){
            swapper(i, i+2, m);
            if(i+4<n) swapper(i+1, i+4, m);
            else break;
            i = i+3;
        }
    }
    else{
        if(f){
            rep(i, 0, n){
                rep(j, 0, m){
                        arr[i][j] = cnt++;
                }
            }
        }
        else{
            rep(j, 0, m){
                rep(i, 0, n){
                        arr[i][j] = cnt++;
                }
            }
        }
        
    }
    rep(i, 0, n){
        rep(j, 0, m){
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
    // rep(i, 1, n){
    //     rep(j, 0, m){
    //         cout << abs(arr[i][j]-arr[i-1][j]) << '\t';
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios
    prime[1] = false;
 
    for (int p = 2; p * p <= N; p++)
     {
         if (prime[p] == true)
         {
             for (int i = p * p; i <= N; i += p)
                 prime[i] = false;
         }
     }

    TestCases{
        solve();
    }
    return 0;
}
