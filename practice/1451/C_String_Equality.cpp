/*
 * Problem   : 1451C - String Equality
 * Link      : https://codeforces.com/contest/1451/problem/C
 * Submission: https://codeforces.com/contest/1451/submission/99200490
 * Rating    : 1400   Tags: dp, greedy, hashing, implementation, strings
 * Verdict   : Accepted (498 ms, 2600 KB)
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
	//freopen("output.txt", "w", stdout);
	I
	T{
		int n, k;
		cin >> n >> k;
		string a, b;
		cin >> a >> b;
		vl vala;
		vl valb;
		fi(26){
			vala.pb(0);
			valb.pb(0);
		}
		fi(n){
			char x, y;
			x = a[i];
			y = b[i];
			vala[(int)x-97]++;
			valb[(int)y-97]++;
		}
		bool chk = true;
		
		for(int i=0; i<26;){
			if(vala[i]==valb[i]) i++;
			else if(valb[i]>vala[i]){
				chk = false;
				break;
			}
			else{
				if(vala[i]>=k){
					//cout << "k";
					vala[i]-=k;
					vala[i+1]+=k;
				}
				else{
					//cout << "2 " << endl;
					chk = false;
					break;
				}
			}
		}
		/*fi(26){
			cout << vala[i] << " ";
		}
		cout << endl;
		fi(26){
			cout << valb[i] << " ";
		}
		cout << endl;*/
		//cout << cng << endl;
		if(chk)
			cout << "Yes" << endl;
		else 
			cout << "No" << endl;

	}
	return 0;
}
