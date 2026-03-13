// Link - https://www.codechef.com/problems/T20MCH

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastIO();
    int r, o, c;
    cin>>r>>o>>c;
    int a = c+(20-o)*36;
    if(a>r) yes;
    else no;

    return 0;
}