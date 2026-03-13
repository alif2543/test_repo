// link - https://www.codechef.com/problems/FLOW005

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n; cin>>n;
    int a = n%100;
    int b = a%50;
    int c = b%10;
    int d = c%5;
    int e = d%2;
    cout<<n/100+a/50+b/10+c/5+d/2+e<<nl;
}

int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}