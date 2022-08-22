#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
for (int i = 0; i <= x; ++i)
{
int a = i*4 + (x-i)*2;
if(a==y)
{
printf("Yes\n");
return 0;
}
}
printf("No\n");
return 0;
}
