#include<bits/stdc++.h>
using namespace std;
#define MAX 50
int a[MAX][MAX];
int main()
{
int x,y,j;
cin>>x>>y;
for(int i=0;i<=x;++i)
{
j=x-i;
if((i*4+j*2)==y)
{
cout<<"YES";
return 0;
}
}
cout<<"NO";
return 0;
}
