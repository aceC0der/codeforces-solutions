/*
 * Problem   : 1427D - Unshuffling a Deck
 * Link      : https://codeforces.com/contest/1427/problem/D
 * Submission: https://codeforces.com/contest/1427/submission/102978953
 * Rating    : 2000   Tags: constructive algorithms, implementation
 * Verdict   : Accepted (31 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-01 (Practice)
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
    int n, x;
    cin >> n;
    vi a, sorted;
    rep(i, 0, n){
        cin >> x;
        a.pb(x);
    }
    //cout << n << endl;
    vector<vi> ans;
    bool flag = false;
    // if(n==1){
    //     cout << "0" << endl;
    //     return 0;
    // }
    if(n%2==0)
        flag=true;
    rep(i, 1, n+1){
        /*if(sorted==a)
            break;*/
        vi kp;
        if(flag){
            flag = false;
            rep(j, 0, n){
                if(i==1){
                    if(a[j]==1){
                        if(j==n-1){
                            //flag = true;
                            break;
                        }
                        kp.pb(j+1);
                        if(n-j-1>0)
                            kp.pb(n-j-1);
                        break;
                    }
                }
                if(a[j]==i){
                    pre(k, i-2, 0){
                        kp.pb(1);
                    }
                    kp.pb(j-i+2);
                    if(n-1-j>0)
                        kp.pb(n-1-j);
                    break;
                }
            }
        }
        else{
            flag = true;
            rep(j, 0, n){
                if(i==1){
                    if(a[j]==1){
                        if(j==0){
                            //flag = true;
                            break;
                        }
                        if(j>0)
                            kp.pb(j);
                        kp.pb(n-j);
                        break;
                    }
                }
                if(a[j]==i){
                    if(j>0)
                        kp.pb(j);
                    kp.pb(n-i+1-j);
                    pre(k, i-2, 0){
                        kp.pb(1);
                    }
                    break;
                }
            }
        }
        //cout << k << " ";
        vi b = a;
        x = 0;
        int y=0;
        int sz = kp.size();
        for(int j=n-1; j>=0;){
            if(x==sz)
                break;
            pre(z, (y+kp[x]-1), y){
                a[j]=b[z];
                j--;
            }
            //cout << kp[x] << " ";
            y += kp[x];
            x++;
        }
        //cout << endl;
        // cout << "deck: ";
        // rep(i, 0, n){
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        if(sz)
            ans.pb(kp);
    }
    int sz = ans.size();
    cout << sz << endl;
    for(int i=0; i<sz; i++){
        int ksz=ans[i].size();
        cout << ksz << " ";
        rep(j, 0, ksz){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
