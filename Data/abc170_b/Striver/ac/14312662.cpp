#include <bits/stdc++.h>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int X,Y;
cin>>X>>Y;
int count1=X;
int count2=0;
int d=0;
while(count2<=X)
{
if(((count1)*2)+((count2)*4)==Y)
{
d=1;
break;
}
else
{
count1--;
count2++;
}
}
if(d==1)
{
cout<<"Yes";
}
else
{
cout<<"No";
}
}
