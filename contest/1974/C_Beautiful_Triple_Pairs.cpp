/*
 * Problem   : 1974C - Beautiful Triple Pairs
 * Link      : https://codeforces.com/contest/1974/problem/C
 * Submission: https://codeforces.com/contest/1974/submission/261881817
 * Rating    : 1400   Tags: combinatorics, data structures
 * Verdict   : Accepted (2577 ms, 19000 KB)
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

bool cmp1(pair<vi, ll> a, pair<vi,ll> b){
    if(a.ff[0]==b.ff[0]){
        return a.ff[1]<b.ff[1];
    }
    return a.ff[0]<b.ff[0];
}

bool cmp2(pair<vi, ll> a, pair<vi,ll> b){
    if(a.ff[0]==b.ff[0]){
        return a.ff[2]<b.ff[2];
    }
    return a.ff[0]<b.ff[0];
}

bool cmp3(pair<vi, ll> a, pair<vi,ll> b){
    if(a.ff[1]==b.ff[1]){
        return a.ff[2]<b.ff[2];
    }
    return a.ff[1]<b.ff[1];
}

ll count(int mode, vector<pair<vi,ll>>& unq, vl& freq){
    if(mode==1) sort(all(unq), cmp1);
    else if(mode==2) sort(all(unq), cmp2);
    else sort(all(unq), cmp3);

    int i = 0;
    int n = unq.size();
    int a, b;

    if(mode==1) a=0, b=1;
    else if(mode==2) a=0, b=2;
    else a = 1, b = 2;

    // cout << "MODE " << mode << endl;
    rep(i, 0, unq.size()){
        freq[i] = unq[i].ss;
        // cout << unq[i].ff[0] << " "<< unq[i].ff[1] << " " << unq[i].ff[2] << " ---> " << freq[i] << endl; 
    }
    

    ll ans = 0;
    ll cnt = 0;
    while(i<n){
        int j=i+1;
        while(j<n && unq[i].ff[a]==unq[j].ff[a] && unq[i].ff[b] == unq[j].ff[b]){
            j++;
        }
        int t = j;
        j--;
        while(j>=i){
            ans += freq[j]*cnt;
            cnt += freq[j];
            j--;
        }


        cnt = 0;
        i = t;
    }
    // cout<< "answer ::: " << ans << endl;
    return ans;
}

void solve(){
    int n;
    cin >> n;
    vi arr(n);
    rep(i, 0, n) cin >> arr[i];
    vector<vi> triples;
    vector<pair<vi, ll>> unq;
    int a, b, c;
    a = arr[0], b = arr[1], c = arr[2];
    int j = 3;
    vi x;
    x.pb(a);x.pb(b);x.pb(c);
    triples.pb(x);
    while(j<n){
        a = b;
        b = c;
        c = arr[j];
        j++;
        vi y;
        y.pb(a);y.pb(b);y.pb(c);
        triples.pb(y);
    }
    sort(all(triples));

    vl freq;
    ll cnt = 1;
    unq.pb({triples[0], 0});
    rep(i, 1, triples.size()){
        if(triples[i]!=triples[i-1]){
            freq.pb(cnt);
            unq.pb({triples[i], 0});
            cnt = 1;

        }
        else cnt++;
    }
    freq.pb(cnt);
    rep(i, 0, unq.size()){
        unq[i].ss = freq[i];
        // cout << unq[i].ff[0] << " "<< unq[i].ff[1] << " " << unq[i].ff[2] << " ---> " << unq[i].ss << endl; 
    }
    // cout << endl;
    // set<vi> trps;
    ll ans = 0;
    rep(i, 1, 4){
        ans += count(i, unq, freq);
    }
    cout << ans << endl;
    

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
