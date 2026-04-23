#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
    short row , col;
    short matrix[5][5];

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j){
            cin>> matrix[i][j];
            if(matrix[i][j]==1){
                row =i; col =j; break;
            }
        }
    }

    cout << abs(row-2) + abs(col-2);
}


int main() {
    fast;
    int t = 1;
    
    while (t--){
        solve(); 
    }
}



/*
Problem Name: Beautiful Matrix
Source : contest Round 161 A
Link: https://codeforces.com/contest/263/problem/A
Rating: 800
Tags: implementation

Time Complexity: O(1)
*/