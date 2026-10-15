/*
 * Problem   : 1976C - Job Interview
 * Link      : https://codeforces.com/contest/1976/problem/C
 * Submission: https://codeforces.com/contest/1976/submission/263337576
 * Rating    : 1600   Tags: binary search, dp, greedy, implementation, two pointers
 * Verdict   : Accepted (218 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-30 (Contest)
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
    int n, m;
    cin >> n >> m;
    int t = n+m+1;
    vl pr(t), tr(t);
    rep(i, 0, t) cin >> pr[i];
    rep(i, 0, t) cin >> tr[i];
    ll ttlP = 0;
    ll ttlT = 0;
    vl ans;
    ll cntP=n, cntT=m;
    ll score = 0;
    ll notP = -1, notT = -1;
    ll lastP = -1, lastT = -1;
    rep(i, 0, t-1){
        if(pr[i]>tr[i]){
            if(cntP){
                score+=pr[i];
                lastP = i;
                cntP--;
            }
            else{
                if(notP==-1) notP = i;
                score+=tr[i];
                lastT = i;
                cntT--;
            }
        }
        else{
            if(cntT){
                score+=tr[i];
                cntT--;
                lastT = i;
            }
            else{
                if(notT==-1) notT = i;
                score+=pr[i];
                cntP--;
                lastP = i;
            }
        }
    }
    // cout << lastP << " " << lastT << endl;
    // cout << notP << " " << notT << endl;
    rep(i, 0, t-1){
        ll tmp = score;
        if(pr[i]>tr[i]){
            if(i<=lastP){
                tmp-=pr[i];
                if(notP!=-1){
                    tmp+=pr[notP];
                    tmp-=tr[notP];
                    tmp+=tr[t-1];
                }
                else{
                    tmp+=pr[t-1];
                }
            }
            else{
                tmp-=tr[i];
                tmp+=tr[t-1];
            }
        }
        else{
            if(i<=lastT){
                tmp-=tr[i];
                if(notT!=-1){
                    tmp+=tr[notT];
                    tmp-=pr[notT];
                    tmp+=pr[t-1];
                }
                else{
                    tmp+=tr[t-1];
                }
            }
            else{
                tmp-=pr[i];
                tmp+=pr[t-1];
            }
        }
        cout << tmp << " ";
    }
    
    cout << score << endl;
    
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
