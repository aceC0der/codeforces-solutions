/*
 * Problem   : 1539D - PriceFixed
 * Link      : https://codeforces.com/contest/1539/problem/D
 * Submission: https://codeforces.com/contest/1539/submission/120197712
 * Rating    : 1600   Tags: binary search, greedy, implementation, sortings, two pointers
 * Verdict   : Accepted (93 ms, 2400 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-06-21 (Practice)
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
#define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}
 
template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << "{";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "}";
}
 
template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
 
template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
 
template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                            }
                    return os << "]";
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
bool cmp(pair<ll, ll> a, pair<ll, ll> b){
    return a.ss<b.ss;
}

int main()
{
    fios
    int n;
    cin >> n;
    vector<pair<ll, ll> > p(n);
    rep(i, 0, n){
        cin >> p[i].ff >> p[i].ss;
    }
    sort(all(p), cmp);
    ll cost = 0, p1 = 0, p2 = n-1, cnt = 0, lcnt = 0;
    vl a(n);
    a[n-1] = p[n-1].ff;
    pre(i, n-2, 0){
        a[i] += a[i+1] + p[i].ff;
        //cout << a[i] << endl;
    }
    //dbg(p);
    while(p1<p2){
        ll ineeded = p[p1].ss-cnt-lcnt;
        if(ineeded<=0){
            cnt += p[p1].ff;
            p[p1].ff = 0;
            p1++;
        }
        else{
            while(ineeded > 0 && p2>p1){
                if(p[p2].ff>=ineeded){
                    lcnt += ineeded;
                    p[p2].ff -= ineeded;
                    ineeded = 0;
                }
                else{
                    lcnt += p[p2].ff;
                    ineeded -= p[p2].ff;
                    p[p2].ff = 0;
                    p2--;
                }
            }
        }
    }
    if(p[p1].ff>0){
        ll ineeded = p[p1].ss-cnt-lcnt;
        if(ineeded<=0) cnt+=p[p1].ff;
        else if(ineeded>=p[p1].ff){
            lcnt+=p[p1].ff;
        }
        else{
            lcnt += ineeded;
            cnt += p[p1].ff-ineeded;
        }
        p[p1].ff = 0;
    }

    cost = cnt + lcnt*2;
    cout << cost << endl;

    return 0;
}
