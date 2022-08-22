#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(x>= y/4 && x<=y/2 && y%2==0)
{
printf("Yes\n");
}
else
printf("No\n");
return 0;
}
