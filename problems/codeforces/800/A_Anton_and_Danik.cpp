#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
    int n, sA=0, sD=0; string str;
    cin >>n >> str;

    for( char &s: str){
        if(s=='A') sA++;
        else sD++;
    }

    if (sA>sD) cout << "Anton";
    else if (sA<sD) cout << "Danik";
    else cout <<"Friendship";
    
}


int main() {
    fast;
    int t = 1;
    
    while (t--){
        solve(); 
    }
}



/*
Problem Name: Anton and Danik
Source : contest
Link: https://codeforces.com/contest/734/problem/A
Rating: 800
Tags: implementation, string

Time Complexity: O(n)
*/