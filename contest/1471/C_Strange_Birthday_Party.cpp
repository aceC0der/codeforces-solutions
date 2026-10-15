/*
 * Problem   : 1471C - Strange Birthday Party
 * Link      : https://codeforces.com/contest/1471/problem/C
 * Submission: https://codeforces.com/contest/1471/submission/103439175
 * Rating    : 1300   Tags: brute force, greedy, sortings
 * Verdict   : Accepted (217 ms, 16500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-05 (Contest)
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
#define rep(i, a, b) for(ll i=a; i<b; i++)
#define pre(i, a, b) for(ll i=a; i>=b; i--)

int main()
{
    I
    T{
        ll n, m;
        cin >> n >> m;
        ll x;
        vl k;
        rep(i, 0, n){
            cin >> x;
            k.pb(x-1);
        }
        sort(all(k), greater<int>());
        vector<pair<ll, bool>> c;
        rep(i, 0, m){
            cin >> x;
            c.pb(mp(x, true));
        }
        ll i=0, j=0, sum=0;
        while(i<n){
            if(j<k[i]&&c[j].ss&&j<m){
                //cout << c[j].ff << " ";
                sum+=c[j].ff;
                c[j].ss=false;
                j++;
            }
            else{
                //cout << c[k[i]].ff << " ";
                sum+=c[k[i]].ff;
            }
            i++;
        }
        //cout << endl;
        cout << sum << endl;
    }

    return 0;
}
