#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x,y;
cin>>x>>y;
int ans;
for(int i=1;i<=x;i++)
{
ans = i*2;
ans+=abs((x-i))*4;
if(ans == y)
{
cout<<"Yes";
return 0;
}
}
if((x*2) == y || (x*4) == y)
cout<<"Yes";
else
cout<<"No";
return 0;
}
