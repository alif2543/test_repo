// link - https://www.codechef.com/problems/AMR15A

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
    int n, cnt_even=0, cnt_odd=0;cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        if(x%2==0){
            cnt_even++;
        }
        else cnt_odd++;
    }
    if(cnt_even>cnt_odd) cout<<"READY FOR BATTLE"<<nl;
    else cout<<"NOT READY"<<nl;

    return 0;
}