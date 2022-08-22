#include "bits/stdc++.h"
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(a) a.begin(),a.end()
typedef tree <ll, null_type, less <ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int main(void)
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n, m;
cin>>n>>m;
for(int i = 0; i <= n; i++) {
ll l = i;
ll r = n - i;
if(l * 2 + r * 4 == m) {
cout<<"Yes\n";
return 0;
}
}
cout<<"No\n";
return 0;
}
