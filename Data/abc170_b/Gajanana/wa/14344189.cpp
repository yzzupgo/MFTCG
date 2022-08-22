#include<bits/stdc++.h>
using namespace std;
int main()
{
int max,k,val;
cin>>k>>val;
max=k*4;
if(val>max || val<2)
cout<<"No";
else
{
if(val%2==0)
cout<<"Yes";
else
cout<<"No";
}
return 0;
}
