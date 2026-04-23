#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
   short a , b, Year = 0; cin >> a >> b;

   while(a<=b){
            a*=3; b*=2;
            Year++;
   }
   
   cout << Year;
}


int main() {
    fast;
    int t = 1;
    
    while (t--){
        solve(); 
    }
}




/*
Problem Name: Bear and Big Brother
Source : contest Round 405 A
Link: https://codeforces.com/contest/791/problem/A
Rating: 800
Tags: implementation

Time Complexity: O(n)
*/

