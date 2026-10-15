/*
 * Problem   : 1786D - Letter Exchange
 * Link      : https://codeforces.com/contest/1786/problem/D
 * Submission: https://codeforces.com/contest/1786/submission/210719606
 * Rating    : 1900   Tags: brute force, constructive algorithms, graphs, implementation
 * Verdict   : Accepted (93 ms, 8700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2023-06-23 (Practice)
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

class transfer{
public:
    int from, to;
    char f, t;
};

void solve(){
    int n;
    cin >> n;
    vector<string> sarr(n);
    rep(i, 0, n) cin >> sarr[i];
    vpi dokan;
    rep(i, 0, n){
        string s = sarr[i];
        int cn=0, cw=0, ci=0;
        rep(j, 0, 3){
            cn+=(s[j]=='n');
            cw+=(s[j]=='w');
            ci+=(s[j]=='i');
        }
        if(cn==3 || cw==3 || ci==3){
            if(cn==3){
                dokan.pb({90, i});
                dokan.pb({99, i});
            }
            else if(cw==3){
                dokan.pb({-9, i});
                dokan.pb({-99, i});
            }
            else if(ci==3){
                dokan.pb({9, i});
                dokan.pb({-90, i});
            }
        }
        else if(cn==2 || cw==2 || ci==2){
            if(cn==2){
                if(!cw){
                    dokan.pb({99, i});
                }
                else{
                    dokan.pb({90, i});
                }
            }
            else if(cw==2){
                if(!cn){
                    dokan.pb({-99, i});
                }
                else dokan.pb({-9, i});
            }
            else{
                if(!cw) dokan.pb({9, i});
                else dokan.pb({-90, i});
            }
        }
    }
    vector<transfer> transferList;
    map<int, vector<int>> m;
    sort(all(dokan));
    for(auto it: dokan){
        // cout << it.ff << " ";
        m[it.ff].pb(it.ss);
    }
    // cout << endl;
    int val[] = {90, 9, 99, -9, -90, -99};
    map<char, vi> left;
    vector<char> needi;
    // cout << dokan.size() << endl;
    rep(i, 0, 6){
        int v = val[i];
        // cout << v << endl;
        // cout << m[v].size() << " " << m[-v].size() << endl;
        while(m[val[i]].size()){
            if(m[-v].size()){
                transfer tr;
                tr.from = m[v].back()+1;
                tr.to = m[-v].back()+1;
                m[v].pop_back();
                m[-v].pop_back();
                if(v==90){
                    tr.f = 'n';
                    tr.t = 'i';
                }
                else if(v==9){
                    tr.f = 'i';
                    tr.t = 'w';
                }
                else if(v==99){
                    tr.f = 'n';
                    tr.t = 'w';
                }
                transferList.pb(tr);
            }
            else{
                if(v==90 || v==99) left['n'].pb(m[v].back()+1);
                else if(v==9 || v==-90) {
                    left['i'].pb(m[v].back()+1);
                    if(v==9) needi.pb('w');
                    else needi.pb('n');
                }
                else left['w'].pb(m[v].back()+1);
                m[v].pop_back();
            }
        }
    }
    if(needi.size()){
        rep(i, 0, needi.size()){
            // cout << needi[i] << " " ;
            transfer tr;
            tr.from = left['i'][i];
            tr.to = left[needi[i]][i];
            tr.f = 'i';
            tr.t = needi[i];
            transferList.pb(tr);
            tr.from = tr.to;
            
            if(needi[i] == 'w'){
                tr.t = 'n';
                tr.to = left['n'][i];
            }
            else{
                tr.t = 'w';
                tr.to = left['w'][i];
            }
            transferList.pb(tr);
        }
        // cout << endl;
    }
    cout << transferList.size() << endl;
    for(auto it: transferList){
        cout << it.from << " " << it.f << " " << it.to << " " << it.t << endl;
    }

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
