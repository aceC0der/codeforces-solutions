/*
 * Problem   : 1517B - Morning Jogging
 * Link      : https://codeforces.com/contest/1517/problem/B
 * Submission: https://codeforces.com/contest/1517/submission/120461443
 * Rating    : 1200   Tags: constructive algorithms, greedy, sortings
 * Verdict   : Accepted (31 ms, 300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-06-24 (Practice)
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
#define CheckBit(x, k) (x & (1LL << k))
#define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << '(' << p.first << ", " << p.second << ')';
}
template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << '{';
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << '}';
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << '[';
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << ']';
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << '[';
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << ']';
}
template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << '[';
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                        }
                    return os << ']';
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu () {
            cerr << endl;
}

template <typename T>
void faltu( T a[], int n ) {
            for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
            cerr << arg << ' ';
                faltu(rest...);
}

int main()
{
    fios
    TestCases{
        int n, m;
        cin >> n >> m;
        vector<vi > a(n, vi(m)), b(n);
        rep(i, 0, n){
            rep(j, 0, m){
                cin >> a[i][j];
            }
            sort(all(a[i]));
        }
        //dbg(a);
        rep(i, 0, m){
            int mpos = 0;
            rep(j, 0, n){
                if(a[mpos][0]>a[j][0]){
                    mpos = j;
                }
            }
            //dbg(mpos);
            //b[i].pb(a[i][mpos]);
            //dbg(a[i].size());
            rep(j, 0, n){
                if(j!=mpos){
                    //cout << a[j][n-1-i];
                    b[j].pb(a[j][m-1-i]);
                    a[j].pop_back();
                }
                else{
                    b[j].pb(a[j][0]);
                    a[j].erase(a[j].begin());
                }
            }
            //dbg(a);
            //dbg(b);
        }
        rep(i, 0, n){
            rep(j, 0, m){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
        
    }

    return 0;
}
