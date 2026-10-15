/*
 * Problem   : 1521B - Nastia and a Good Array
 * Link      : https://codeforces.com/contest/1521/problem/B
 * Submission: https://codeforces.com/contest/1521/submission/116169078
 * Rating    : 1300   Tags: constructive algorithms, math, number theory
 * Verdict   : Accepted (670 ms, 4100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-05-14 (Practice)
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
        int n;
        cin >> n;
        vi a(n);
        int mini = 1111111111;
        int pos = 0;
        rep(i, 0, n){
            cin >> a[i];
            if(mini > a[i]){
                mini = a[i];
                pos = i;
            }
        }
        //cout << mini << " " << pos << endl;
        cout << n-1 << endl;
        rep(i, 0, n){
            if(i == pos)
                continue;
            
            a[i] = mini + abs(pos - i);
            
            cout << pos+1 << " " << i+1 << " " << mini << " " << mini + abs(pos -i) <<  endl;
        }
    }

    return 0;
}
