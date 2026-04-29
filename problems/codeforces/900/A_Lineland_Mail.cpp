#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    ull xmin , xmax ;

    for (int i = 0; i < n; i++) cin >> v[i];


    for (int i = 0; i < n; i++){
        if(i==0){
             if ((v[i] < 0 && v[i+1] < 0)||v[i] >= 0 && v[i+1] >= 0){
                    xmin = abs(abs(v[i]) - abs(v[i+1]));
                    
                }
                else {
                    xmin = abs(v[i+1] - v[i]);
                }

                xmax = v.back()-v[i];
        }
        else if (i==v.size()-1){
            if ((v[i] < 0 && v[i-1] < 0)||v[i] >= 0 && v[i-1] >= 0) {
                    xmin = abs(abs(v[i]) - abs(v[i-1]));
                }
                else {
                    xmin = abs(v[i-1] - v[i]);
                }

                xmax = v[i]-v.front();
        }
        else {
            ull x , y;
            if ((v[i] < 0 && v[i-1] < 0)||v[i] >= 0 && v[i-1] >= 0){
                    x = abs(abs(v[i]) - abs(v[i-1]));
                }
                else {
                    x = v[i]-v[i-1];
                }

            if ((v[i] < 0 && v[i+1] < 0)||v[i] >= 0 && v[i+1] >= 0){
                y = abs(abs(v[i]) - abs(v[i+1]));
            }
            else{
                y = v[i+1]-v[i];
            }

            xmin = min(x,y);

            x = v.back()-v[i];
            y = v[i]-v.front();

            xmax = max(x,y);

        }

        
        cout << xmin << " " << xmax << endl; xmin= xmax=0;
    }
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
Problem Name: Lineland Mail
Source : contest #pi A
Link: https://codeforces.com/contest/567/problem/A
Rating: 900
Tags: greedy, implementation

Time Complexity: O(n)
*/