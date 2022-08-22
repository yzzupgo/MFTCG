#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
for (int i=0;i<100;i++)
for (int n=0;n<100;n++)
if (i+n==a&&i*2+n*4==b)
{
cout<<"Yes";
return 0;
}
cout<<"No";
return 0;
}
