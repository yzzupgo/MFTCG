#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define black_tree tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define pair_black_tree tree<pair<ll,ll>,null_type,less_equal<pair<ll,ll>>,rb_tree_tag,tree_order_statistics_node_update>
#define gp __gnu_pbds
#define INF 1000000000
#define MOD 1000000007
#define MAX 4000001
#define endl '\n'
#define ll long long
#define ld long double
#define lli long long int
#define ull unsigned long long
#define ulli unsigned long long int
#define pb push_back
#define pf push_front
#define ook order_of_key
#define fbo find_by_order
#define ffo find_first_of
#define np next_permutation
#define mp make_pair
#define eb emplace_back
#define mae max_element
#define mie min_element
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define ff first
#define ss second
using namespace std;
using namespace gp;
ll a,b;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
cin>>a>>b;
for(int i=0;i<=a;i++){
if(2*i+4*(a-i)==b){
cout<<"Yes";
return 0;
}
}
cout<<"No";
}
