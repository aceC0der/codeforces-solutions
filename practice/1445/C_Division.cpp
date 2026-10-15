/*
 * Problem   : 1445C - Division
 * Link      : https://codeforces.com/contest/1445/problem/C
 * Submission: https://codeforces.com/contest/1445/submission/221966434
 * Rating    : 1500   Tags: math, number theory
 * Verdict   : Accepted (46 ms, 5000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-09-05 (Practice)
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

#define N (int)1e6+1
int spf[N];
/*
    Analysis:
    -> Read the problem statement very carefully
    -> Find out what is given and what is wanted
    -> Try die hard to solve
    -> Prove your idea: why should it work?
    -> Eliminate your wrong ideas as soon as possible
    -> Have you missed any corner case?
    -> never miss post solving Analysis
 
    Remember:  You know what your capability is. Just believe in yourself and work very hard. GOD will never let you down.
*/
vi primes;
void sieve(){
    spf[1] = 1;
    rep(i, 2, N) spf[i] = i;
    rep(i, 4, N){
        spf[i] = 2;
        i++;
    }
    // primes.pb(2);
    for(int i=3; i*i<=N; i++){
        if(spf[i]==i){
            // primes.pb(i);
            for(int j=i*i; j<N; j+=i){
                if(spf[j]==j){
                    spf[j] = i;
                }
            }
        }
    }
    rep(i, 2, N) if(spf[i]==i) primes.pb(i);
}

vpl get_factorized(ll q){
    ll cnt = 0;
    vpl factors;
    for(auto it: primes){
        cnt = 0;
        while(q%it==0){
            cnt++;
            q/=it;
        }
        if(cnt) factors.pb({it, cnt});
        if(q==1) break;
    }
    if(q!=1) factors.pb({q, 1});
    return factors;
}

void solve(){
    ll p, q;
    cin >> p >> q;
    // cout << p << "***" << q << endl;
    vpl factors = get_factorized(q);
    ll mn = 1e18;
    // rep(i, 0, factors.size()){
    //     cout << factors[i].ff << "###" << factors[i].ss << endl;
    // }
    for(auto it: factors){
        ll cnt = 0;
        ll pp = p;
        while(pp%it.ff==0){
            cnt++;
            pp/=it.ff;
        }
        if(cnt<it.ss){
            cout << p << endl;
            return;
        }
        // cout << it.ff << " " << it.ss << " " << cnt << endl;
        ll xp = 1;
        ll pt = cnt-it.ss+1;
        while(pt--){
            xp*=it.ff;
        }
        mn = min(mn, xp);
    }
    // cout << mn << "****" << 746530097LL*746530097LL << endl;
    cout << p/mn << endl;

}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fios
    sieve();
    // cout << primes[211] << endl;
    // for(auto it: primes){
    //     cout << it << endl;
    // }
    TestCases{
        solve();
    }
    return 0;
}
