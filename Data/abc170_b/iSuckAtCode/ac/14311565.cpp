#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
int a,n;
cin>>a>>n;
for(int i=0;i<=a;i++)
{
if((4*i)+2*(a-i)==n)
{
cout<<"Yes";
return 0;
}
}
cout<<"No"<<endl;
}
