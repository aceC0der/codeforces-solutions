/*
 * Problem   : 2049B - pspspsps
 * Link      : https://codeforces.com/contest/2049/problem/B
 * Submission: https://codeforces.com/contest/2049/submission/297494770
 * Rating    : 1300   Tags: brute force, constructive algorithms, graph matchings, implementation
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-12-20 (Contest)
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

bool isPerm(vi &arr, int n){
    vi freq(arr.size()+1);
    rep(j, 0, n){
        freq[arr[j]]++;
    }
    rep(i, 1, n+1){
        if(freq[i]>2 || freq[i]==0){
            return false;
        }
    }
    return true;
}

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int pcnt=0, scnt=0;
    rep(i, 0, n){
        scnt+=(s[i]=='s');
        pcnt+=(s[i]=='p');
    }
    if(min(scnt, pcnt)==0){
        cout << "YES" << endl;
        return;
    }

    vi arr(n+10, 0);

    int len = 1;
    int nxt = 1;
    pre(i, n-1, 0){
        if(s[i]=='s'){
            int j=i;
            while(j<n && arr[j]==0){
                arr[j]=nxt;
                nxt++;
                j++;
            }
        }
    }
    rep(i, 0, n){
        if(!arr[i]) arr[i]=nxt++;
    }
    // rep(i, 0, n) cout << arr[i] <<  " "; cout << endl;
    rep(i, 0, n){
        if(s[i]=='p' && !isPerm(arr, i+1)){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
