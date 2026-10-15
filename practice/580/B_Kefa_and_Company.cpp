/*
 * Problem   : 580B - Kefa and Company
 * Link      : https://codeforces.com/contest/580/problem/B
 * Submission: https://codeforces.com/contest/580/submission/95936023
 * Rating    : 1500   Tags: binary search, sortings, two pointers
 * Verdict   : Accepted (327 ms, 3100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-10-19 (Practice)
 */
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	vector<pair<ll,ll>> frnd;
	ll n, d, x, y, m=0;
	cin >> n >> d;
	for(ll i=0; i<n; i++){
		cin >> x >> y;
		m=max(m, y);
		frnd.push_back(make_pair(x,y));
	}
	sort(frnd.begin(), frnd.end());
	/*for(int i=0; i<n; i++){
  	cout << frnd[i].first << " " <<frnd[i].second << endl;
  }*/
	ll sum=0, maxi=0;
	//sum=maxi=frnd[0].second;
	for(ll i=0, j=0; i<n&&j<n; i++){
		
		if(frnd[i].first-frnd[j].first<d){
			sum+=frnd[i].second;
		}
		else {
			sum-=frnd[j].second;
			j++;
			i--;
		}
		//cout << i << " " << j << " " << sum << endl;
		maxi = max(sum, maxi);
	}
	maxi = max(m, maxi);
	cout << maxi << endl;

	return 0;
}

