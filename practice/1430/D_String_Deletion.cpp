/*
 * Problem   : 1430D - String Deletion
 * Link      : https://codeforces.com/contest/1430/problem/D
 * Submission: https://codeforces.com/contest/1430/submission/102715617
 * Rating    : 1700   Tags: binary search, data structures, greedy, two pointers
 * Verdict   : Accepted (31 ms, 2500 KB)
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vi a;
        char ch = s[0];
        int cnt = 0;
        rep(i, 0, n){
            if(ch==s[i]){
                cnt++;
            }
            else{
                a.pb(cnt);
                cnt = 1;
                ch = s[i];
            }
        }
        a.pb(cnt);
        int ans=0;
        int sz = a.size();
        cnt = 1;
        int cpos=-1;
        bool flag = false;
        rep(i, 0, sz){
            if(a[i]>1){
                cpos = i;
                break;
            }
            if(i==sz-1)
                flag = true;
        }
        if(!flag){
            rep(i, 0, sz){
                if(flag){
                    //cout << "**" << endl;
                    ans++;
                    i++;
                    continue;
                }
                if(cpos==i){
                    if(a[cpos]>1){
                        ans++;
                        //cout << "*" << endl;
                        bool t=true;
                        rep(j, cpos+1, sz){
                            t=false;
                            if(a[j]>1){
                                cpos = j;
                                break;
                            }
                            if(j==sz-1)
                                flag = true;
                        }
                        if(t)
                            flag=true;
                        continue;
                    }
                    else{
                        bool t=true;
                        rep(j, cpos+1, sz){
                            t=false;
                            if(a[j]>1){
                                cpos = j;
                                break;
                            }
                            if(j==sz-1)
                                flag = true;
                        }
                        if(t)
                            flag=true;
                        if(!flag){
                            ans++;
                            a[cpos]--;
                        }
                        else{
                            ans++;
                            i++;
                        }
                        continue;
                    }
                }
                if(a[cpos]==1){
                    bool t=true;
                    rep(j, cpos+1, sz){
                        t=false;
                        if(a[j]>1){
                            cpos = j;
                            break;
                        }
                        if(j==sz-1)
                            flag = true;
                    }
                    if(t)
                        flag=true;
                }
                if(flag){
                    ans++;
                    i++;
                }
                else{
                    ans++;
                    a[cpos]--;
                }
            }
        }
        //cout << last_pos << endl;
        if(flag){
            if(cpos<0){
                ans = sz/2;
                if(sz%2)
                    ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
