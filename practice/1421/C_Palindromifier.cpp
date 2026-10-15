/*
 * Problem   : 1421C - Palindromifier
 * Link      : https://codeforces.com/contest/1421/problem/C
 * Submission: https://codeforces.com/contest/1421/submission/100254985
 * Rating    : 1400   Tags: constructive algorithms, strings
 * Verdict   : Accepted (31 ms, 300 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-03 (Practice)
 */
#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
using namespace std;
#define vl vector<ll>
#define pi pair<int, int>
#define vpi vector<pi>
/*#define A(a) for(auto &x:a)cin>>x;
#define AA(a) for(auto x:a)cout<<x<<" ";cout<<endl;*/
#define fi(n) for(ll i=0;i<n;i++)
#define fj(n) for(ll j=0;j<n;j++)
#define T int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define I ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define B(a) a.begin(),a.end()

int main(){
	//freopen("output.txt", "w", stdout);
	I
	string s;
	cin >> s;
	int len = s.length();
	/* l = s.length();
	string r;
	r = s.substr(1, l-2);
	reverse(B(r));
	s = r+s;
	l = s.length();;
	r = s.substr(1, l-2);
	reverse(B(r));
	s = s+r;
	l = s.length();;
	r = s.substr(1, l-2);
	reverse(B(r));
	s = r+s;
	l = s.length();;
	r = s.substr(1, 1);
	reverse(B(r));
	s = r+s;*/

	//cout << s << endl;
	cout << "3" << endl;
	cout << "L 2"<< endl;
	len += 1;
	cout << "R 2" << endl;
	len += len-2;
	cout << "R " << len-1 << endl;
	//cout << "L 2" << endl; 

	return 0;
}
