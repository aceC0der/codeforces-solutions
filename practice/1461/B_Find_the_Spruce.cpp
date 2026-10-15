/*
 * Problem   : 1461B - Find the Spruce
 * Link      : https://codeforces.com/contest/1461/problem/B
 * Submission: https://codeforces.com/contest/1461/submission/101039016
 * Rating    : 1400   Tags: brute force, dp, implementation
 * Verdict   : Accepted (31 ms, 1500 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-12 (Practice)
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
#define All(a) a.begin(),a.end()
#define IN freopen("input.txt", "r", stdin);
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)
#define mod 998244353

int main()
{
	I
	T{
		int n, m;
		cin >> n >> m;
		string s[n];
		int dp[n][m];
		/*rep(i, 0, n){
			rep(j, 0, m){
				dp[n][m]= 0;
			}
		}*/
		fi(n){
			cin >> s[i];
		}
		/*rep(i, 0, m){
			if(s[n-1][i]=='*'){
				dp[n-1][i]==1;
			}
			else{
				dp[n-1][i]=0;
			}
		}*/
		pre(i, n-1, 0){
			rep(j, 0, m){
				if(s[i][j]=='*'){
					if(i+1<n && j-1>=0 && j+1<m)
						dp[i][j]=min(dp[i+1][j-1], min(dp[i+1][j],dp[i+1][j+1]))+1;
					else
						dp[i][j]=1;
				}
				else
					dp[i][j] = 0;
			}
		}

		int ans = 0;
		fi(n){
			fj(m){
				//cout << dp[i][j] <<" ";
				ans+=dp[i][j];
			}
			//cout << endl ;
		}
		cout << ans << endl;
	}

	return 0;
}
