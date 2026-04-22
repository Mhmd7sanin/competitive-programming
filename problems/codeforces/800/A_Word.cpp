#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
    short nU = 0, nL = 0; string str, newString = ""; cin >> str;

    for(char &s : str){
        if(s>=65&&s<=90) nU++;
        else nL++;
    }

    if(nU>nL) {
        for(char &s : str){
           if(s>90) s-=32;
            newString+=s;
        }
    }
    else {
        for(char &s : str){
           if(s>=65&&s<=90) s+=32;
            newString+=s;
        }
    }

    cout<< newString;

}


int main() {
    fast;
    int t = 1;
    
    while (t--){
        solve(); 
    }
}



/*
Problem Name: Word
Source : contest Round 55 A
Link: https://codeforces.com/contest/59/problem/A
Rating: 800
Tags: implementation, string

Time Complexity: O(n)
*/