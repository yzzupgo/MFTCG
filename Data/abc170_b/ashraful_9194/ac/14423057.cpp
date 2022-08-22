#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T> using orderedSet =tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define pb push_back
#define boundary(i,j) (i>=0 && i<n && j>=0 && j<m)
int X[]={-1,1,0,0};
int Y[]={0,0,1,-1};
int main()
{
int x,y;
cin>>x>>y;
if(y%2)
{
cout<<"No"<<endl;
return 0;
}
int lo=(y/4)+(y%4)/2;
int hi=y/2;
if(x>=lo && x<=hi) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
