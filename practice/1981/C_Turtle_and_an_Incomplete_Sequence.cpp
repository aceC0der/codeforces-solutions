/*
 * Problem   : 1981C - Turtle and an Incomplete Sequence
 * Link      : https://codeforces.com/contest/1981/problem/C
 * Submission: https://codeforces.com/contest/1981/submission/263524986
 * Rating    : 1800   Tags: bitmasks, brute force, constructive algorithms, greedy, implementation, math
 * Verdict   : Accepted (156 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2024-05-31 (Practice)
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
    int n;
    cin >> n;
    vl a(n);
    rep(i, 0, n) cin >> a[i];
    int i=n-2, j=n-1;
    int cnt = 0;
    rep(i, 0, n){
        if(a[i]!=-1) cnt++;
    }
    if(cnt==0){
        bool f = false;
        while(n--){
            cout << (1+f) << " ";
            f =!f;
        }
        cout << endl;
        return;
    }
    i = 0;
    while(i<n && a[i]==-1){
        i++;
    }
    i--;
    while(i>=0){
        if(a[i+1]==1) a[i] = 2;
        else a[i] = a[i+1]/2;
        i--;
    }
    j=n-1;
    while(j>=0 && a[j]==-1){
        j--;
    }
    j++;
    while(j<n){
        if(a[j-1]==1) a[j] = 2;
        else a[j] = a[j-1]/2;
        j++;
    }
    i=n-2, j=n-1;
    cnt = 0;
    while(i>=0 && j>=0){
        int st = j;
        while(j>=0 && a[j]==-1){
            j--;
        }
        if(j<0){
            break;
        }
        i = j-1;
        while(i>=0 && a[i]==-1){
            i--;
        }
        if(i<0){
            break;
        }
        bool f = false;
        int ti = i, tj = j;
        // cout << a[i] << " ####  " << a[j] << endl;
        while(a[i]!=a[j]){
            if(j-i==1){
                if(a[i]!=(a[j]/2) && a[j]!=a[i]/2){
                    f = true;
                }
                break;
            }
            if(a[i]>a[j]){
                a[i+1] = a[i]/2;
                i++;
            }
            else if(a[i]<a[j]){
                a[j-1] = a[j]/2;
                j--;
            }
            else{
                a[i+1] = a[i]*2;
                i++;
            }
        }
        if(!f){
            int t = a[i];
            bool ff = true;
            rep(k, i+1, j){
                if(!ff) a[k] = t;
                else a[k] = t*2;
                ff=!ff;
            }
            i = j-1;
            if(a[i]!=(a[j]/2) && a[j]!=a[i]/2){
                f = true;
            }
        }
        if(f){
            cout << -1 << endl;
            return;
        }
        j = ti;
        cnt++;
    }
    rep(i, 0, n) cout << a[i] << " "; cout << endl;
    
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
