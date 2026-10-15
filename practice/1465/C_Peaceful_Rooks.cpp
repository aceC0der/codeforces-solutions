/*
 * Problem   : 1465C - Peaceful Rooks
 * Link      : https://codeforces.com/contest/1465/problem/C
 * Submission: https://codeforces.com/contest/1465/submission/102429146
 * Rating    : 1700   Tags: dfs and similar, dsu, greedy, implementation
 * Verdict   : Accepted (77 ms, 1400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-27 (Practice)
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


vi row, col;
bool flag;
vector<bool> diagonal;
int root;
void findCycle(int index){
    if(diagonal[index])
        return;
    if(root==col[index]){
        flag = true;
        return;
    }
    diagonal[index]=true;
    findCycle(col[index]);
}

int main()
{
    I
    T{
        int n, m;
        cin >> n >> m;
        int c, r;
        int cnt=0;
        rep(i, 0, n){
            row.pb(-1);
            col.pb(-1);
            diagonal.pb(true);
        }

        rep(j, 0, m){
            cin >> c >> r;
            row[--r]=--c;
            col[c]=r;
            if(c!=r){
                diagonal[c]=false;
                cnt++;
            }
        }

        /*rep(i, 0, n){
            cout << col[i] << " ";
        }
        cout << endl;
        rep(i, 0, n){
            cout << diagonal[i] << " ";
        }
        cout << endl;*/
        rep(i, 0, n){
            flag = false;
            root = i;
            findCycle(root);
            if(flag)
                cnt++;
        }
        cout << cnt << endl;
        row.clear();col.clear();diagonal.clear();
    }

    return 0;
}
