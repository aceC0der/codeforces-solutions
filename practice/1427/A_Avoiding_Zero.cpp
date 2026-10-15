/*
 * Problem   : 1427A - Avoiding Zero
 * Link      : https://codeforces.com/contest/1427/problem/A
 * Submission: https://codeforces.com/contest/1427/submission/102923498
 * Rating    : 900   Tags: math, sortings
 * Verdict   : Accepted (46 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-31 (Practice)
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
#define vpi vector<pi>
#define T int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define I ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

int main()
{
    I
    T{
        int n, x;
        vi a;
        cin >> n;
        int sum = 0, neg =0, pos=0;
        rep(i, 0, n){
            cin >> x;
            sum += x;
            if(x>=0)
                pos+=x;
            else{
                neg+=-1*x;
            }
            a.pb(x);
        }
        if(!sum){
            cout << "NO" << endl;
            continue;
        }
        sort(all(a), greater<int>());
        cout << "YES" << endl;
        if(neg<pos){
            rep(i, 0, n){
                cout << a[i] << " ";
            }
        }
        else{
            pre(i, n-1, 0){
                cout << a[i] << " ";
            }
        }
        cout << endl;

    }

    return 0;
}
