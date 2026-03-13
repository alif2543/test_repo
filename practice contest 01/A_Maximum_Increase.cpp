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
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int cnt=1, ans=1;
    for(int i=0; i<n-1; i++){
        if(v[i]<v[i+1]){
            cnt++;
        }
        else{
            cnt=1;
        }
        ans=max(ans, cnt);
    }
    cout<<ans<<nl;

    return 0;
}