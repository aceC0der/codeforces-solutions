/*
 * Problem   : 1534B - Histogram Ugliness
 * Link      : https://codeforces.com/contest/1534/problem/B
 * Submission: https://codeforces.com/contest/1534/submission/120318047
 * Rating    : 1100   Tags: greedy, implementation, math
 * Verdict   : Accepted (139 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-06-23 (Practice)
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
        int n;
        cin >> n;
        vi a(n+2);
        a[0] = 0;
        a[n] = 0;
        rep(i, 1, n+1){
            cin >> a[i];
        }
        ll cost=0;
        rep(i, 1, n+2){
            cost += abs(a[i] - a[i-1]);
            //dbg(cost);
        }
        //dbg(a);
        //dbg(cost);
        rep(i, 1, n+2){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                cost -= abs(a[i] - max(a[i-1], a[i+1]));
                //a[i] = max(a[i-1], a[i+1]);
            }
        }
        cout << cost << endl;
    }

    return 0;
}
