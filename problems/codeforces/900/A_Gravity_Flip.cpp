#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    short n, x; cin >> n;
    vector<short> v;

    while (n--){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    for(short &i: v){
        cout<< i << " ";
    }
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
Problem Name: Gravity Flip
Source : contest Round 238 A
Link: https://codeforces.com/contest/405/problem/A
Rating: 900
Tags: implementation, greedy, sortings

Time Complexity: O(nlogn)
*/