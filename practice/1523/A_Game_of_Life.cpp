/*
 * Problem   : 1523A - Game of Life
 * Link      : https://codeforces.com/contest/1523/problem/A
 * Submission: https://codeforces.com/contest/1523/submission/118038489
 * Rating    : 800   Tags: implementation
 * Verdict   : Accepted (30 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-06-01 (Practice)
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
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

int main()
{
    I
    T{
        ll n, m;
        cin >> n >> m;
        string s, a;
        cin >> s;
        vi ones, forward, backward;
        rep(i, 0, n){
            if(s[i] == '1'){
                ones.pb(i); 
                forward.pb(i+1);
                backward.pb(i-1);
            }
        }
        if(!ones.size()){
            cout << s << endl;
            continue;
        }
        for(int k=0; k<m; k++){
            string sc = s;
            int szf = forward.size(), szb = backward.size();
            if(szf == 0 && szb == 0){
                break;
            }
            for(int i=0, j=0; i<szf || j<szb; i++, j++){
                //cout << i << " " << j << endl;
                int posf, posb;
                bool ff = false, bb = false, xf = true, xb = true;
                if(i<szf){
                    posf = forward[i];
                    ff = true;
                }
                if(j<szb){
                    posb = backward[j];
                    bb = true;
                }
                
                if(posf==n && ff){
                    forward.erase(forward.begin()+i);
                    szf--;
                    i--;
                    ff = false;
                    xf = false;
                }
                
                if(posb==-1 && bb){
                    backward.erase(backward.begin()+j);
                    szb--;
                    j--;
                    bb = false;
                    xb = false;
                }
                if(i>=szf) xf = false;
                if(j>=szb) xb = false;
                
                ff = ff && (s[posf] == '0' && (posf+1 ==n || s[posf+1] == '0'));
                bb = bb && (s[posb] == '0' && (posb-1 == -1 || s[posb-1] == '0'));
                //cout << ff << endl;
                if(ff){
                    sc[posf] = '1';
                    forward[i]++;
                }
                else if(xf){
                    forward.erase(forward.begin()+i);
                    szf--;
                    i--;
                }
                //cout << bb << endl;
                if(bb){
                    sc[posb] = '1';
                    backward[j]--;
                }
                else if(xb){
                    backward.erase(backward.begin()+j);
                    szb--;
                    j--;
                }
                //cout << szf << " " << szb << endl;
                
            }
            s = sc;
            //cout << s << endl;
        }
        cout << s << endl;
    }

    return 0;
}
