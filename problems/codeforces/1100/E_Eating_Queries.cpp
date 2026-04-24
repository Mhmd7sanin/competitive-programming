#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ul unsigned long 
#define ull unsigned long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
 
void solve()
{
    int n, q; cin>> n >> q;
    vector<int> v; ull x;
 
    for(int i=0; i < n; i++){
        cin>> x;
        v.push_back(x);
    }
 
    sort(v.rbegin(), v.rend());
 
    for(int i=1; i < n; i++){
        v[i] += v[i-1];
    }
 
    for(int i=0; i < q; i++){
        cin>>x; ull sumq=0; int sum=0;
    
        auto it = lower_bound(v.begin(), v.end(), x);
 
        if (it == v.end())  cout << -1 << '\n';
        else  cout << (it - v.begin() + 1) << '\n';
    }
}
 
 
int main() {
    fast;
    int t = 1; cin>> t;
    while (t--){
        solve(); 
    }
}

/*
Problem Name: Eating Queries
Source : contest Round 790 E
Link: https://codeforces.com/contest/1676/problem/E
Rating: 1100
Tags: binary search, greedy, sortings

Time Complexity: O(n)
*/