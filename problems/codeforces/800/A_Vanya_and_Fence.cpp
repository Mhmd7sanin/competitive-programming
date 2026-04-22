#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
   int n, h, x, sum = 0; cin >> n >> h;

   while(n--){
    cin >> x; 
    if (x>h) sum+=2;
    else sum++;
   }
   
   cout<< sum;
}


int main() {
    fast;
    int t=1;

    while(t--){
       solve();
    }
}


/*
Problem Name: Vanya and Fence
Source : contest
Link: https://codeforces.com/contest/677/problem/A
Rating: 800
Tags: implementation

Time Complexity: O(n)
*/