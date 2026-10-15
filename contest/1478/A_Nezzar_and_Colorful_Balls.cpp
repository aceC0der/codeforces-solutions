/*
 * Problem   : 1478A - Nezzar and Colorful Balls
 * Link      : https://codeforces.com/contest/1478/problem/A
 * Submission: https://codeforces.com/contest/1478/submission/105686891
 * Rating    : 800   Tags: brute force, greedy
 * Verdict   : Accepted (30 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-28 (Contest)
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
        int n, x, p;
        cin >> n;
        cin >> p;
        int cnt=1, c=1;
        n--;
        rep(i, 0, n){
            cin >> x;
            if(x==p){
                c++;
            }
            else{
                cnt=max(cnt, c);
                c = 1;
                p = x;
            }
        }
        cnt=max(cnt, c);
        cout << cnt << endl;
    }

    return 0;
}
