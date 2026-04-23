#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
   int n, sum = 0; cin >> n; string str1="", str2;

   while(n--){
       cin >> str2;

       if(str1!=str2){
           sum++; str1=str2;
       } 
       else str1=str2;
   }

   cout << sum;
}


int main() {
    fast;
    int t = 1;
    
    while (t--){
        solve(); 
    }
}


/*
Problem Name: Magnets
Source : contest Round 200 A
Link: https://codeforces.com/contest/344/problem/A
Rating: 800
Tags: implementation

Time Complexity: O(n)
*/