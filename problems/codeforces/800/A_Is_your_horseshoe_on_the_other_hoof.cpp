#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
    vector<long> v; int sum=0, x;
    cin>>x; v.push_back(x);
    for(int i=1; i<4; i++){
        cin>>x;
        for(int j = v.size()-1; j>=0; j--){
            if(v[j]==x) {
                sum++; break;
            }
            else if(j==0) v.push_back(x);
        }
    }

    cout<< sum;
}


int main() {
    fast;
    int t = 1;
    
    while (t--){
        solve(); 
    }
}



/*
Problem Name: Is your horseshoe on the other hoof?
Source : contest Round 141 A
Link: https://codeforces.com/contest/228/problem/A
Rating: 800
Tags: implementation

Time Complexity: O(n)
*/