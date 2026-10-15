/*
 * Problem   : 1890C - Qingshan Loves Strings 2
 * Link      : https://codeforces.com/contest/1890/problem/C
 * Submission: https://codeforces.com/contest/1890/submission/283819611
 * Rating    : 1300   Tags: constructive algorithms, implementation, two pointers
 * Verdict   : Accepted (77 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-10-01 (Practice)
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
#define endl '\n'
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
#define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

bool isGood(string& s){
    int n = s.size();
    int k = n-1;
    rep(i, 0, n){
        if(s[i]==s[k-i]) return false;
    }
    return true;
}

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    if(isGood(s)) {
        cout << 0 << endl;
        return;
    }
    string t = "01";
    vi ans;
    while(!isGood(s)){
        if(ans.size()>300){
            cout << -1 << endl;
            return;
        }
        int i=0, j=s.size()-1;
        while(i<j && s[i]!=s[j]){
            i++;j--;
        }
        if(s[i]=='0'){
            ans.pb(j+1);
            string tmp = "";
            rep(x, 0, j+1) tmp+=s[x];
            tmp+=t;
            rep(x, j+1, s.size()) tmp+=s[x];
            s = tmp;
            // int rem = s.size()-(j+1);
            // // if(s.size()<10) {
                
            // //     // cout << i << " " << j << " " << rem << endl;
            // //     cout << s << endl;
            // // }
            // s = s.substr(0, j+1)+t;
            // string a = s.substr(0, j+1);
            // string b = s.substr(j+2, rem);
            // // if(s.size()<10) cout << a << " " << b << endl;
            // if(rem) s+=s.substr(j+2, rem);
            // // if(s.size()<=10) cout << s << endl;
        }
        else{
            ans.pb(i);
            // int rem = s.size()-(i+1);
            // s = s.substr(0, i+1)+t+s.substr(i+2, rem);
            string tmp="";
            rep(x, 0, i) tmp+=s[x];
            tmp+=t;
            rep(x, i, s.size()) tmp+=s[x];
            s=tmp;
        }
        // if(s.size()<10) cout << s << endl;
    }
    cout << ans.size() << endl;
    for(auto it: ans) cout << it << " "; cout << endl;
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
