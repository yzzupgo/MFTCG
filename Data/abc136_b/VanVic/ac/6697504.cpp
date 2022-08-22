#include<bits/stdc++.h>
using namespace std;
int main()
{
int N;
scanf("%d",&N);
int mul=10,cnt=0,n=N,i=0;
while(n>0)
{
n=n/10;
i++;
}
if(i==2||i==4||i==6)
{
if(i==2)
cout<<9<<endl;
else if(i==4)
cout<<909<<endl;
else
cout<<90909<<endl;
}
else
{
if(i==1)
cout<<N<<endl;
else if(i==3)
cout<<9+N-99<<endl;
else
cout<<909+N-9999<<endl;
}
return 0;
}
