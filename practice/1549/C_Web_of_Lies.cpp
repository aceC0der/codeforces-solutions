/*
 * Problem   : 1549C - Web of Lies
 * Link      : https://codeforces.com/contest/1549/problem/C
 * Submission: https://codeforces.com/contest/1549/submission/124673159
 * Rating    : 1400   Tags: graphs, greedy
 * Verdict   : Accepted (342 ms, 21900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-08-02 (Practice)
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
    int n, m;
    cin >> n >> m;
    vector<set<int> > graph(n+1);
    int u, v;
    vi x(n+1, 1);
    rep(i, 0, m){
        cin >> u >> v;
        if(v<u) swap(u, v);
        x[u] = 0;
        graph[u].insert(v);
        graph[v].insert(u);
    }
    int cnt = 0;
    rep(i, 1, n+1){
        if(x[i])
            cnt++;
    }
    int qq;
    cin >> qq;
    while(qq--){
        int q;
        cin >> q;
        //cout << qq <<endl;
        if(q==1){
            cin >> u >> v;
            if(v<u) swap(u, v);

            if(x[u]) cnt--;
            x[u] = 0;
            
            graph[u].insert(v);
            graph[v].insert(u);
        }
        else if(q==2){
            cin >> u >> v;
            graph[u].erase(v);
            graph[v].erase(u);
            if(v<u) swap(u, v);

            if(graph[u].size()==0){
                if(!x[u]) cnt++;
                x[u] = 1;
            }
            else{
                set<int> :: reverse_iterator rit = graph[u].rbegin();
                if(*rit < u && u!=1) {
                    x[u] = 1;
                    cnt++;
                }
            }
            
        }
        else{
            cout << cnt << endl;
        }
    }

    return 0;
}
