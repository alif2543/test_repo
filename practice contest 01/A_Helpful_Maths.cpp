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
    string s; cin>>s;
    int len = s.size();
    vector<int> v;
    for(int i=0; i<len; i+=2){
        v.push_back(s[i]-48);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size()-1; i++){
        cout<<v[i]<<"+";
    }
    cout<<v[v.size()-1]<<nl;

    return 0;
}