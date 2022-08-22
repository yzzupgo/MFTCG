#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define fastio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define pf push_front
#define mp make_pair
#define mod 1000000007
#define vll vector<ll>
#define inf 3e15 +7
#define pll pair<ll,ll>
#define ff first
#define ss second
#define PI acos(-1)
#define prm 998244353
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>ordered_set;
int main() {
fastio;
ll T = 1;
while(T--) {
ll n;
cin >> n;
ll tp = 108 * n;
if(n < 191) {
cout << "Yay!";
} else if(n == 191) {
cout << "so-so";
} else {
cout << ":(";
}
}
}
