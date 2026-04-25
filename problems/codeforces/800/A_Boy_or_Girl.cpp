#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    string str; cin>> str;
    set<char> st;

    for(char &chr : str){
        st.insert(chr);
    }

    if(st.size() % 2) cout << "IGNORE HIM!";
    else cout<< "CHAT WITH HER!";
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
Problem Name: Boy or Girl
Source : contest Round 146 A
Link: https://codeforces.com/contest/236/problem/A
Rating: 800
Tags: implementation, brute force, strings

Time Complexity: O(n)
*/