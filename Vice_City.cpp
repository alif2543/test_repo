#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

bool check_divisible_or_not(ll n){
    if(n==1)
        return 1;
    if(n<10)
        return 0;
    if(n%10==0)
        return check_divisible_or_not(n/10);
    if(n%20==0)
        return check_divisible_or_not(n/20);
    return 0;
}

void solve()
{
    ll n; cin>>n;
    if(check_divisible_or_not(n)) cout<<"Yes"<<nl;
    else cout<<"No"<<nl;
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
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         long long N;
//         cin >> N;

//         int c2 = 0, c5 = 0;

//         while (N % 2 == 0)
//         {
//             N /= 2;
//             c2++;
//         }
//         while (N % 5 == 0)
//         {
//             N /= 5;
//             c5++;
//         }

//         if (N != 1)
//         {
//             cout << "No\n";
//         }
//         else if (c5 <= c2 && c2 <= 2 * c5)
//         {
//             cout << "Yes\n";
//         }
//         else
//         {
//             cout << "No\n";
//         }
//     }
//     return 0;
// }
