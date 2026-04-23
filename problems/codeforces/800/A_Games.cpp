#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
   short n , h, a, sum = 0; cin>> n;
   vector<short> vs; 
   vector<vector<short>> vl;

   while (n--){
    cin >> h >> a; 
    vs.push_back(h); vs.push_back(a);
    vl.push_back(vs); vs.clear();
   }

   for(short i=0; i<vl.size(); i++){
    for(short j=i+1; j<vl.size(); j++){
        if(vl[i][0]==vl[j][1]) sum++;
        if(vl[i][1]==vl[j][0]) sum++;
    }
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
Problem Name: Games
Source : contest Round 164 A
Link: https://codeforces.com/contest/268/problem/A
Rating: 800
Tags: brute force

Time Complexity: O(n*2)
*/