/*
 * Problem   : 1393B - Applejack and Storages
 * Link      : https://codeforces.com/contest/1393/problem/B
 * Submission: https://codeforces.com/contest/1393/submission/106999638
 * Rating    : 1400   Tags: constructive algorithms, data structures, greedy, implementation
 * Verdict   : Accepted (373 ms, 400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-02-09 (Practice)
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
#define N 100005

int a[N];
int cnt[10];
bool chk(){
    if(cnt[8]>0 || cnt[4]>=2 || (cnt[6]>0 && cnt[2]>=2) || (cnt[4]>0 && cnt[2]>=3)) return true;
    return false; 
}

int main()
{
    I
    // rep(i, 0, N){
    //     a[i]=0;
    // }
    // rep(i, 0, 10){
    //     cnt[i]=0;
    // }
    T{
        int x;
        cin >> x;
        a[x]++;
        cnt[a[x]]++;
    }
    int q;
    cin >> q;
    while(q--){
        char s;
        cin >> s;
        int x;
        cin >> x;
        if(s=='+'){
            a[x]++;
            cnt[a[x]]++;
        }
        else{
            cnt[a[x]]--;
            a[x]--;
        }
        if(chk()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
