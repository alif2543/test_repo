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
    int n; cin>>n;
    int one=0, two=0, maxlead=0, winner=0;
    while(n--){
        int x, y; cin>>x>>y;
        one+=x, two+=y;
        int lead = abs(one-two);
        if(lead>maxlead){
            maxlead=lead;
            if(one>two) winner=1;
            else winner=2;
        }
    }
    cout<<winner<<" "<<maxlead<<nl;
    return 0;
}