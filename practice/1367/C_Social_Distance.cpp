/*
 * Problem   : 1367C - Social Distance
 * Link      : https://codeforces.com/contest/1367/problem/C
 * Submission: https://codeforces.com/contest/1367/submission/102743066
 * Rating    : 1300   Tags: constructive algorithms, greedy, math
 * Verdict   : Accepted (61 ms, 3200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-30 (Practice)
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
#define fi(n) for(ll i=0;i<n;i++)
#define fj(n) for(ll j=0;j<n;j++)
#define T int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define I ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

int main()
{
    I
    T{
        int n, k;
        cin >> n >> k;
        string s;
        cin >>s ;
        vi a;
        vpi ap;
        //ap.pb(mp(8,9));
        char ch = '0';
        int cnt = 0;
        int start=0, finish=0;
        rep(i, 0, n){
            if(ch==s[i]){
                if(cnt==0)
                    start=i;
                cnt++;
            }
            else{
                finish=i-1;
                if(cnt>0){
                    a.pb(cnt);
                    //p = mp(s, f)
                    ap.pb(mp(start,finish));
                }
                cnt = 0;
            }
        }
        if(s[n-1]=='0'){
            a.pb(cnt);
            ap.pb(mp(start,n-1));
        }
        int sz=a.size();
        /*rep(i, 0, sz){
            cout << a[i] << " ";
        }
        cout << endl;
        rep(i, 0, sz){
            cout << ap[i].ff << "," << ap[i].ss << " " ; 
        }
        cout << endl;*/
        int ans=0;
        rep(i, 0, sz){
            if(ap[i].ff==0 && ap[i].ss==n-1){
                ans = n/(k+1);
                if(n%(k+1))
                    ans++;
            }
            else if(ap[i].ff==0 || ap[i].ss==n-1){
                ans += a[i]/(k+1);
            }
            else if(a[i]>=2*k+1){
                ans++;
                a[i]-=2*k+1;
                ans+=a[i]/(k+1);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
