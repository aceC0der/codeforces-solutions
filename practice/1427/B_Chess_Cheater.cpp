/*
 * Problem   : 1427B - Chess Cheater
 * Link      : https://codeforces.com/contest/1427/problem/B
 * Submission: https://codeforces.com/contest/1427/submission/102928909
 * Rating    : 1400   Tags: greedy, implementation, sortings
 * Verdict   : Accepted (77 ms, 700 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-31 (Practice)
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
        int n, k, l=0, ans=0, cgap=0;
        cin >> n >> k;
        string s;
        cin >> s;
        vi L;
        rep(i, 0, n){
            if(s[i]=='L'){
                l++;
                cgap++;
            }
            else{
                if(cgap)
                    L.pb(cgap);
                cgap=0;
                if(i>0&&s[i-1]=='W')
                    ans+=2;
                else
                {
                    ans++;
                }
            }
        }
        int first=0;
        int sz=L.size();
        if(s[0]=='L' && sz>0)
        {
            first = L[0];
            L.erase(L.begin());
            sz--;
        }
        if(k>=l)
            ans = n*2-1;
        else{
            if(ans){
                //cout << "8" << endl;
                sort(all(L));
                rep(i, 0, sz){
                    if(k<=0)
                        break;
                    if(k>=L[i]){
                        ans += L[i]*2+1;
                        k-=L[i];
                    } 
                }
                if(k>0){
                    ans += k*2;
                }
            }
            else
            {
                ans += k*2-1;
                if(ans<0)
                    ans = 0;
            }
            
        }
        cout << ans << endl;
    }

    return 0;
}
