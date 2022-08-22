#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
scanf("%d",&n);
int i;
int s=n;
for(i=0; s>0; i++)
{
s/=10;
}
if(i%2==0)
{
if(i==2)printf("9");
else if(i==4)printf("909");
else if(i==6)printf("90909");
}
else
{
if(i==1)printf("%d",n);
else if(i==3)printf("%d",909-999+n);
else if(i==5)printf("%d",90909+-99999+n);
}
return 0;
}
