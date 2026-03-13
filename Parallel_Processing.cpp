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
    vector<ll>  v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<ll> pre(n+1), suff(n+1);
    pre[0]=0;
    suff[n]=0;
    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1]+v[i-1];
    }
    for(int i=n-1; i>=0; i--){
        suff[i] = suff[i+1]+v[i];
    }
    ll ans = LLONG_MAX;
    for(int i=0; i<=n; i++){
        ans = min(ans, max(pre[i], suff[i]));
    }
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