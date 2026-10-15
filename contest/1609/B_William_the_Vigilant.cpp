/*
 * Problem   : 1609B - William the Vigilant
 * Link      : https://codeforces.com/contest/1609/problem/B
 * Submission: https://codeforces.com/contest/1609/submission/137253768
 * Rating    : 1100   Tags: implementation, strings
 * Verdict   : Accepted (62 ms, 300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2021-11-28 (Contest)
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

string txt, pat = "abc";
void computeLPSArray(string pat, int M,
                                 int lps[])
{
     
    // Length of the previous longest
    // prefix suffix
    int len = 0;
    int i = 1;
    lps[0] = 0; // lps[0] is always 0
 
    // The loop calculates lps[i] for
    // i = 1 to M-1
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
             
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0)
            {
                len = lps[len - 1];
 
                // Also, note that we do not
                // increment i here
            }
            else // if (len == 0)
            {
                lps[i] = len;
                i++;
            }
        }
    }
}
 
int KMPSearch()
{
    int M = pat.length();
    int N = txt.length();
 
    // Create lps[] that will hold the longest
    // prefix suffix values for pattern
    int lps[M];
    int j = 0; // index for pat[]
 
    // Preprocess the pattern (calculate lps[]
    // array)
    computeLPSArray(pat, M, lps);
 
    int i = 0; // index for txt[]
    int res = 0;
    int next_i = 0;
 
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
        if (j == M)
        {
             
            // When we find pattern first time,
            // we iterate again to check if there
            // exists more pattern
            j = lps[j - 1];
            res++;
        }
 
        // Mismatch after j matches
        else if (i < N && pat[j] != txt[i])
        {
             
            // Do not match lps[0..lps[j-1]]
            // characters, they will match anyway
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return res;
}

int main()
{
    fios
    int n, q, qq;
    char c;
    cin >> n >> q;
    cin >> txt;
    int cnt = KMPSearch();
    while(q--){
        cin >> qq >> c;
        bool f = false, ff = false;
        char x = txt[qq-1];
        if(x=='a') {
            if(qq+1<n && txt[qq]=='b' && txt[qq+1]=='c'){
                f = true;
            }
        }
        else if(x=='b') {
            if(qq-2>=0 && txt[qq-2]=='a' && txt[qq]=='c'){
                f = true;
            }
        }
        else if(x=='c') {
            if(qq-3>=0 && txt[qq-3]=='a' && txt[qq-2]=='b'){
                f = true;
            }
        }
        
        txt[qq-1] = c;

        if(c=='a') {
            if(qq+1<n && txt[qq]=='b' && txt[qq+1]=='c'){
                ff = true;
            }
        }
        else if(c=='b') {
            if(qq-2>=0 && txt[qq-2]=='a' && txt[qq]=='c'){
                ff = true;
            }
        }
        else if(c=='c') {
            if(qq-3>=0 && txt[qq-3]=='a' && txt[qq-2]=='b'){
                ff = true;
            }
        }
        //cout << c << endl;
        //dbg(f , ff);
        if(f==false && ff) cnt++;
        else if(f && ff==false) cnt--;

        cout << cnt << endl;
    }




    return 0;
}
