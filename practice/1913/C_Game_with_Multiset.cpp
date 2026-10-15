/*
 * Problem   : 1913C - Game with Multiset
 * Link      : https://codeforces.com/contest/1913/problem/C
 * Submission: https://codeforces.com/contest/1913/submission/237897207
 * Rating    : 1300   Tags: binary search, bitmasks, brute force, greedy
 * Verdict   : Accepted (124 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-12-19 (Practice)
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



void solve(){
    int m;
    cin >> m;

    vector<bool> isAvailable(35, false);
    vi freq(35, 0);
    while(m--){
        int q, x;
        cin >> q >> x;
        if(q==1){
            isAvailable[x] = true;
            freq[x]++;
        }
        else{
            bool f = true;
            
            vi nfreq = freq;

            rep(i, 0, 32){
                if(!CheckBit(x, i)){
                    nfreq[i+1] += nfreq[i]/2;
                    nfreq[i]=(nfreq[i]&1);
                }
                else if(nfreq[i]>2){
                    nfreq[i+1] += (nfreq[i]-1)/2;
                    if(nfreq[i]&1){
                        nfreq[i] = 2;
                    }
                    else{
                        nfreq[i] = 1;
                    }
                }
            }
            // rep(i, 0, 32) cout << "(" << nfreq[i] << "," << CheckBit(x,i) << ") "; cout << endl;
            rep(i, 0, 32){
                if(CheckBit(x, i)){
                    if(nfreq[i]) continue;
                    if(!CheckBit(x, i-1) && nfreq[i-1]==2) continue;
                    f = false;
                    break;
                }
            }
            cout << (f ? "YES": "NO" ) << endl;
        }
    }
    
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("INPUT.txt", "r", stdin);
        freopen("OUTPUT.txt", "w", stdout);
    #endif
 
    fios
    solve();    
    return 0;
}
