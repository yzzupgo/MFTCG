#include<bits/stdc++.h>
using namespace std;
int main()
{
long int x,y,i,j;
double n,l;
cin>>x>>y;
n=(4*x-y)/2;
l=(y-2*x)/2;
i=floor(n);
j=floor(l);
if((i==n && n>=0) &&(j==l&&l>=0))
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
