#include<stdio.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
int main()
{
int n,res;
scanf("%d",&n);
if(n > 99999)
{
res = 90909;
}
else if(n > 10000)
{
res = (n - 9999) + 909;
}
else if(n > 999)
{
res = 909;
}
else if(n > 100)
{
res = (n - 99) + 9;
}
else if(n > 9)
{
res = 9;
}
else
{
res = n;
}
printf("%d\n",res);
return 0;
}
