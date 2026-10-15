/*
 * Problem   : 2037E - Kachina's Favorite Binary String
 * Link      : https://codeforces.com/contest/2037/problem/E
 * Submission: https://codeforces.com/contest/2037/submission/292084142
 * Rating    : 1600   Tags: dp, greedy, interactive, two pointers
 * Verdict   : Accepted (139 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-11-17 (Practice)
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
#define vvi vector<vector<int>>
#define vb vector<bool>
#define pl pair<ll, ll>
#define vpi vector<pi >
#define vpl vector<pl >
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
#define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

int query(int l, int r){
    l++;r++;
    cout << "? " << l << " " << r << endl;
    cout.flush();
    int x;
    cin >> x;
    return x;
}

void answer(string s){
    cout << "! " << s << endl;
    cout.flush();
    return;
}


void solve(){
    int n;
    cin >> n;
    int l=0, r=1;
    string s="";
    int q = query(r-1, r);
    while(!q){
        r++;
        if(r>=n){
            string str = "IMPOSSIBLE";
            answer(str);
            return;
        }
        q = query(r-1, r);
    }
    if(r-l==1){
        s+="01";
    }else{
        q = query(l, r);
        int tq = q;
        int len=r-l-q;
        while(len--) s+='1';
        while(tq--) s+='0';
        s+='1';
    }
    // l = r-1;
    r = r+1;
    int prev = q;
    while(r<n){
        q = query(l, r);
        if(q!=prev){
            s+='1';
        }
        else{
            s+='0';
        }
        prev = q;
        r++;
    }
    answer(s);
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    fios
    TestCases{
        solve();
    }
    return 0;
}
