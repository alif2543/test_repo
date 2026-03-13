// link - https://www.codechef.com/problems/FLOW010

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
    char x;
    cin >> x;
    if (x == 'b' || x == 'B')
        cout << "BattleShip" << nl;
    if (x == 'c' || x == 'C')
        cout << "Cruiser" << nl;
    if (x == 'd' || x == 'D')
        cout << "Destroyer" << nl;
    if (x == 'f' || x == 'F')
        cout << "Frigate" << nl;
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