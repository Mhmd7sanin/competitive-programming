#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(NULL);

void solve()
{
    string str, newstr= ""; cin >> str;


    for (int i=0 ; i< str.length(); i++){
        if(i!= str.length()-3){
            if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
                if (newstr.length() != 0) cout << newstr << " "; newstr= "";
                i+=2; continue;
            }
            else newstr += str[i];
        }
        else {
            if (i == str.length()-3){
            
                if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
                    cout << newstr << " "; newstr= "";
                    i+=2; continue;
                }
                else newstr += str[i];
            }

            if (i == str.length()-2){
            
                if(str[i-1]=='W' && str[i]=='U' && str[i+1]=='B'){
                    cout << newstr << " "; newstr= "";
                    i+=2; continue;
                }
                else newstr += str[i];
            }
            else if (i == str.length()-1){
                if(str[i-2]=='W' && str[i-1]=='U' && str[i]=='B'){
                    cout << newstr << " "; newstr= "";
                    i+=2; continue;
                }
                else newstr += str[i];

            }

        }
    }

    cout << newstr;
    
}


int main() {
    fast;
    int t = 1;
    
    while (t--){
        solve(); 
    }
}



/*
Problem Name: Dubstep
Source : contest Round 130 A
Link: https://codeforces.com/contest/208/problem/A
Rating: 900
Tags: strings

Time Complexity: O(n)
*/