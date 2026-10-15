/*
 * Problem   : 1674C - Infinite Replacement
 * Link      : https://codeforces.com/contest/1674/problem/C
 * Submission: https://codeforces.com/contest/1674/submission/155691079
 * Rating    : 1000   Tags: combinatorics, implementation, strings
 * Verdict   : Accepted (31 ms, 0 KB)
 * Language  : C++17 (GCC 7-32)
 * Date      : 2022-05-02 (Practice)
 */
#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define vpi vector<pi >
#define vpl vector<pl >
#define endl '\n'
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x & (1LL << k)) > 0 ? 1 : 0)
#define TestCases int tt,qq; cin>>tt ;for(qq=1;qq<=tt;qq++)
#define fios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(a) a.begin(),a.end()
#define rep(i, a, b) for(int i=a; i<b; i++)
#define pre(i, a, b) for(int i=a; i>=b; i--)

#include<bits/stdc++.h>
using namespace std;
 
// // Multiplies str1 and str2, and prints result.
// string multiply(string num1, string num2)
// {
//     int len1 = num1.size();
//     int len2 = num2.size();
//     if (len1 == 0 || len2 == 0)
//     return "0";
 
//     // will keep the result number in vector
//     // in reverse order
//     vector<int> result(len1 + len2, 0);
 
//     // Below two indexes are used to find positions
//     // in result.
//     int i_n1 = 0;
//     int i_n2 = 0;
     
//     // Go from right to left in num1
//     for (int i=len1-1; i>=0; i--)
//     {
//         int carry = 0;
//         int n1 = num1[i] - '0';
 
//         // To shift position to left after every
//         // multiplication of a digit in num2
//         i_n2 = 0;
         
//         // Go from right to left in num2            
//         for (int j=len2-1; j>=0; j--)
//         {
//             // Take current digit of second number
//             int n2 = num2[j] - '0';
 
//             // Multiply with current digit of first number
//             // and add result to previously stored result
//             // at current position.
//             int sum = n1*n2 + result[i_n1 + i_n2] + carry;
 
//             // Carry for next iteration
//             carry = sum/10;
 
//             // Store result
//             result[i_n1 + i_n2] = sum % 10;
 
//             i_n2++;
//         }
 
//         // store carry in next cell
//         if (carry > 0)
//             result[i_n1 + i_n2] += carry;
 
//         // To shift position to left after every
//         // multiplication of a digit in num1.
//         i_n1++;
//     }
 
//     // ignore '0's from the right
//     int i = result.size() - 1;
//     while (i>=0 && result[i] == 0)
//     i--;
 
//     // If all were '0's - means either both or
//     // one of num1 or num2 were '0'
//     if (i == -1)
//     return "0";
 
//     // generate the result string
//     string s = "";
     
//     while (i >= 0)
//         s += std::to_string(result[i--]);
 
//     return s;
// }

// string findSum(string str1, string str2)
// {
//     // Before proceeding further, make sure length
//     // of str2 is larger.
//     if (str1.length() > str2.length())
//         swap(str1, str2);
 
//     // Take an empty string for storing result
//     string str = "";
 
//     // Calculate length of both string
//     int n1 = str1.length(), n2 = str2.length();
 
//     // Reverse both of strings
//     reverse(str1.begin(), str1.end());
//     reverse(str2.begin(), str2.end());
 
//     int carry = 0;
//     for (int i=0; i<n1; i++)
//     {
//         // Do school mathematics, compute sum of
//         // current digits and carry
//         int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
//         str.push_back(sum%10 + '0');
 
//         // Calculate carry for next step
//         carry = sum/10;
//     }
 
//     // Add remaining digits of larger number
//     for (int i=n1; i<n2; i++)
//     {
//         int sum = ((str2[i]-'0')+carry);
//         str.push_back(sum%10 + '0');
//         carry = sum/10;
//     }
 
//     // Add remaining carry
//     if (carry)
//         str.push_back(carry+'0');
 
//     // reverse resultant string
//     reverse(str.begin(), str.end());
 
//     return str;
// }

int main()
{
    fios
    TestCases{
        string s, t;
        cin >> s >> t;
        bool isA = false, isAnother = false;
        int tsz = t.size();
        rep(i, 0, tsz){
            if(t[i]=='a'){
                isA = true;
            }
        }
        if(!isA){
            cout << (1LL<<s.size()) << endl;
        }
        else {
            if(t=="a") cout << 1 << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}
