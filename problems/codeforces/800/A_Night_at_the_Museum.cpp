#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    string str; cin>> str;
    int sum=0; char curr = 'a';

    for(char &chr : str){
        int direct = abs(chr-curr);
        int reverse = 26 - direct;

        sum+= min(direct,reverse);
        curr= chr;
    }

    cout << sum;
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
Problem Name: Night at the Museum
Source : contest Round 376 A
Link: https://codeforces.com/contest/731/problem/A
Rating: 800
Tags: implementation

Time Complexity: O(n)
*/