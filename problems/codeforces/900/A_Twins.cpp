#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
   short n; cin >> n;
   int total=0;
   vector<short> v(n);

   for(int i=0; i < n ;i++){
    cin >> v[i];
    total += v[i];
   }

   sort(v.rbegin(),v.rend());

   int taken=0; short count=0;

   for(int i=0; i < n ;i++){
    taken += v[i];
    count++;

    if(taken> total-taken) break;
   }
   cout << count;
}


int main() {
    fast;
    int t = 1;
    
    while (t--){
        solve(); 
    }
}



/*
Problem Name: Twins
Source : contest Round 111 A
Link: https://codeforces.com/contest/160/problem/A
Rating: 900
Tags: greedy, sortings

Time Complexity: O(n)
*/