// link - https://www.codechef.com/problems/COUPON2 //oddly specific on upper and lower case

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
    int d, c;
    cin >> d >> c;
    int a=0, b=0;
    for(int i=0; i<3; i++){
        int x; cin>>x; a+=x;
    }
    for(int i=0; i<3; i++){
        int x; cin>>x; b+=x;
    }
    int with_coupon = a+b+c;
    int without_coupon = a+b+2*d;
    if(a<150) with_coupon+=d;
    if(b<150) with_coupon+=d;
    if(with_coupon<without_coupon) yes;
    else no;
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