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
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<int> pre(n+1);
    // pre[0] = v[0];
    for(int i=1; i<=n; i++){
        pre[i] = pre[i-1]+v[i-1];
    }
    for(int x :pre){
        cout<<x<<" ";
    }
    return 0;
}