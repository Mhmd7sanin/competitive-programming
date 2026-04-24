#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    short n, count = 0; string str; char color; cin >> n >> str;
	color = str[0];
	for (short i = 1; i < str.size(); i++) {
		if (color == str[i]) count++;
		color = str[i];
	}
	cout << count;
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
Problem Name: Stones on the Table
Source : contest Round 163 A
Link: https://codeforces.com/contest/266/problem/A
Rating: 800
Tags: implementation

Time Complexity: O(n)
*/