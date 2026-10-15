/*
 * Problem   : 1613A - Long Comparison
 * Link      : https://codeforces.com/contest/1613/problem/A
 * Submission: https://codeforces.com/contest/1613/submission/137665814
 * Rating    : 900   Tags: implementation, math
 * Verdict   : Accepted (31 ms, 100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-12-01 (Contest)
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
        int x1, p1, x2, p2;
        vi xx, yy;

        cin >> x1 >> p1;
        cin >> x2 >> p2;

        int n10 = p1, n20= p2, d, nd1=0, nd2=0, x11, x22;
        bool flag = false;
        while(x1>0){
            d = x1%10;
            if(d==0 && !flag) {
                n10++;
            }
            else if(!flag){
                flag = true;
                x11 = x1;
                nd1 = n10;
            }
            if(flag){
                nd1++;
                xx.pb(d);
            }
            x1/=10;
        }
        flag = false;
        while(x2>0){
            d = x2%10;
            if(d==0 && !flag) {
                n20++;
            }
            else if(!flag){
                flag = true;
                x22 = x2;
                nd2 = n20;
            }
            if(flag){
                nd2++;
                yy.pb(d);
            }
            x2/=10;
        }
        
        int ans = 0;
        if(nd1>nd2) ans = 1;
        else if(nd1<nd2) ans = -1;
        else{
            reverse(all(xx));
            reverse(all(yy));
            int s1, s2;
            s1 = xx.size();
            s2 = yy.size();
            for(int i=0; i<s1 || i<s2; i++){
                if(i>=s1){
                    ans = -1;
                    break;
                }
                else if(i>=s2){
                    ans = 1;
                    break;
                }
                if(xx[i]>yy[i]){
                    ans = 1;
                    break;
                }
                else if(xx[i]<yy[i]){
                    ans = -1;
                    break;
                }
            }
        }

        if(ans==1) cout << ">" << endl;
        else if(ans==-1) cout << "<" << endl;
        else cout << "=" << endl;

        // dbg(xx, yy);
    
    }

    return 0;
}
