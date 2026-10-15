/*
 * Problem   : 231C - To Add or Not to Add
 * Link      : https://codeforces.com/contest/231/problem/C
 * Submission: https://codeforces.com/contest/231/submission/88884794
 * Rating    : 1600   Tags: binary search, sortings, two pointers
 * Verdict   : Accepted (404 ms, 5200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-08-04 (Practice)
 */
#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
ll a[100010];
ll sum[100010];
int main()
{
    ll n,k;
    cin>>n>>k;
    for(ll i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for(ll i=1;i<=n;i++)
        sum[i]=sum[i-1]+a[i];
    ll b=0;
    ll ans=a[1],times=1;
    for(int i=2;i<=n;i++)
    {
        while((i-b)*a[i]-(sum[i]-sum[b])>k)
            b++;
        if(i-b>times)
        {
            times=i-b;
            ans=a[i];
        }
    }
    cout<<times<<" "<<ans<<endl;
}
