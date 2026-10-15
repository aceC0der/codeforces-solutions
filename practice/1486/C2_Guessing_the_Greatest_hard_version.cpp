/*
 * Problem   : 1486C2 - Guessing the Greatest (hard version)
 * Link      : https://codeforces.com/contest/1486/problem/C2
 * Submission: https://codeforces.com/contest/1486/submission/108032690
 * Rating    : 1900   Tags: binary search, interactive
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-02-20 (Practice)
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

int ask(int l, int r){
    int x;
    cout << "? " << l << " " << r << endl;
    cin >> x;
    return x;
}

int main()
{
    I
    int n;
    cin >> n;
    int l, r;
    l = 1;
    r = n;
    bool left = true;
    int sm = ask(l, r), tmp;
    if(sm!=r){
        tmp = ask(sm, r);
        if(tmp==sm){
            left = false;
        }
    }
    int ans = 1;
    if(left){
        int L = 1, R = sm-1, M = (L + R) / 2;
        while(L<=R){
            M = (L + R) / 2;
            if(ask(M, sm)==sm){
                ans = M;
                L = M + 1;
            }
            else{
                R = M - 1;
            }
        }
    }
    else{
        int L = sm+1, R = n, M = (L + R) / 2;
        while(L<=R){
            M = (L + R) / 2;
            if(ask(sm, M)==sm){
                ans = M;
                R = M - 1;
            }
            else{
                L = M + 1;
            }
        }
    }

    cout << "! " << ans << endl;
    cout.flush();

    return 0;
}
