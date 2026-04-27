#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve(){
    short n, t; cin >> n >> t;

    if(n==1 && t==10) {
        cout << -1; return;
    }
    
    int xt = t;
    if(t==10) {
        t=1;
    }

    vector<short> min(n,t);

    if(xt==10) min.back() = 0;

    for(int i=0 ; i< n; i++) cout << min[i];

}


int main() {
    fast;
    int t = 1;
    
    while (t--){
        solve(); 
    }
}



/*
Problem Name: Olesya and Rodion
Source : contest Round 324 A
Link: https://codeforces.com/contest/584/problem/A
Rating: 1000
Tags: maths

Time Complexity: O(n)
*/