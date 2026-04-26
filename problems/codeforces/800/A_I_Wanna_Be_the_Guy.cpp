#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
    short n ; cin >> n;
    vector<short> v;

    for(int i=0; i < n+1; i++){
        v.push_back(i);
    } 

    short x , y; cin >> x; short var;
    vector<short> xp , yp;
    for(int i=0; i<x; i++){
        cin >> var;
        xp.push_back(var);
    }

    cin >> y;
    for(int i=0; i<y; i++){
        cin >> var;
        yp.push_back(var);
    }

    for(short & var: xp){
        auto it = find(v.begin(),v.end(),var);
        if ( it != v.end()) v.erase(it);
    }

     for(short & var: yp){
        auto it = find(v.begin(),v.end(),var);
        if ( it != v.end()) v.erase(it);
    }

    if (v.size()>1) cout << "Oh, my keyboard!" ;
    else cout <<  "I become the guy.";

}


int main() {
    fast;
    int t = 1;
    
    while (t--){
        solve(); 
    }
}



/*
Problem Name: I Wanna Be the Guy
Source : contest Round 268 A
Link: https://codeforces.com/contest/469/problem/A
Rating: 800
Tags: implementation, greedy

Time Complexity: O(n^2)
*/



// another solution 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> can(n + 1, false);

    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        can[x] = true;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        can[x] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!can[i]) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";
}


/*

Time Complexity: O(n)
*/