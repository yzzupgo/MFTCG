#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,l;
cin>>n>>l;
vector<int> flavor(n);
flavor[0]=l;
int sum=l;
for(int i=1 ; i<n ; ++i)
{
flavor[i]=i+l;
sum+=flavor[i];
}
int ans=abs(sum-(sum-flavor[0]));
int diff=sum-(sum-flavor[0]);
for(int i=1 ; i<n ; ++i)
{
int curr_diff=sum-(sum-flavor[i]);
if(ans>abs(curr_diff))
{
ans=abs(curr_diff);
diff=curr_diff;
}
}
cout<<sum-ans<<endl;
return 0;
}
