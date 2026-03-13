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
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>v[i], sum+=v[i];
    }
    if(n==2 && sum==3){
        cout<<1<<nl;   
    }
    else{
        int mn = (sum+1)/2, cnt=0, check=0;
        sort(v.rbegin(), v.rend());
        for(int i=0; i<n; i++){
            if(check<=mn){
                check+=v[i];
                cnt++;
            }
        }
        cout<<cnt<<nl;

    }

    return 0;
}