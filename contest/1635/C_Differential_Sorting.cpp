/*
 * Problem   : 1635C - Differential Sorting
 * Link      : https://codeforces.com/contest/1635/problem/C
 * Submission: https://codeforces.com/contest/1635/submission/147089985
 * Rating    : 1200   Tags: constructive algorithms, greedy
 * Verdict   : Accepted (186 ms, 1600 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-02-20 (Contest)
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
    TestCases{
        ll n;
        cin >> n;
        ll arr[n+10];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        bool f = true;
        ll k = 1;
        for(int i=n-1; i>=2; i--){
            if(arr[i]<arr[i-1]){
                f = false;
                break;
            }
            if(arr[i]>=0){
                // cout << i << endl;
                k = i;
                break;
            }
        }
        ll x = (int)1e9;
        if(k-1==0){
            if(arr[0]>arr[1] || arr[1]>arr[2]){
                f = false;
            }
        }
        if(!f) {
            cout << -1 << endl;
            continue;
        }
        if(arr[k]==x){
            k = 1;
        }
        cout << k-1 << endl;
        for(int i=0; i<k-1; i++){
            // arr[i] = arr[k-1] - arr[k];
            cout << i+1 << " " << k << " " << k+1 << endl;
        }
        // for(int i=0; i<n; i++){
        //     cout << arr[i] << " " ;
        // }
        // cout << endl;


    }
    return 0;
}
