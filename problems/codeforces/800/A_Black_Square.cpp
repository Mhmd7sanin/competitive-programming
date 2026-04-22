#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
    int a1, a2, a3, a4 , sum=0; string str;
    cin >> a1 >> a2 >> a3 >> a4 >> str;

    for( char &s: str){
        if (s=='1') sum+=a1;
        else if (s=='2') sum+= a2;
        else if (s=='3') sum+= a3;
        else  sum+= a4;
    }

    cout<< sum;
}


int main() {
    fast;
    int t = 1;
    
    while (t--){
        solve(); 
    }
}


/*
Problem Name: Black Square
Source : contest Round 247 A
Link: https://codeforces.com/contest/431/problem/A
Rating: 800
Tags: implementation

Time Complexity: O(n)
*/
