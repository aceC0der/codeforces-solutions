/*
 * Problem   : 1974D - Ingenuity-2
 * Link      : https://codeforces.com/contest/1974/problem/D
 * Submission: https://codeforces.com/contest/1974/submission/261893087
 * Rating    : 1400   Tags: constructive algorithms, greedy, implementation
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-20 (Contest)
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

void answer(int i, vi& heli, vi& rover){
    if(heli[i]) {
        cout << "H";
        heli[i]--;
    }
    else{
        cout << "R";
        rover[i]--;
    }
}

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a, b, c, d;
    a = b = c = d = 0;
    rep(i, 0, n){
       a += (s[i]=='N');
       b += (s[i]=='S');
       c += (s[i]=='W');
       d += (s[i]=='E'); 
    }
    vi heli(5), rover(5);
    // int hf = a/2;
    heli[0] = rover[0] = a/2; a%=2;
    heli[1] = rover[1] = b/2; b%=2;
    heli[2] = rover[2] = c/2; c%=2;
    heli[3] = rover[3] = d/2; d%=2;

    if(a!=b || c!=d){
        cout << "NO" << endl;
        return;
    }

    heli[0]+=a;
    heli[1]+=b;
    rover[0]+=c;
    rover[1]+=d;

    int h = 0, r=0;
    rep(i, 0, 5){
        h+=heli[i];
        r+=rover[i];
    }
    if(!h || !r){
        cout << "NO" << endl;
        return;
    }
    rep(i, 0, n){
        if(s[i]=='N') answer(0, heli, rover);
        else if(s[i]=='S') answer(1, heli, rover);
        else if(s[i]=='W') answer(2, heli, rover);
        else answer(3, heli, rover);
    }
    cout << endl;
    // cout << "YES" << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    fios
    TestCases{
        solve();
    }
    return 0;
}
