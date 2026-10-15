/*
 * Problem   : 1451D - Circle Game
 * Link      : https://codeforces.com/contest/1451/problem/D
 * Submission: https://codeforces.com/contest/1451/submission/99203853
 * Rating    : 1700   Tags: games, geometry, math
 * Verdict   : Accepted (46 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-11-22 (Practice)
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
	I
	bool player = true;
	T{
		ll d, k;
		cin >> d >> k;

		ll x = 0, y = 0;
		bool win = true;
		bool flag = true;

		while(1){
			if(win)
				x+=k;
			else
				y+=k;
			win = !win;
			if((x*x+y*y)>(d*d))
				break;
			
		}
		//cout << x << " " << y << endl;
		if(!win)
			cout << "Utkarsh" << endl;
		else
			cout << "Ashish" << endl;
		player = win;
	}
	return 0;
}
