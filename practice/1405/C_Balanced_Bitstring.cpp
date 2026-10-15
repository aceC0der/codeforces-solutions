/*
 * Problem   : 1405C - Balanced Bitstring
 * Link      : https://codeforces.com/contest/1405/problem/C
 * Submission: https://codeforces.com/contest/1405/submission/105053313
 * Rating    : 1500   Tags: greedy, implementation, strings
 * Verdict   : Accepted (62 ms, 1000 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-01-22 (Practice)
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int chk = -1;
        bool flag = true;
        rep(i, 0, k){
            chk = -1;
            if(s[i]!='?'){
                chk = s[i]-'0';
            }
            for(int j = i+k; j<n; j+=k){
                if(chk!=-1 && s[j]!='?' &&s[j]-'0'!=chk){
                    flag = false;
                    break;
                }
                if(chk==-1 && s[j]!='?'){
                    chk = s[j]-'0';
                    if(s[i]=='?'){
                        s[i]=s[j];
                    }
                }
            }
            if(!flag){
                break;
            }
        }
        int o, z;
        o = z = 0;
        rep(i, 0, k){
            if(s[i]=='0'){
                z++;
            }
            else if(s[i]=='1'){
                o++;
            }
        }
        k/=2;
        // cout << s << endl;
        // cout << z << " " << o << endl;
        if(z>k || o>k){
            flag = false;
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}
