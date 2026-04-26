#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
   string str; cin >> str;
   string newstr = ""; // vowels = "A", "O", "Y", "E", "U", "I"

   for (char & chr : str){
    chr = tolower(chr); 
    if (chr!='a' && chr!='o' && chr!='y' && chr!='e' && chr!='u' && chr!='i'){
        newstr  += '.'; newstr += chr; 
    }
   }

   cout << newstr;
}


int main() {
    fast;
    int t = 1;
    
    while (t--){
        solve(); 
    }
}

/*
Problem Name: String Task
Source : contest Round 89 A
Link: https://codeforces.com/contest/118/problem/A
Rating: 1000
Tags: implementation, string

Time Complexity: O(n)
*/