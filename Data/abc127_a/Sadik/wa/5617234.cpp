#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
scanf("%d %d",&a,&b);
if(a<=5)
{
printf("0\n");
}
else if(a>=6&&a<=12)
{
printf("%d\n",b*.5);
}
else
{
printf("%d\n",b);
}
return 0;
}
