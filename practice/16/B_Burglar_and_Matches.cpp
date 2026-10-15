/*
 * Problem   : 16B - Burglar and Matches
 * Link      : https://codeforces.com/contest/16/problem/B
 * Submission: https://codeforces.com/contest/16/submission/94925849
 * Rating    : 900   Tags: greedy, implementation, sortings
 * Verdict   : Accepted (62 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-08 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long 
#define F first
#define S second
#define PB push_back
using namespace std;

bool cmp(pair<ll, ll> a, pair<ll, ll> b){
	return (a.S>b.S);
}

int main(){
	vector< pair<ll, ll> > box;
	pair<ll , ll> x;
	ll n, m;
	cin >> n >> m;
	for(int i=0; i<m; i++){
		cin >> x.F >> x.S ;
		box.PB(x);
	}
	sort(box.begin(),box.end(), cmp);
	ll ans=0;
	/*for(int i=0; i<m; i++){
		cout << box[i].F << " " << box[i].S << endl;
	}*/
	for(int i=0; i<m; i++){
		if(n==0)
			break;
		if(n>=box[i].F){
			ans+=box[i].F*box[i].S;
			n-=box[i].F;
		}
		else{
			ans+=n*box[i].S;
			n=0;
		}
	}
	cout << ans << endl;

	return 0;
}
