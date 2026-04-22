#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
    int n, x, sum = 0; cin>> n;
    stack<int> hired;

    while(n--){
        cin>>x;

        if(x>=1) {
             while(x--){
                hired.push(1);
            }
        }
        else{
            if(!hired.empty()) hired.pop();
            else sum++;
        }
    }

    cout << sum;
}


int main() {
    fast;
    int t = 1;
    
    while (t--){
        solve(); 
    }
}


/*
Problem Name: Police Recruits
Source : contest Round 244 A
Link: https://codeforces.com/contest/427/problem/A
Rating: 800
Tags: implementation

Time Complexity: O(n)
*/