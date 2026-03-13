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
//codeforces round 1037 (div. 3)
int main()
{
    fastIO();
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i<n; i++)
            cin >> v[i];

        int cnt = 0;
        int zero_count = 0;
        for (int i = 0; i < n-k; i++)
        {
            zero_count = 0;
            for(int j=i; j<i+k; j++)
            {
                if(v[j]==0)
                    zero_count++;
                if(v[j]==1)
                    zero_count = 0;
            }
            if(zero_count==k)
                cnt++;
        }
        cout << cnt << nl;
    }

    return 0;
}