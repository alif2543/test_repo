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
    map<int,int> mp;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        mp[x]++;
    }
    int ans=0, zero =0;
    for(auto x : mp){
        if(x.first==0){
            zero=1;
            continue;
        }
        if(x.second>=2) zero=1;
        if(x.second%2!=0) ans++;
    }
    if(zero) ans++;
    cout<<ans<<nl;
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