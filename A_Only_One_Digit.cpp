// link - https://codeforces.com/contest/2126/problem/A

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
// #include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif
// codeforces round 1037 (div. 3)
int main()
{
    fastIO();
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        if(x>=0 && x<=9)
            cout << x << nl;
        else
        {
            int mn = INT_MAX;
            while(true)
            {
                if(x==0)
                    break;
                int last = x % 10;
                mn = min(last, mn);
                x /= 10;
            }
            cout << mn << nl;
        }
    }

    return 0;
}