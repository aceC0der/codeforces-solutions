/*
 * Problem   : 1428B - Belted Rooms
 * Link      : https://codeforces.com/contest/1428/problem/B
 * Submission: https://codeforces.com/contest/1428/submission/100714004
 * Rating    : 1200   Tags: graphs, implementation
 * Verdict   : Accepted (31 ms, 1100 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-08 (Practice)
 */
#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
using namespace std;
#define vi vector<int>
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
#define IN freopen("input.txt", "r", stdin);
#define mod 998244353
//int n;
/*bool check(int i, int target, int k){
	int j=i-1, l=i+1;
	if(i==0)
		j=n-1;
	if(i==n-1)
		l=0;
	if(i==target && k!=0)
		return true;
	if(!in[i] || !out[i])
		return false;
	if(res[i]==true)
		return true;
	if(in[i]&&out[i] ){
		if(s[i]=='<'){
			res[i] = check(j, target, ++k);
		}
		else if(s[i]=='>'){
			res[i] = check(l, target, ++k);
		}
	}
	return res[i];
}*/

int main(){
	//IN
	I
	T{
		int n;
		cin >> n;
		vector<bool> res;
		fi(n){
			//in.pb(false);
			//out.pb(false);
			res.pb(false);
		}
		string s;
		cin >> s;
		int cntIN = 0, cntOut = 0;
		fi(n){
			if(s[i]=='-'){
				//in[i]=out[i]=in[i+1]=out[i+1]=true;
				res[i]=res[(i+1)%n]=true;
			}
			else if(s[i]=='<'){
				cntOut++;
			}
			else if(s[i]=='>'){
				cntIN++;
			}
		}
		int ans = 0;
		/*fj(n){
			if(in[j] && out[j] && !res[j]){
				res[j] = check(j, j, 0);
			}
		}*/
		if(!cntIN || !cntOut)
			cout << n << endl;
		else{
			fj(n){
				if(res[j]){
					ans++;
				}
			}
			cout << ans << endl;
		}
		//in.clear();out.clear();res.clear();s.clear();
	}
	return 0;
}
//57475563
