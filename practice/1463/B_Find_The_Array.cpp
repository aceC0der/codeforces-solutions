/*
 * Problem   : 1463B - Find The Array
 * Link      : https://codeforces.com/contest/1463/problem/B
 * Submission: https://codeforces.com/contest/1463/submission/101672155
 * Rating    : 1400   Tags: bitmasks, constructive algorithms, greedy
 * Verdict   : Accepted (124 ms, 200 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2020-12-19 (Practice)
 */
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        long long x, sume, sumo;
        sume = sumo = 0;
        for(int i=0; i<n; i++){
            cin >> x;
            if(i%2)
                sume+=x;
            else
                sumo+=x;
            a.push_back(x);
        }
        int flag;
        if(sume>sumo)
            flag = 0;
        else
            flag = 1;
        for(int i=0; i<n; i++){
            if(i%2==flag)
                a[i]=1;
            cout << a[i] << " ";
        }
        cout << endl;

        
    }

    return 0;
}
