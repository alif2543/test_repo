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
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int diff = 0, mn = v[0];
    for(int i=1; i<n; i++){
        if(mn<v[i]){
            diff = max(diff, v[i]-mn);
        }
        else mn = v[i];
    }
    if(diff>0) cout<<diff<<nl;
    else cout<<"UNFIT"<<nl;
}

void solve_2(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int mn=INT_MAX, ans=0;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(mn<v[i]){

            }
        }
    }
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