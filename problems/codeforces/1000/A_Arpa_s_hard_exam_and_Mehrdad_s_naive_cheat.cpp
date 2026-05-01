#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
    int n ; cin >> n ;

    if (n == 0) {
        cout << 1;
        return;
    }

    int cycle[] = {6, 8, 4, 2}; 

    cout << cycle[n % 4];
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
Problem Name: Arpa’s hard exam and Mehrdad’s naive cheat
Source : contest Round 383 A
Link: https://codeforces.com/contest/742/problem/A
Rating: 1000
Tags: greedy, implementation, math, number theory

Time Complexity: O(1)
*/