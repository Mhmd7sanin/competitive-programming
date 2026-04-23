#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
    string str1, str2; cin >> str1 >> str2;

    for (int i=0; i<str1.length(); i++){
        if(tolower(str1[i])>tolower(str2[i])){
            cout<< "1"; return;
        }
        else if (tolower(str1[i])<tolower(str2[i])){
            cout << "-1"; return;
        }
    }

    cout << "0";
}


int main() {
    fast;
    int t = 1;
    
    while (t--){
        solve(); 
    }
}




/*
Problem Name: Petya and Strings
Source : contest Round 85 A
Link: https://codeforces.com/contest/112/problem/A
Rating: 800
Tags: implementation, string

Time Complexity: O(n)
*/
