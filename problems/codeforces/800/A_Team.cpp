#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
   short n , x , sum = 0; cin >> n; 

   while(n--){
    int sumx = 0;
      for (int i=0 ; i<3 ; i++){
        cin>>x;
        if(x==1) sumx++;
      }

    if (sumx>=2) sum++;
   }

   cout << sum;
}

int main()
{
    fast;
    int t = 1;

    while (t--){
        solve();
    }
}



/*
Problem Name: Team
Source : contest Round 143 A
Link: https://codeforces.com/contest/231/problem/A
Rating: 800
Tags: brute force, greedy

Time Complexity: O(1)
*/