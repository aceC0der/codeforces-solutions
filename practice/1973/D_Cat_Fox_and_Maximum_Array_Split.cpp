/*
 * Problem   : 1973D - Cat, Fox and Maximum Array Split
 * Link      : https://codeforces.com/contest/1973/problem/D
 * Submission: https://codeforces.com/contest/1973/submission/261681779
 * Rating    : 2400   Tags: brute force, interactive, math
 * Verdict   : Accepted (155 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-19 (Practice)
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

int n, k;
int remq=0;

int ask(int l, int val){
    remq--;
    cout << "? " << l << " " << val << endl;
    cout.flush();
    int r;
    cin >> r;
    return r;
}

int answer(int ans){
    cout << "! " << ans << endl;
    cout.flush();
    int v;
    cin >> v;
    return v;
}

bool check(int x){
    int last = 0;
    if(last==n+1) return false;
    int seg=0;
    while(last<n && seg<k){
        if(!remq) return false;
        last = ask(last+1, x);
        seg++;
    }
    return (seg==k && last==n);
}

int solve(){
    cin >> n >> k;
    // cout << n << " %%% " << k << endl;
    remq = 2*n;

    // find maximum
    int mx = n+1;
    int r = 0;
    while(r!=n){
        mx--;
        if(!remq){
            return answer(-1);
        }
        r = ask(1, mx*n);
    }
    // cout << mx << " **** " << remq << endl;
    int len = n/k;

    if(!remq){
        return answer(-1);
    }
    bool f = check(mx*len);
    while(!f){
        len--;
        if(!remq || !len){
            return answer(-1);
        }
        f = check(mx*len);
    }
    int ret = answer(mx*len);
    return ret;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    // fios
    TestCases{
        int r = solve();
        if(r==-1) break;
    }
    return 0;
}
