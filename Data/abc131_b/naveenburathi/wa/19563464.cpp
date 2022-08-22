#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,l;
cin>>n>>l;
vector<int >a;
for(int i=0;i<n;i++)
a.push_back(l+i);
if(find(a.begin(),a.end(),-1)!=a.end())
{
cout<<accumulate(a.begin(),a.end(),0);
}
else
{
if(accumulate(a.begin(),a.end(),0)<0)
cout<<accumulate(a.begin(),a.end(),0)-*max_element(a.begin(),a.end());
else
cout<<accumulate(a.begin(),a.end(),0)-*min_element(a.begin(),a.end());
}
return 0;
}
