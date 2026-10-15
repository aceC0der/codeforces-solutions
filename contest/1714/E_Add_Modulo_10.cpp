/*
 * Problem   : 1714E - Add Modulo 10
 * Link      : https://codeforces.com/contest/1714/problem/E
 * Submission: https://codeforces.com/contest/1714/submission/166584503
 * Rating    : 1400   Tags: brute force, math, number theory
 * Verdict   : Accepted (109 ms, 7200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-08-01 (Contest)
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

void solve(){
    int n;
    cin >> n;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    sort(all(a));
    bool f = false;
    rep(i, 0, n){
        int d = a[i]%10;
        if(d==5 || d==0) {f=true; break;}
    }
    if(f){
        set<int> s;
        rep(i, 0, n){
            s.insert(a[i]);
        }
        if(s.size()==1){
            cout << "Yes" << endl;
        }
        else if(s.size()==2){
            auto a = s.begin();
            int x = *a;
            a++;
            int y = *a;
            if(y-x==5 && y%10==0) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        else cout << "No" << endl;
        return;
    }
    while(a[n-1]%10!=6){
        a[n-1]+=a[n-1]%10;
    }
    f = true;
    pre(i, n-2, 0){
        while(a[i]%10!=6){
            a[i]+=a[i]%10;
        }
        if((a[n-1]-a[i])%20!=0){
            f = false;
            break;
        }
    }
    cout << (f? "Yes" : "No") << endl;
}

int main()
{
    fios
    TestCases{
        solve();
    }
    return 0;
}
