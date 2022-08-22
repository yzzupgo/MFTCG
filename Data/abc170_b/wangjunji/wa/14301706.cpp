#include<iostream>
#include<algorithm>
int main()
{
int x, y;
scanf("%d%d", &x, &y);
for(int i=1;i<=x;i++)
{
int ans=2*i+4*(x-i);
if(ans==y)
{
printf("Yes");
return 0;
}
}
printf("No");
return 0;
}
