#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
   char dir; cin >> dir;
   string str; cin >> str;

  string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for (char &c : str) {
        int idx = kb.find(c);
        cout << (dir == 'R' ? kb[idx - 1] : kb[idx + 1]);
    }

    cout << endl;
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
Problem Name: Keyboard
Source : contest Round 271 A
Link: https://codeforces.com/contest/474/problem/A
Rating: 900
Tags: implementation

Time Complexity: O(nlogn)
*/