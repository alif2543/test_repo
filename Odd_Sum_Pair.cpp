// link - https://www.codechef.com/problems/ODDSUMPAIR

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
    int a, b, c; cin>>a>>b>>c;
    if((a+b)%2==1 || (b+c)%2==1 ||(c+a)%2==1) yes;
    else no;
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