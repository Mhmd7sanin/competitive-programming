#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
    short n, k; cin >> n >> k ;
    set<char> st; string pass = ""; 
    short pos = 97;

    while(n--){

        if(pass=="") {
            pass += char(pos);
            st.insert(char(pos));
            k--; pos++;
        }
        else {
            if(k>0){
                pass += char(pos);
                st.insert(char(pos));
                k--; pos++;
            }
            else{
                if(pass.back()!=*st.begin()) pass += *st.begin();
                else pass += *(++st.begin());
            }
        }
    }

    cout << pass;
}

int main()
{
    fast;
    int t = 1;

    while (t--)
    {
        solve();
    }
}

/*
Problem Name: New Password
Source : contest VK cup 2017 
Link: https://codeforces.com/contest/770/problem/A
Rating: 800
Tags: greedy, implementation, special problem

Time Complexity: O(n)
*/