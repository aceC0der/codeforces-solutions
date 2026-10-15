/*
 * Problem   : 1534A - Colour the Flag
 * Link      : https://codeforces.com/contest/1534/problem/A
 * Submission: https://codeforces.com/contest/1534/submission/120305925
 * Rating    : 800   Tags: brute force, implementation
 * Verdict   : Accepted (46 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-06-22 (Practice)
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
        int n, m;
        cin >>n >> m;
        string s[n];
        rep(i, 0, n){
            cin >> s[i];
        }
        bool chk = false;
        int r=-1, w=-1;
        rep(i, 0, n){
            rep(j, 0, m){
                if(s[i][j] == 'R') {
                    r = (i+j)%2;
                    r ? w = 0 : w = 1;
                    chk = true;
                    break;
                }
                else if(s[i][j] == 'W'){
                    w = (i+j)%2;
                    w ? r = 0 : r = 1;
                    chk = true;
                    break; 
                }
            }
            if(chk) break;
        }
        if(r==-1){
            r = 0;
            w = 1;
        }
        chk = false;
        rep(i, 0, n){
            rep(j, 0, m){
                if(s[i][j] == '.'){
                    if((i+j)%2 == r) s[i][j] = 'R';
                    else s[i][j] = 'W';
                }
                if(((i+j)%2==r && s[i][j]=='W')||((i+j)%2==w && s[i][j]=='R')){
                    chk = true;
                    break;
                }
            }
            if(chk) break;
        }
        if(chk) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            rep(i, 0, n){
                cout << s[i] << endl;
            }
        }
    }

    return 0;
}
