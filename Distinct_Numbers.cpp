// link - https://codeforces.com/problemset/gymProblem/102961/A

#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; //less_equal for mlset.
int main()
{
    fastIO();
    int n; cin>>n;
    set<int> st;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<nl;

    return 0;
}