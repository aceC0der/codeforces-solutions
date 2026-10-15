/*
 * Problem   : 1095C - Powers Of Two
 * Link      : https://codeforces.com/contest/1095/problem/C
 * Submission: https://codeforces.com/contest/1095/submission/141677421
 * Rating    : 1400   Tags: bitmasks, greedy
 * Verdict   : Accepted (46 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-01-05 (Practice)
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
    int n, k;
    cin >> n >> k;

    vl pow2(31);
    for(int i=30; i>=0; i--){
        pow2[i] = 1LL << i;
    }
    vl ans;
    int cnt = 0;
    for(int i=30; i>=0; i--){
        if(CheckBit(n, i)) {
            cnt++;
            ans.pb(pow2[i]);
        }
    }
    // dbg(ans);
    if(k<cnt || k > n){
        cout << "NO" << endl;
        return 0;
    }
    k-=cnt;
    for(int i=0; i<ans.size(); i++){
        if(!k) break;
        while(ans[i]!=1 && k){
            ans[i] /= 2;
            ans.pb(ans[i]);
            k--;
        }
    }
    int sz = ans.size();
    cout << "YES" << endl;
    for(int i=0; i<sz; i++){
        cout << ans[i] << " ";
    }

    return 0;
}
