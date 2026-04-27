#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
  vector<string> p(4);
  for(int i = 0 ; i < 4 ; i++) cin>> p[i];

  for(int i = 0 ; i < 3 ; i++){
    for(int j = 0 ; j < 3 ; j++){

        int black = 0;

        for (int x = i ; x < i+2 ; x++){
            for (int y = j ; y < j+2 ; y++){
                if(p[x][y] == '#')  black++; 
            }
        }

        if(black>=3 || black<=1) {
            cout << "YES"; return;
        }
        else black = 0;
    }
  }
  
  cout << "NO";
}


int main() {
    fast;
    int t = 1;
    
    while (t--){
        solve(); 
    }
}



/*
Problem Name: IQ Test
Source : contest Round 176 A
Link: https://codeforces.com/contest/287/problem/A
Rating: 1100
Tags: brute force, implementation

Time Complexity: O(1)
*/