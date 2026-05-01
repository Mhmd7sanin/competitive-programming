#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    string s , t ; cin >> t >> s;

    if (t.length()!=s.length()) {
        cout<< "NO"; return;
    }

    for(int i=0; i<t.length(); i++){
        if(t[i]!=s[s.length()-i-1]) {
            cout<< "NO"; return;
        }
    }

    cout << "YES";
}

int main()
{
    fast;
    int t = 1;

    while (t--)
    {
        solve();
    }
}

/*
Problem Name: Translation
Source : contest Round 40 A
Link: https://codeforces.com/contest/41/problem/A
Rating: 800
Tags: greedy, implementation, strings

Time Complexity: O(n)
*/