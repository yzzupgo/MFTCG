#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
int a,n;
cin>>a>>n;
for(int i=1;i<a;i++)
{
if((4*i)+2*(a-i)==n)
{
cout<<"YES";
return 0;
}
}
cout<<"NO"<<endl;
}
