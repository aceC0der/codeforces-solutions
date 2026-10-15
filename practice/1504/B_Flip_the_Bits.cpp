/*
 * Problem   : 1504B - Flip the Bits
 * Link      : https://codeforces.com/contest/1504/problem/B
 * Submission: https://codeforces.com/contest/1504/submission/120749033
 * Rating    : 1200   Tags: constructive algorithms, greedy, implementation, math
 * Verdict   : Accepted (46 ms, 3900 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-06-27 (Practice)
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
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2 ;
        vi a(n), c(n, 0);
        int cnt = 0, cntt = 0;
        rep(i, 0, n){
            if(s1[i]=='1'){
                cnt++;
            }
            else cntt++;
            if((i+1)%2==0 && cnt==cntt) c[i] = 1;
        }
        //dbg(c);
        cnt = 0;
        bool flag = true;
        pre(i, n-1, 0){
            if(cnt%2==1 && s1[i]==s2[i] && c[i]==0){
                //dbg(i);
                flag = false;
                break;
            }
            else if(cnt%2==1 && s1[i]==s2[i] && c[i]==1){
                cnt++;
            }
            if(s1[i]!=s2[i]){
                if(cnt%2) continue;
                else if(c[i]){
                    //dbg(i+1);
                    cnt++;
                }
                else{
                    flag = false;
                    break;
                }
            }
        }
        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}
