/*
 * Problem   : 1435B - A New Technique
 * Link      : https://codeforces.com/contest/1435/problem/B
 * Submission: https://codeforces.com/contest/1435/submission/100476238
 * Rating    : 1100   Tags: constructive algorithms, implementation
 * Verdict   : Accepted (374 ms, 1200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-06 (Practice)
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
#define IN freopen("input.txt", "r", stdin);
#define mod 998244353

vector<int> row[505], tmp;
void printRow(int x, int n , int m){
	fi(n){
		tmp = row[i];
		//sort(B(tmp));
		fj(m){
			if(row[i][j]==x){
				cout << row[i][0];
				for(int j=1; j<m; j++){
					cout << " " <<  row[i][j];
				}
				cout << endl;
				return;
			}
		}
	}
}

int main(){
	//IN
	I
	T{
		int n, m, x;
		cin >> n >> m;
		fi(n){
			fj(m){
				cin >> x;
				row[i].pb(x);
			}
		}
		/*fi(n){
			fj(m){
				/*int x;
				cin >> x;
				cout << row[i][j] << " " ;
			}
			cout << endl;
		}*/
		//vl col[m];
		fi(m){
			fj(n){
				cin >> x;
				if(i==0){
					//cout << x << endl;
					printRow(x, n, m);
				}
				//col[i].pb(x);
			}
		}
		fi(n){
			row[i].clear();
		}
	}
	
	return 0;
}
//57475563
