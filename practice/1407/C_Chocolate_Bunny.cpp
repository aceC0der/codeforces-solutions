/*
 * Problem   : 1407C - Chocolate Bunny
 * Link      : https://codeforces.com/contest/1407/problem/C
 * Submission: https://codeforces.com/contest/1407/submission/103050683
 * Rating    : 1600   Tags: constructive algorithms, interactive, math, two pointers
 * Verdict   : Accepted (233 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-02 (Practice)
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
    int n;
    cin >> n;
    int ans[n+4];
    int p1, p2, a, b;
    bool flag;
    p1 = 1;
    p2 = 2;
    if(n==1){
        cout << "! 1" << endl;
        return 0;
    }
    rep(i, 0, n){
        if(p1>p2){
            swap(p1, p2);
        }
        cout << "? " << p1 << " " << p2 << endl;
        cin >> a;
        cout.flush();
        cout << "? " << p2 << " " << p1 << endl;
        cin >> b;
        cout.flush();
        if(a>b){
            ans[p1-1]=a;
            //flag = true;
            p1 = p2+1;
        }
        else{
            ans[p2-1]=b;
            //flag = false;
            p2++;
        }
        if(p1>n){
            ans[p2-1]=n;
            break;
        }
        else if(p2>n){
            ans[p1-1]=n;
            break;
        }
    }
    cout << "! ";
    rep(i, 0, n){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
